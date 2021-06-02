#include <stdio.h>

int main()
{
    char c1 = 0X61;
    char c2 = 0X62;

    printf("%c, %d, 0x%x\n", c1, c1, c1);     //숫자로는 아스키코드 값으로 출력됨.
    printf("%c, %d, 0x%x\n", c2, c2, c2);     //문자로는 그대로 출력됨.

    return 0;
}

//아스키코드 0은 NULL 문자를 의미함.