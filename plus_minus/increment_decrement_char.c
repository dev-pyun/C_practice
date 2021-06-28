#include <stdio.h>

int main()
{
    char c1 = 'b'; 
    char c2 = 'b';

    c1++;
    c2--;

    printf("%c %c", c1, c2);

    return 0;

    //문자자료가 ASCII code에 따라 작성됨을 이용.
    //++이 앞에 오느냐 뒤에 오느냐를 꼭 확인하기!
}