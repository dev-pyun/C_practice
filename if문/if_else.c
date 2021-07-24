#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int num1 = 5;
    int num2;

    scanf("%d\n", &num2);

    if (num1 == 10)
    {
        printf("10입니다.\n");
    }
    else
    {
        printf("10이 아닙니다.\n");
    }
    //if와 else는 서로 붙여써야한다.
    //else if, else도 마찬가지!

    return 0;
}