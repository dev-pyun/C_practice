#include <stdio.h>

int main()
{
    const int con1 = 1;
    const float con2 = 0.1f;
    const char con3 = 'a';
    //상수는 선언과 동시에 초기화를 해줘야 함.
    //상수에 초기화로 값을 할당한 순간 그 상수는 고정됨

    printf("%d %f %c\n", con1, con2, con3);

    return 0;
}