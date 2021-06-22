#include<stdio.h>

int main()
{
	// else if문
	// else if : if문의 조건식이 참이 아닐 때 또다른 조건식이 참인지 확인하고 실행
	// 사용방식
	// if(조건식)
	// else if(조건식)

	int a = 20;

	if (a == 10)					// a가 10이라면 
	{
		printf("a는 10입니다.");
	}
	else if (a == 20)				// a가 10이 아니고 20이라면
	{
		printf("a는 20입니다.");
	}

	// 위처럼 if와 else만으로 조건식이 성립하지 않을 때 else if를 쓴다
	// else문과 달리 개수에 제한이 없으며 조건식 또한 if문과 동일하다
	// else if문이 여러개일 때 위쪽에 있는 else if문부터 확인하고
	// 만약 위쪽에 있는 else if문의 조건식이 참이라면 그 즉시 코드를 실행하고
	// 아래쪽에 있는 else if와 else의 코드는 넘어간다
}