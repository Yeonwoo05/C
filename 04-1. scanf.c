#include<stdio.h>

int main()
{
	// scanf() scanf_s() ��� ���
	// scanf("���Ĺ���",&�Է¹��� ����);

	// &(�ּҿ�����)
	// �ּҿ����ڴ� ������ �������, �� �޸��� �Ҵ�κ��� �ҷ����� �������̴�

	int input;

	printf("�Է� �� : ");
	scanf_s("%d",&input);			// scanf_s()�� ������ ������ �ȳ�
	printf("��� �� : %d",input);
}