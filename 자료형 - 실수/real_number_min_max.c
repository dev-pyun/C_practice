#include <stdio.h>
#include <float.h>

int main()
{
    float num1 = FLT_MIN;             //0.0000000000000000000000000000000000000118
    float num2 = FLT_MAX;             //340282346638528860000000000000000000000.00
    double num3 = DBL_MIN;            //2.225074e-308
    double num4 = DBL_MAX;            //1.797693e+308
    long double num5 = LDBL_MIN;      //2.225074e-308
    long double num6 = LDBL_MAX;      //1.797693e+308

    printf("%.40f %.2f \n",num1, num2);

    printf("%e %e \n", num3, num4);
    printf("%Le %Le \n", num5, num6);
    //%e는 지수 표시법으로 표시하라는 소리
}