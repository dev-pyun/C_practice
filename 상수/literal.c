#include <stdio.h>

int main()
{
    printf("%d\n", 10);                 //10 : 정수 리터럴
    printf("%f\n", 0.1f);               //0.1 : 실수 리터럴
    printf("%c\n", 'a');                //a : 문자 리터럴
    printf("%s\n", "Hello World!");     //Hello world! : 문자열 리터럴

    //문자열은 무조건 따음표로 묶어야함.

    printf("%d\n", 19);         //10진수 리터럴
    printf("0%o\n", 017);       //8진수 리터럴      앞에 0을 붙이는 이유는 10진수와 구분을 위해서임.
    printf("0x%X\n", 0x1F);     //16진수 리터럴

    printf("%f\n", 0.1f);       // 0.100000: 실수 리터럴 소수점 표기
    printf("%f\n", 0.1F);       // 0.100000: 실수 리터럴 소수점 표기
    printf("%f\n", 1.0e-5f);    // 0.000010: 실수 리터럴 지수 표기법
    printf("%f\n", 1.0E-5F);    // 0.000010: 실수 리터럴 지수 표기법
    printf("%f\n", 1.0e-5F);
    printf("%f\n", 1.0E-5f);

    return 0;
}