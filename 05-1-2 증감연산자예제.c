
// ���� �ڵ带 ���� ��µǴ� ������ �����

#include<stdio.h>

int main()
{
	int num1, num2, num3;

	num1 = num2 = num3 = 10;	// �� �� ��� 10���� �ʱ�ȭ

	printf("%d %d %d\n",num1++,++num2,--num3);
	// ��� : 

	num1++;
	num3--;

	printf("%d %d %d\n",num1++,--num2,num3++);
	// ��� : 

	printf("%d %d %d\n",num1,num2,num3);
	// ��� : 
}