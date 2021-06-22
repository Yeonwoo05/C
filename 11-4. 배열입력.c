#include<stdio.h>

int main()
{
	int arr[10];

	// 값을 받을수 있는 배열을 선언해준 후,
	// for를 통해 값을 입력받을 수 있다


	// 출력과 동일하게 for를 통해 하나하나 입력받는다
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d",&arr[i]);	// 각 인덱스에 접근하기 때문에 &(주소연산자)를 써줘야한다
	}


	// 출력
	for (int i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
}