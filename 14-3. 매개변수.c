#include<stdio.h>


// 함수 선언
void void_fuc(int num);
// 매개변수가 존재하는 함수는 () 안에   자료형 변수이름   으로 선언해 주어야한다.

int int_fuc(float flo, int num);
// 만약 두개 이상 선언한다면 ,(쉼표)를 통해 선언할 수 있다.
// 이때, 자료형을 다시 선언해주어야 한다.

int main()
{
	// 매개변수란 ? 
	// 함수에서 값을 전달받는 변수를 뜻하며 
	// 함수를 호출할 때 값을 보내주어야 한다.
	// 반환이 있든 없든 매개변수는 존재할 수 있다.
	// (매개변수는 선언하지 않을수도 있다.)

	// 매개변수가 있는 함수 호출
	void_fuc(10);			// 정수 10 전달
	// 호출할 때 전달해주는 값 또는 변수를 전달인자라고 하며
	// 전달인자는 함수 원형에 선언한 매개변수와 자료형이 같고
	// 매개변수의 개수와 동일한 개수로 보내야 한다.


	
	int int_ret;
	int a = 30;
	float f = 2.5;
	int_ret = int_fuc(f, a);		// 값 대신 변수를 보낼 수 있다.
	// 두개 이상의 전달인자를 보낼때
	// 자료형을 맞춰서 보내주어야 한다.

	printf("int_fuc  : 리턴받은 값은 %d byte의 %d 입니다.\n", sizeof(int_ret), int_ret);
}

void void_fuc(int num)		// main 에서 보낸 값 저장
{
	// 매개변수는 다른 함수에서 참조할 수 없다. 
	// 매개변수는 일반 지역변수 처럼 사용할 수 있다.
	printf("void_fuc : 전달받은 값은 %d byte의 %d 입니다.\n",sizeof(num),num);
}

int int_fuc(float flo, int num)		// main 에서 실수형 값, 정수형 값 각각 하나씩 전달하므로 매개변수 또한 두개이다.
{
	float sum = 0;				// flo의 소수점 계산을 위해 float 형식 선언

	for (int i = 0; i <= num; i++)
	{
		sum += flo;
	}

	return (int)sum;			// 함수의 반환형이 int이므로 int로 변환하여 리턴
}