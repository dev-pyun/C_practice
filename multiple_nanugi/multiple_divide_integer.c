#include <stdio.h>

int main()
{
    int num1;
    int num2;
    float num3;
    float num4;

    num1 = 2 * 3;
    num2 = 7 / 2;

    num3 = 2.73f * 3.14f;
    num4 = 7.0f / 2.0f;

    printf("%d %d\n", num1, num2);
    printf("%f %f\n", num3, num4);  //여기에서 지정 연산자 잘못 놓으면 계산 오류남.
    printf("%d %d", num1, num2);
    //또한 파이썬과는 다르게 작은따음표로 하면 안됨.
    return 0;

}