#include<stdio.h>


// 상수의 정의
// 상수란 프로그램이 돌아가면서 저장된 값이 바뀌지 않는 수이다
// 상수는 프로그램이 실행될 때 어떠한 방법으로도 값을 바꿀 수 없고, 코드를 바꿔줘야 한다
// ;(세미콜론)은 쓰지 않는다
#define TEN 10

// 상수의 이름은 변수와 같이 아무거나 상관은 없지만, 되도록 의미가 있고 대문자로 시작하거나 전체가 대문자면 좋다

int main()
{
	// 이러면 오류
	// TEN = 20;

	printf("TEN의 값 : %d\n",TEN);
}