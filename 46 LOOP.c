//Write a program in C to convert a binary number into a decimal number using math function.

#include <stdio.h>
#include <math.h>

int main() {
    long long binaryNumber;
    int decimalNumber = 0, i = 0, remainder;


    printf("Input the binary number: ");
    scanf("%d", &binaryNumber);


    printf("The Binary Number: %d\n", binaryNumber);


    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        decimalNumber += remainder * pow(2, i);
        binaryNumber /= 10;
        ++i;
    }


    printf("The equivalent Decimal Number is: %d\n", decimalNumber);

    return 0;
}

