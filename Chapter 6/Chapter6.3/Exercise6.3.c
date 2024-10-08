#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables in hexadecimal
    unsigned int a = 0x3C, b = 0x0D, R;
    
    // Bitwise operators
    R = a & b;
    printf("a AND b = %#x\n", R);

    R = a | b;
    printf("a OR b = %#x\n", R);

    R = a ^ b;
    printf("a XOR b = %#x\n", R);

    R = ~a;
    printf("a First Complement = %#x\n", R);

    R = a << b;
    printf("a Left Shift b = %#x\n", R);

    R = a >> b;
    printf("a Right Shift b = %#x\n", R);

    return 0;	// Exit from main
}