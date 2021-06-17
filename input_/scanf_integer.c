#define _CRT_SECURE_NO_WARNINGS         //scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int num1;

    printf("정수를 입력하세요 : ");
    scanf("%d", &num1);         //서식지정자 형태의 자료형 입력받도록 함. &뒤에 저장하는 자료형 적기

    printf("%d\n", num1);

    return 0;
}