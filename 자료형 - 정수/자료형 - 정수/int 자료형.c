#include <stdio.h>

int main()
{
    char num1 = 10;                         //1����Ʈ ��ȣ �ִ� ���������� ���� ����� ���ÿ� �� �Ҵ�
    short num2 = 30000;                     //2����Ʈ ��ȣ �ִ� ���������� ���� ����� ���ÿ� �� �Ҵ�
    int num3 = -1234567890;                 //3����Ʈ ��ȣ �ִ� ���������� ���� ����� ���ÿ� �� �Ҵ�
    long num4 = 1234567890;                 //4����Ʈ ��ȣ �ִ� ���������� ���� ����� ���ÿ� �� �Ҵ�
    long long num5 = -1234567890123456789;  //8����Ʈ ��ȣ �ִ� ���������� ���� ����� ���ÿ� �� �Ҵ�

    unsigned char num6 = 200;                          // 1����Ʈ ��ȣ ���� ���������� 
                                                   // ������ �����ϰ� �� �Ҵ�

    unsigned short num7 = 60000;                       // 2����Ʈ ��ȣ ���� ���������� 
                                                       // ������ �����ϰ� �� �Ҵ�

    unsigned int num8 = 4123456789;                    // 4����Ʈ ��ȣ ���� ���������� 
                                                       // ������ �����ϰ� �� �Ҵ�

    unsigned long num9 = 4123456789;                   // 4����Ʈ ��ȣ ���� ���������� 
                                                       // ������ �����ϰ� �� �Ҵ�

    unsigned long long num10 = 12345678901234567890;    // 8����Ʈ ��ȣ ���� ���������� 
                                                       // ������ �����ϰ� �� �Ҵ�
                                                       // ���� ������ �Ѿ�� over/underflow �߻���.
    // char, short, int�� %d�� ����ϰ� long�� %ld, long long�� %lld�� �����.
    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
    printf("%u %u %u %lu %llu\n", num6, num7, num8, num9, num10);
    return 0;
}

/*%d: 10����(decimal)�� ���� d�� ����մϴ�.
%ld: long decimal�� ù ���ڸ� ���� ld�� ����մϴ�.
%lld: long long decimal�� ù ���ڸ� ���� lld�� ����մϴ�.

unsigned int�� %u, unsigned long�� %lu, unsigned long long�� %llu�� ����ؾ� �մϴ�.*/