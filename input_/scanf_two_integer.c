#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("정수를 2개 입력하세요 : ");
    scanf("%d %d", &num1, &num2);       //scanf 앞에 &꼭 넣어주기

    printf("%d %d\n", num1, num2);

    return 0;
}