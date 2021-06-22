#include<stdio.h>

int main()
{
	// 조건문중 switch문
	// switch문은 정수형 값을 받아서 그 값에 해당하는 case를 찾은 뒤 실행하는 조건문이다
	// 사용방식
	// switch(정수형 값)
	// {
	//		case 정수형 값:
	//			코드;
	//			break;
	//		default:
	//			break;
	// }

	int input;

	scanf("%d",&input);

	switch (input%10)
	{
	case 0:
		printf("일의 자리가 0 입니다");
		break;
	case 1:
		printf("일의 자리가 1 입니다");
		break;
	case 2:
		printf("일의 자리가 2 입니다");
		break;
	case 3:
		printf("일의 자리가 3 입니다");
		break;
	case 4:
		printf("일의 자리가 4 입니다");
		break;
	case 5:
		printf("일의 자리가 5 입니다");
		break;
	case 6:
		printf("일의 자리가 6 입니다");
		break;
	case 7:
		printf("일의 자리가 7 입니다");
		break;
	case 8:
		printf("일의 자리가 8 입니다");
		break;
	case 9:
		printf("일의 자리가 9 입니다");
		break;
	default:
		break;
	}
	printf("\n\n");
	// 위와 같이 조건문이나 다른 자료형을 쓸수 없지만
	// 비교적 짧고 간편하게 쓸수 있다

	// switch() 안에 들어온 정수형 값을 case에서 찾고
	// 만약 일치하는 값이 존재하지 않는다면 default 코드를 실행한다
	// 위부터 아래로 확인하고, break를 만나지 않는 이상 계속 switch문을 돈다
	// 이점을 이용하여 좀 더 다양한 경우를 만들 수 있다
}