#include<stdio.h>

int main()
{
	// while문은 조건식을 통해 반복하는 반복문이다
	// while문 같은 경우 조건식이 참이라면 반복한다
	// while : 조건이 참일 동안 실행
	// 사용방식
	// while(조건식)
	// {
	// 코드;
	// }


	int cnt = 0;

	while (cnt < 10)			// cnt가 10보다 작을 떄
	{
		cnt++;
		printf("%d\n",cnt);
	}

	// 또한 while() 안에 조건식이 거짓이 될수 없는 식이나
	// 0이 아닌 정수를 넣을 경우 무한루프에 걸린다
	// 무한루프는 break문이 아닌이상 벗어날수 없다
	// 그러나 의도적으로 무한루프를 만들고 break문으로 빠져나올수 있는데
	// 은근히 많이 쓴다
}