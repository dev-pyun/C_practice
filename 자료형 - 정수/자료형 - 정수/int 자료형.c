#include <stdio.h>

int main()
{
    char num1 = 10;                         //1바이트 부호 있는 정수형으로 변수 선언과 동시에 값 할당
    short num2 = 30000;                     //2바이트 부호 있는 정수형으로 변수 선언과 동시에 값 할당
    int num3 = -1234567890;                 //3바이트 부호 있는 정수형으로 변수 선언과 동시에 값 할당
    long num4 = 1234567890;                 //4바이트 부호 있는 정수형으로 변수 선언과 동시에 값 할당
    long long num5 = -1234567890123456789;  //8바이트 부호 있는 정수형으로 변수 선언과 동시에 값 할당

    unsigned char num6 = 200;                          // 1바이트 부호 없는 정수형으로 
                                                   // 변수를 선언하고 값 할당

    unsigned short num7 = 60000;                       // 2바이트 부호 없는 정수형으로 
                                                       // 변수를 선언하고 값 할당

    unsigned int num8 = 4123456789;                    // 4바이트 부호 없는 정수형으로 
                                                       // 변수를 선언하고 값 할당

    unsigned long num9 = 4123456789;                   // 4바이트 부호 없는 정수형으로 
                                                       // 변수를 선언하고 값 할당

    unsigned long long num10 = 12345678901234567890;    // 8바이트 부호 없는 정수형으로 
                                                       // 변수를 선언하고 값 할당
                                                       // 만약 범위를 넘어서면 over/underflow 발생함.
    // char, short, int는 %d로 출력하고 long은 %ld, long long은 %lld로 출력함.
    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
    printf("%u %u %u %lu %llu\n", num6, num7, num8, num9, num10);
    return 0;
}

/*%d: 10진수(decimal)의 약어로 d를 사용합니다.
%ld: long decimal의 첫 글자를 따서 ld를 사용합니다.
%lld: long long decimal의 첫 글자를 따서 lld를 사용합니다.

unsigned int는 %u, unsigned long은 %lu, unsigned long long은 %llu로 출력해야 합니다.*/