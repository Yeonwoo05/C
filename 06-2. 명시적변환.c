#include<stdio.h>

int main()
{
	// 명시적변환
	// 사용자가 직접 자료형을 변환시켜주는 방식이다
	// 보통 연산, 출력할 때 쓴다
	// 사용 방식
	// (자료형)변수;


	int a = 10;

	printf("명시적변환을 하지 않을 경우\n");
	printf("(정수형)a = %d	(실수형)a = %.2f\n",a,a);		// 정수형을 실수형으로 출력할 수 없다   2.변수 -> 4.서식문자


	printf("명시적변환을 했을 경우\n");
	printf("(정수형)a = %d	(실수형)a = %.2f\n", a, (float)a);
}