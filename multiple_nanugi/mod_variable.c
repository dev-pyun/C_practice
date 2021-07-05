#include <stdio.h>

int main()
{
    int num1 = 7;
    int num2 = 5;

    num1 %= num1;
    num2 = num2 % 2;    //num2 %= 2
    printf("%d %d", num1, num2);

    return 0;
}