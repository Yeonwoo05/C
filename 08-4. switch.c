#include<stdio.h>

int main()
{
	// ���ǹ��� switch��
	// switch���� ������ ���� �޾Ƽ� �� ���� �ش��ϴ� case�� ã�� �� �����ϴ� ���ǹ��̴�
	// �����
	// switch(������ ��)
	// {
	//		case ������ ��:
	//			�ڵ�;
	//			break;
	//		default:
	//			break;
	// }

	int input;

	scanf("%d",&input);

	switch (input%10)
	{
	case 0:
		printf("���� �ڸ��� 0 �Դϴ�");
		break;
	case 1:
		printf("���� �ڸ��� 1 �Դϴ�");
		break;
	case 2:
		printf("���� �ڸ��� 2 �Դϴ�");
		break;
	case 3:
		printf("���� �ڸ��� 3 �Դϴ�");
		break;
	case 4:
		printf("���� �ڸ��� 4 �Դϴ�");
		break;
	case 5:
		printf("���� �ڸ��� 5 �Դϴ�");
		break;
	case 6:
		printf("���� �ڸ��� 6 �Դϴ�");
		break;
	case 7:
		printf("���� �ڸ��� 7 �Դϴ�");
		break;
	case 8:
		printf("���� �ڸ��� 8 �Դϴ�");
		break;
	case 9:
		printf("���� �ڸ��� 9 �Դϴ�");
		break;
	default:
		break;
	}
	printf("\n\n");
	// ���� ���� ���ǹ��̳� �ٸ� �ڷ����� ���� ������
	// ���� ª�� �����ϰ� ���� �ִ�

	// switch() �ȿ� ���� ������ ���� case���� ã��
	// ���� ��ġ�ϴ� ���� �������� �ʴ´ٸ� default �ڵ带 �����Ѵ�
	// ������ �Ʒ��� Ȯ���ϰ�, break�� ������ �ʴ� �̻� ��� switch���� ����
	// ������ �̿��Ͽ� �� �� �پ��� ��츦 ���� �� �ִ�
}