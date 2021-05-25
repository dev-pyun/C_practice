#include <stdio.h>
#include <limits.h>


int main()
{
    char num1 = CHAR_MIN;
    short num2 = SHRT_MIN;
    int num3 = INT_MIN;
    long num4 = LONG_MIN;
    long long num5 = LLONG_MIN;
    
    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

    //언더플로우 야기하기
    unsigned char num6 = 0 - 1;
    unsigned short num7 = 0 - 1;
    unsigned int num8 = 0 - 1;
    unsigned long long num9 = 0 - 1;

    printf("%u %u %u %llu \n", num6, num7, num8, num9);

    return 0;
}