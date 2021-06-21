#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char c1;
    int num1;
    float num2;
    printf("문자를 입력하세요 : ");
    scanf("%c %d %f", &c1, &num1, &num2);

    printf("%c %d %f", c1, num1, num2);
    //여러문자 한꺼번에 입력 가능
    

    return 0;
}