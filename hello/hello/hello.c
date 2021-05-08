#include <stdio.h> //printf를 사용하기 위한 헤더파일

int main()		 //뒤에 괄호가 붙은 녀석을 함수(function)이라고 함.
/*C 파일에 int main()이 없으면 컴파일이 되지 않음.
main함수가 반드시 있어야 하며, main이 먼저 실행됨.*/
{
	printf("Hello, world!\n");
	printf("%s\n", "Hello, world!");
	printf("%s %s\n", "Hello, world!", "1234");
	printf("")

	return 0;		//반환값 (python에서도 배웠쥬? python에서는 정수 0을 제외한 나머지가 모두 True로 인식)
}