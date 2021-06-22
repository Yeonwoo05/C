#include<stdio.h>

int main()
{
	// scanf() scanf_s() 사용 방법
	// scanf("서식문자",&입력받을 변수);

	// &(주소연산자)
	// 주소연산자는 변수의 저장공간, 즉 메모리의 할당부분을 불러오는 연산자이다

	int input;

	printf("입력 값 : ");
	scanf_s("%d",&input);			// scanf_s()는 컴파일 오류가 안남
	printf("출력 값 : %d",input);
}