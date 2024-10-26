#include <stdio.h>
#include <math.h>

// ADC value to voltage function
float ADCValueToVoltage(int Value_ADC, float Voltage_Ref);

// Degrees K to degrees C function 
float DegreesKToDegreesC(float Thermistor_TempDegK);

// Forward TC function
float NISTdegCtoMilliVoltsKtype(float tempDegC);

// Inverse TC function
float NISTmilliVoltsToDegCKtype(float tcEMFmV);

int main()
{
    //Define pins
    int A0;
    int A1;
    
    // Define reference voltage
    const float Voltage_Ref = 5.0;

    // Define thermistor constants
    const float Temp_0 = 298.15f;
    const float B = 3975.0f;
    const float Resistance_0 = 10.0f;

    // User input for pins A0 and A1
    printf("Enter ADC value for A0: ");
    scanf("%d", &A0);
    printf("Enter ADC value for A1: ");
    scanf("%d", &A1);

    // Calculate thermistor temperature in degrees C
    float Voltage_1 = ADCValueToVoltage(A1, Voltage_Ref);
    float Resistance = (10.0f*3.3f/Voltage_1) - 10.0f;
    float TempDegK_Thermistor = 1.0f/((1.0f/Temp_0)+(1.0f/B)*logf(Resistance/Resistance_0));
    float TempDegC_Thermistor = DegreesKToDegreesC(TempDegK_Thermistor);

    // Calculate thermocouple temperature in degrees C
    float Voltage_0 = ADCValueToVoltage(A0, Voltage_Ref);
    float Voltage_Thermocouple = 1000.0f*(Voltage_0-0.35f)/54.4f;
    float Voltage_Compensated = NISTdegCtoMilliVoltsKtype(TempDegC_Thermistor);
    float Voltage_Total = Voltage_Thermocouple + Voltage_Compensated;
    float TempDegC_Thermocouple = NISTmilliVoltsToDegCKtype(Voltage_Total);

    // Output results
    printf("Thermistor temperature (deg C): %.2f \n", TempDegC_Thermistor);
    printf("Thermocouple temperature with CJC (deg C): %.2f \n", TempDegC_Thermocouple);

    return 0;
}

// converts ADC value to voltage
float ADCValueToVoltage(int Value_ADC, float Voltage_Ref)
{
	float Voltage_ADC;
	Voltage_ADC = ((float)Value_ADC*Voltage_Ref)/1024.0f;
	return (Voltage_ADC);
}

// converts degrees K to degrees C
float DegreesKToDegreesC(float Thermistor_TempDegK)
{
	float Thermistor_TempDegC;
	Thermistor_TempDegC = Thermistor_TempDegK-273.15f;
	return (Thermistor_TempDegC);
}

/* returns EMF in millivolts */
float NISTdegCtoMilliVoltsKtype(float tempDegC)
{
    int i;
    float milliVolts = 0;
    if(tempDegC >= -170 && tempDegC < 0)
    {
        const float coeffs[11] =
        {
            0.000000000000E+00,
            0.394501280250E-01,
            0.236223735980E-04,
            -0.328589067840E-06,
            -0.499048287770E-08,
            -0.675090591730E-10,
            -0.574103274280E-12,
            -0.310888728940E-14,
            -0.104516093650E-16,
            -0.198892668780E-19,
            -0.163226974860E-22
        };
        for (i=0; i<=10; i++)
        {
            milliVolts += coeffs[i] * pow(tempDegC,i);
        }
    }
    else if(tempDegC >= 0 && tempDegC <= 1372)
    {
        const float coeffs[10] =
        {
            -0.176004136860E-01,
            0.389212049750E-01,
            0.185587700320E-04,
            -0.994575928740E-07,
            0.318409457190E-09,
            -0.560728448890E-12,
            0.560750590590E-15,
            -0.320207200030E-18,
            0.971511471520E-22,
            -0.121047212750E-25
        };
        const float a0 =  0.118597600000E+00;
        const float a1 = -0.118343200000E-03;
        const float a2 =  0.126968600000E+03;

        for (i=0; i<=9; i++)
        {
            milliVolts += coeffs[i] * pow(tempDegC,i);
        }

        milliVolts += a0*exp(a1*(tempDegC - a2)*(tempDegC - a2));
    }
    else
    {
        milliVolts = 99E99;
    }
    return milliVolts;
}

// returns temperature in deg C.
float NISTmilliVoltsToDegCKtype(float tcEMFmV)
{

        int i, j;
        float tempDegC = 0;
        const float coeffs[11][3] =
        {
          {0.0000000E+00,  0.000000E+00, -1.318058E+02},
         {2.5173462E+01,  2.508355E+01,  4.830222E+01},
         {-1.1662878E+00,  7.860106E-02, -1.646031E+00},
         {-1.0833638E+00, -2.503131E-01,  5.464731E-02},
         {-8.9773540E-01,  8.315270E-02, -9.650715E-04},
         {-3.7342377E-01, -1.228034E-02,  8.802193E-06},
         {-8.6632643E-02,  9.804036E-04, -3.110810E-08},
         {-1.0450598E-02, -4.413030E-05,  0.000000E+00},
         {-5.1920577E-04,  1.057734E-06,  0.000000E+00},
         {0.0000000E+00, -1.052755E-08,  0.000000E+00}
       };
       if(tcEMFmV >=-5.891 && tcEMFmV <=0 )
       {
           j=0;
       }
       else if (tcEMFmV > 0 && tcEMFmV <=20.644  )
       {
           j=1;
       }
       else if (tcEMFmV > 20.644 && tcEMFmV <=54.886  )
       {
           j=2;
       }
       else
       {
           return 99E9;
       }

       for (i=0; i<=9; i++)
        {
            tempDegC += coeffs[i][j] * pow(tcEMFmV,i);
        }
    return tempDegC;
}