#include<stdio.h>

int fuc();
// int ���� �Ű������� ���� fuc �Լ��� ����

int main()
{
	// int �� ?
	// void ���� �޸� ��ȯ���� �����ϸ� return���� �Լ��� ����ʰ� ���ÿ� ��ȯ�� ���� �����ؾ��Ѵ�.

	int temp = 10;
	printf("%d\n",temp);

	temp = fuc();
	printf("%d\n", temp);
}

int fuc()
{
	// return ���� �Լ��� �ڷ����� ���� ���� �Ǵ� ������ ���� �����ϴ�.
	// int ���̶� ������ ������ �������� ���� �����ϴ�.
	return 30;
}