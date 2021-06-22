#pragma warning(disable:4996)
// scanf의 오류 무시
#include<stdio.h>
#include<string.h>

int main()
{
	// 문자열 입력
	// %s : 문자열 입출력을 할 때 사용하는 서식문자
	// 변수의 입력과 비슷하지만, &(주소연산자)를 쓰지 않는다

	// string[0]부터 입력받아 들어간다
	char string[20];

	scanf("%s", string);
	// 만약 문자열의 길이를 넘어서 입력을 받는다면
	// runtime 오류가 뜬다
	// 배열, 특히 문자열은 길이를 넉넉하게 주는게 좋다
	// 배열을 입력하다가


	printf("%s",string);
}