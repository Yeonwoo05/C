#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

// �� �� �ڵ� ��� ���� 4996�� �����ϰڴٶ�� �ǹ��̴�
// ���� 4996�� C ������ Ư�� �Լ��� �̿��� �� ���´� ex) scanf


#include<stdio.h>
#include<string.h>

// #include<string.h> : ���ڿ� ���� �Լ��� ���� ���� �������

int main()
{
	// �迭�� ���ڿ�
	// �迭   : ������ ����ü
	// ���ڿ� : �ڷ��� char ������ �迭�̴� 
	//		   char������ ������ ���� �ϳ��� �Է¹޾Ҵٸ� ���ڿ��� ������ �Է¹��� �� �ִ�
	//		   ��, �迭 ���̸� �ʰ��� ��� ������ �� �� ������, �迭�� ���̰� ����� �޸𸮸� ���� ����
	//		   ���� �迭�� Ư���� ó�� �ε���(�迭�� �����ϴ� �ε���)�� �������� �ʴ� �̻� 0������ ����

	// ������
	// char �迭�̸�[�迭����];

	// ����� �ʱ�ȭ
	// char �迭�̸�[�迭����] = "�ʱ�ȭ�� ����";

	char array[] = "Hello World!";

	// ���ڿ��� ���Ĺ��� %s�� ����
	printf("%s\n\n",array);

	// �迭�� �� �ε����� ������ �� �ִµ�,
	// ���ڿ��� �ε������� ���� �ϳ��� ����Ǿ� �ִ�
	// �ε����� ������ ���� �迭�̸�[�����ϰ� ���� �ε��� ��ȣ] �� ����Ͽ� ������ �� �ִ�

	printf("%c", array[0]);		// H �� �����ϰ� �ִ� array[0]
	printf("%c", array[1]);		// e �� �����ϰ� �ִ� array[1]
	printf("%c", array[2]);		// l �� �����ϰ� �ִ� array[2]
	printf("%c", array[3]);		// l �� �����ϰ� �ִ� array[3]
	printf("%c", array[4]);		// o �� �����ϰ� �ִ� array[4]

	printf("\n\n");

	// char�� 1byte�� ���� ������ ���� sizeof(char)�� ������ �ʿ�� ������ �ٸ� �迭�� �ƴϴ� �ͼ��������� ����
	printf("array�� byteũ�� : %dbyte\n\n", sizeof(array) / sizeof(char));

	// []ĭ�� ������� ��� �迭�� ���̸�ŭ ���
	printf("�迭�� ó������ ���\n");
	for (int i = 0; i < sizeof(array) / sizeof(char);i++)
	{
		printf("%c",array[i]);
	}

	printf("\n\n");

	printf("�迭�� ������ ���\n");
	for (int i = sizeof(array) / sizeof(char); i >= 0;i--)
	{
		printf("%c", array[i]);
	}
	printf("\n\n");

	// ���ڿ� ����

	char temp[] = "�ȳ��ϼ���!!";

	// strcpy() : ���ڿ� �ΰ��� �޾� �������� ���ڿ��� ������ ���ڿ��� �������ִ� �Լ�
	printf("strcpy �� : %s\n",temp);

	strcpy(temp, array);

	printf("strcpy �� : %s\n", temp);
	
	
	printf("\n\n");

	// strcmp() : ���ڿ� �ΰ��� �޾� �� ���ڿ��� ���ٸ� 0��, �ٸ��ٸ� -1�� ��ȯ�ϴ� �Լ�
	// strcmp()�� if���� ���� �ʹٸ� !strcmp()�� ����Ѵ� (���� ��� 0�� ��ȯ�ϹǷ� ! �� �Ἥ 1�� �ٲ��ش�)
	printf("array�� temp�� ������? : %d\n",!strcmp(array,temp));

	
}