#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	// 정렬이란 ?
	// 배열이나 포인터등 값들이 줄지어 있을때
	// 오름차순이나 내림차순으로 차례대로 재배치 하는것을 말한다

	// 버블 정렬
	// 배열의 [i]와 [j] 를 비교하여 크거나 작다면 바꿔준다
	// 단, j는 i + 1 부터 끝까지, 또는 j는 0 부터 j < i가 참일동안만 실행한다

	// 랜덤한 값을 위해 rand() 함수 사용 (쓰기 귀찮아)

	srand(time(NULL));

	int a[20];
	int temp;

	printf("변환 전 : ");
	for (int i = 0; i < 20; i++)
	{
		a[i] = rand() % 25 + 1;
		printf("%d ",a[i]);
	}
	printf("\n");


	// 오름차순 정렬
	//for (int i = 0; i < 20; i++)  // 0 부터 19 까지 (배열의 인덱스 전체를 돈다)
	//{
	//	for (int j = 0; j < i; j++)  // 0 부터 [i] 전까지 ([i]의 값 비교대상)
	//	{
	//		if (a[i] < a[j])		// 만약 a[i] 가 a[j] 보다 작다면 스왑
	//		{
	//			temp = a[i];
	//			a[i] = a[j];
	//			a[j] = temp;
	//		}
	//	}
	//}

	//// 내림차순 정렬
	//for (int i = 0; i < 20; i++)  // 0 부터 19 까지 (배열의 인덱스 전체를 돈다)
	//{
	//	for (int j = 0; j < i; j++)  // 0 부터 [i] 전까지 ([i]의 값 비교대상)
	//	{
	//		if (a[i] > a[j])		// 만약 a[i] 가 a[j] 보다 크다면 스왑
	//		{
	//			temp = a[i];
	//			a[i] = a[j];
	//			a[j] = temp;
	//		}
	//	}
	//}

	for (int i = 0; i < 20 - 1; i++)  // 0 부터 18 까지 (배열의 인덱스 전체를 돈다)
	{
		for (int j = i+1; j < 20; j++)  // i + 1 부터 19 전까지 ([i]의 값 비교대상)
		{
			if (a[i] > a[j])		// 부등호 방향에 따라 내림, 오름차순 정렬이 결정된다
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("변환 후 : ");
	for (int i = 0; i < 20; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	
}