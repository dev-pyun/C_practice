#include <stdio.h>

int main()
{
    printf("%c %d\n", 'a' + 1, 'a' + 1);
    printf("%c %d\n", 97 + 1, 97 + 1);      //파이썬과 다르게 아스키코드를 기준으로 나옴.

    return 0;
}