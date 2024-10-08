#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables
    unsigned int a = 60, b = 13, R;
    
    // Bitwise operators
    R = a & b;
    printf("a AND b = %u\n", R);

    R = a | b;
    printf("a OR b = %u\n", R);

    R = a ^ b;
    printf("a XOR b = %u\n", R);

    R = ~a;
    printf("a First Complement = %u\n", R);

    R = a << b;
    printf("a Left Shift b = %u\n", R);

    R = a >> b;
    printf("a Right Shift b = %u\n", R);

    return 0;	// Exit from main
}