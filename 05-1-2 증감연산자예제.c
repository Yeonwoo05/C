
// 다음 코드를 보고 출력되는 문장을 적어보자

#include<stdio.h>

int main()
{
	int num1, num2, num3;

	num1 = num2 = num3 = 10;	// 세 개 모두 10으로 초기화

	printf("%d %d %d\n",num1++,++num2,--num3);
	// 출력 : 

	num1++;
	num3--;

	printf("%d %d %d\n",num1++,--num2,num3++);
	// 출력 : 

	printf("%d %d %d\n",num1,num2,num3);
	// 출력 : 
}