#define _CRT_SECURE_NO_WARNINGS //scanf 보안경고로 인한 컴파일 에러 방지
#include  <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);

    if (num1 == 10)
    {
        printf("10입니다 \n");
    }
    else if (num1 == 20)   //else if는 단독으로 쓸 수 없기 때문에 if랑 붙여야함.
    {
        printf("20입니다 \n");
    }
    else
    {
        printf("%d입니다", num1);
    }

    return 0;

}