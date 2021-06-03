#include <stdio.h>

int main()
{
    char c1 = 'a';
    char c2 = 'b';
    char linefeed = '\n';

    printf("%c%c%c%c", c1, linefeed, c2, linefeed);
    printf("%d 0x%x \n", linefeed, linefeed);

    return 0;
}

/*
C언어 문자는 아스키코드로 저장된다!

제어문자 정리
제어문자    10진수     16진수     문자      설명
   \n       10          0x0A     LF       줄바꿈
   \r       13          0x0D     CR       줄의 끝에서 시작위치로 돌아감
   \t       9           0x09     TAB      수평 탭
*/