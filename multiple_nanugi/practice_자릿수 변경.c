#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS  

int main()
{
    long input;
    scanf("%d", &input);

    int num1, num2, num3, num4, num5;
    
    num1 = input % 10;
    num2 = input % 100 / 10;
    num3 = input % 1000 / 100;
    num4 = input % 10000 / 1000;
    num5 = input / 10000;

    /*
    // 17832 입력
    num1 = input % 10;      // 2
    input /= 10;            // 1783
    num2 = input % 10;      // 3
    input /= 10;            // 178
    num3 = input % 10;      // 8
    input /= 10;            // 17
    num4 = input % 10;      // 7
    num5 = input / 10;      // 1
    */

    //실수에서 나머지 구하는 방법을 배움.
    
    printf("%d %d %d %d %d", num1, num2, num3, num4, num5);
    
    return 0;
}