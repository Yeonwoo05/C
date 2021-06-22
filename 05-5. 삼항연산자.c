#include<stdio.h>

int main()
{
	// 연산자긴 한데 사실상 조건문에 가까움
	// 삼항연산자 사용 방법
	// (조건식) ? 참일때 값 : 거짓일때 값

	// 삼항연산자끼리 중첩하여 사용할수도 있고
	// 삼항연산자 안에 printf, printf안에 삼항연산자를 넣을수도 있다
	// 삼항연산자의 리턴값에는 대부분 다 들어간다 ex) 문자열, 변수, 숫자, 상수, 문자 등등

	int a = 10;
	int b = 20;
	// printf 안에 삼항연산자
	printf("%d\n", (a < b) ? b : a);
	printf("%d\n", (a > b) ? b : a);

	// 삼항연산자 안에 printf
	(a > b) ? printf("a는 b보다 크다") : printf("a는 b보다 크지 않다");
}