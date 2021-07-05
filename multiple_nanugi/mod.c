#include <stdio.h>
#include <math.h>

int main()
{
    printf("%d\n", 1 % 3); //나머지 연산자는 %임. 
    printf("%d\n", 2 % 3);
    printf("%d\n", 3 % 3);
    printf("%d\n", 4 % 3);
    printf("%d\n", 5 % 3);
    printf("%d\n", 6 % 3);

    double num1 = 10.843;
    double num2 = 3.79;
    printf("%f\n", fmod(num1, num2));

    float num3 = 10.843f;
    float num4 = 3.79f;
    printf("%f\n", fmodf(num3, num4));

    long double num5 = 10.843l;
    long double num6 = 3.79l;
    printf("%Lf\n", fmodl(num5, num6));

    return 0;

}