#include<stdio.h>

int fuc();
// int 형의 매개변수가 없는 fuc 함수를 선언

int main()
{
	// int 형 ?
	// void 형과 달리 반환값이 존재하며 return으로 함수가 종료됨과 동시에 반환값 또한 설정해야한다.

	int temp = 10;
	printf("%d\n",temp);

	temp = fuc();
	printf("%d\n", temp);
}

int fuc()
{
	// return 에는 함수의 자료형과 같은 변수 또는 값만이 리턴 가능하다.
	// int 형이라 정수형 변수나 정수만이 리턴 가능하다.
	return 30;
}