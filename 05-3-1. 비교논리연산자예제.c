
// 다음 코드를 보고 출력결과를 써보자

#include<stdio.h>

int main()
{
	printf("%d \n", 2 == 3 || 1);
	// 출력 : 

	printf("%d \n", 1 && 1 + 3 || 0);
	// 출력 : 

	printf("%d \n", 1 && 4 + 5 && 0 || 0);
	// 출력 : 
}