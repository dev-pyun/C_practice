#include <stdio.h>

int main()
{
    int num1 = 11;
    float num2 = 4.4f;

    printf("%f\n", num1 - num2);
    printf("%f\n", num1 + num2);
    printf("%f\n", num1 * num2);
    printf("%f\n\n", num1 / num2);
    //실제로는 실수형이어서 %d 연산자로 하면 이상한 값이 나옴.
    //변환은 표현범위가 넓은 쪽으로 자동적으로 변환함.
    //형 확장은 값이 보존됨.

    long long num3 = 1234567890;
    int num4 = 10;

    printf("%lld\n", num3 + num4);
    printf("%lld\n", num3 - num4);
    printf("%lld\n", num3 * num4);
    printf("%lld\n", num3 / num4);
}