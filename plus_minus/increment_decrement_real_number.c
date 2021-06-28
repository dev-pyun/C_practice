#include <stdio.h>

int main()
{
    float num1 = 1.2f;
    float num2 = 2.1f;

    num1++;
    num2--;

    printf("%f %f", num1, num2);

    return 0;
    //실수형에도 정수형과 마찬가지로 값을 증가시키거나 감소시킴
}