#include <stdio.h>
#include <math.h>

// function to convert binary to decimal
int binaryToDecimal(long long binary)
{
    int decimal = 0, i = 0, remainder;
    while (binary != 0)
    {
        remainder = binary % 10;
        binary /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }
    return decimal;
}

// function to convert decimal to binary
long long decimalToBinary(int decimal)
{
    long long binary = 0;
    int i = 1, remainder;
    while (decimal != 0)
    {
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}

int main()
{
    int decimal;
    long long binary;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    printf("%lld in binary = %d in decimal\n", binary, binaryToDecimal(binary));
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("%d in decimal = %lld in binary\n", decimal, decimalToBinary(decimal));
    return 0;
}
