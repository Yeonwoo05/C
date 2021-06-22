#include<stdio.h>

int main()
{
	// dowhile() : 반복에 필요한 조건을 나중에 검사하는 반복문이다
	// while문과 비슷하지만, 조건문을 검사하는 구간이 다르다
	// dowhile은 반복문중 유일하게 뒤에 ;(세미콜론)이 붙는다
	// 사용방식
	// do{
	//	코드;
	//}while(조건식);

	// 조건식은 while문과 동일

	int a = 0;
	do {
		a++;
		printf("a = %d\n",a);
	} while (a < 10);

	// while문과 dowhile문의 가장 큰 차이점은 
	// 조건식의 위치이다
	// while문은 반복에 들어가기 전에 조건식을 검사하고
	// dowhile문은 한번 실행하고 조건식을 검사한다
}