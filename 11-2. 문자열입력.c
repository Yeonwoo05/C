#pragma warning(disable:4996)
// scanf�� ���� ����
#include<stdio.h>
#include<string.h>

int main()
{
	// ���ڿ� �Է�
	// %s : ���ڿ� ������� �� �� ����ϴ� ���Ĺ���
	// ������ �Է°� ���������, &(�ּҿ�����)�� ���� �ʴ´�

	// string[0]���� �Է¹޾� ����
	char string[20];

	scanf("%s", string);
	// ���� ���ڿ��� ���̸� �Ѿ �Է��� �޴´ٸ�
	// runtime ������ ���
	// �迭, Ư�� ���ڿ��� ���̸� �˳��ϰ� �ִ°� ����
	// �迭�� �Է��ϴٰ�


	printf("%s",string);
}