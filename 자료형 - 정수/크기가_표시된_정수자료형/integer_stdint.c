#include <stdio.h>
#include <stdint.h> //크기별로 정수 자료형이 정의된 헤더 파일

int main()
{
    int8_t num1 = -128;                     //8바이트, 1비트크기 정수형 변수 선언
    int16_t num2 = 32767;                   //16바이트, 2비트 크기 정수형 변수 선언
    int32_t num3 = 2147483647;              //32바이트, 4비트 크기 정수형 변수 선언
    int64_t num4 = 9223372036854775807;     //64바이트, 8비트 크기 정수형 변수 선언

    printf("%d %d %d %lld \n", num1, num2, num3, num4);

    uint8_t num5 = 255;
    uint16_t num6 = 65535;
    uint32_t num7 = 4294967295;
    uint64_t num8 = 18446744073709551615;

    printf("%u %u %u %llu", num5, num6, num7, num8);

    return 0;
}