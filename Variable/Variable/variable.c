#include <stdio.h>

int main()
{
    int num1;   //������ ���� �����ϱ�
    int num2;
    int num3;
    int num4, num5, num6;       //���� �������� �ѰŹ��� �޸��� �����Ͽ� ���𰡴�

    num1 = 10;  //������ ���� �Ҵ��ϴ� ����
    num2 = 20;
    num3 = 30;

    num4 = 40;
    num5 = 50;
    num6 = 60;

    int num7 = 70, num8 = 80;       //���� �������� �����ϸ鼭 �� �Ҵ�(= ������ �ʱ�ȭ�Ѵ�)

    printf("%d %d %d \n", num1, num2, num3);    //���� ������ ���
    printf("%d %d %d \n", num4, num5, num6);
    printf("%d %d\n", num7, num8);

    return 0;
}