#include<stdio.h>

int main()
{
	// if문과 연결되는 조건문
	// else : if문의 조건식이 아니라면 코드를 실행
	// 사용방식
	// if(조건식)
	// else 

	int a = 10;

	if (a == 20)						// 만약 a가 20이라면
	{
		printf("a는 10입니다.\n");
	}
	else								// a가 20이 아니라면
	{
		printf("a는 10이 아닙니다.\n");
	}

	// 위처럼 조건식이 참이 아닐 때 존재하는 모든 경우의 수를 전부 else문으로 돌린다
	// else는 if 하나당 하나만 쓸수 있다
}