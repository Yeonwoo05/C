#include<stdio.h>


// 함수 선언
void fuc_01(int *ap);
// 포인터를 매개변수로 선언한다.
// 함수를 호출할때 주소를 보내줄 것이기 때문

// 비교할 함수 선언
void fuc_02(int a);

int main()
{
	// 포인터는 주소를 가르키는 변수이다.
	// 값에 접근할 때 포인터, 즉 주소만 가지고 접근 할 수 있는데,
	// 그렇다면 다른 함수에서도 포인터만을 가지고도 지역변수에 접근할 수 있지 않을까?
	
	// 포인터는 주소 값을 가지고 있고,
	// 자료형이 가르키는 변수의 자료형과 같다고 하였다.
	// 함수에서 이와 비슷한 개념이라면
	// '전달인자'와 '매개변수' 가 있다고 볼 수 있다.
	// 전달인자와 매개변수는 자료형이 같아야 하며,
	// 매개변수는 전달인자의 값으로 초기화 되므로
	// 함수의 호출에서 포인터를 사용할 수 있다.
	// 이를 '참조에 의한 호출' 이라고 한다.



	// 사용 방식

	// 변수를 선언
	// ex) 
	int a = 10;


	// 함수 호출 (참조에 의한 호출);
	fuc_01(&a);
	printf("a = %d \n",a);

	a = 10;

	// 함수 호출 (값에 의한 호출)
	fuc_02(a);
	printf("a = %d \n", a);



	// 주의 할 점 ! ! !
	// 값에 의한 호출에서는 전달인자가 값을 보내주어야 하며,
	// 매개변수 또한 값을 받을 수 있고 자료형이 같은 변수여야 한다.
	// 단, 참조에 의한 호출은 전달인자가 '주소'를 보내야 하며,
	// 매개변수 또한 주소를 받을 수 있는 포인터 형식이여야 한다.
}


void fuc_01(int* ap)
{
	*ap = 30;		// 값에 접근하여 값 변환
}


void fuc_02(int a)
{
	a = 30;
}
