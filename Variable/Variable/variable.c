#include <stdio.h>

int main()
{
    int num1;   //정수형 변수 선언하기
    int num2;
    int num3;
    int num4, num5, num6;       //변수 여러개를 한거번에 콤마로 구분하여 선언가능

    num1 = 10;  //변수에 값을 할당하는 과정
    num2 = 20;
    num3 = 30;

    num4 = 40;
    num5 = 50;
    num6 = 60;

    int num7 = 70, num8 = 80;       //변수 여러개를 선언하면서 값 할당(= 변수를 초기화한다)

    printf("%d %d %d \n", num1, num2, num3);    //지정 연산자 사용
    printf("%d %d %d \n", num4, num5, num6);
    printf("%d %d\n", num7, num8);

    return 0;
}