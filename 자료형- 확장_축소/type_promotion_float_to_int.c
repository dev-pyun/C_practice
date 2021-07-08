#include <stdio.h>

int main()
{
    float num1 = 11.0f;
    float num2 = 5.0f;

    int num3 = num1 / num2;

    printf("%d\n", num3);   //2
    //값 손실이 일어남.

    return 0;
}