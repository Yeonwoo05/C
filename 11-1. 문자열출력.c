#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

// 위 두 코드 모두 에러 4996를 무시하겠다라는 의미이다
// 오류 4996은 C 내부의 특정 함수를 이용할 때 나온다 ex) scanf


#include<stdio.h>
#include<string.h>

// #include<string.h> : 문자열 관련 함수를 쓰기 위한 헤더파일

int main()
{
	// 배열중 문자열
	// 배열   : 변수의 집합체
	// 문자열 : 자료형 char 형식의 배열이다 
	//		   char형식의 변수가 문자 하나를 입력받았다면 문자열은 문장을 입력받을 수 있다
	//		   단, 배열 길이를 초과할 경우 오류가 날 수 있으며, 배열의 길이가 길수록 메모리를 많이 쓴다
	//		   또한 배열은 특별히 처음 인덱스(배열이 시작하는 인덱스)를 정해주지 않는 이상 0번부터 들어간다

	// 선언방식
	// char 배열이름[배열길이];

	// 선언과 초기화
	// char 배열이름[배열길이] = "초기화할 문장";

	char array[] = "Hello World!";

	// 문자열은 서식문자 %s를 쓴다
	printf("%s\n\n",array);

	// 배열은 각 인덱스에 접근할 수 있는데,
	// 문자열의 인덱스에는 문자 하나가 저장되어 있다
	// 인덱스에 접근할 때는 배열이름[접근하고 싶은 인덱스 번호] 를 사용하여 접근할 수 있다

	printf("%c", array[0]);		// H 를 저장하고 있는 array[0]
	printf("%c", array[1]);		// e 를 저장하고 있는 array[1]
	printf("%c", array[2]);		// l 를 저장하고 있는 array[2]
	printf("%c", array[3]);		// l 를 저장하고 있는 array[3]
	printf("%c", array[4]);		// o 를 저장하고 있는 array[4]

	printf("\n\n");

	// char는 1byte만 쓰기 때문에 굳이 sizeof(char)로 나눠줄 필요는 없지만 다른 배열은 아니니 익숙해지도록 하자
	printf("array의 byte크기 : %dbyte\n\n", sizeof(array) / sizeof(char));

	// []칸이 비어있을 경우 배열의 길이만큼 출력
	printf("배열의 처음부터 출력\n");
	for (int i = 0; i < sizeof(array) / sizeof(char);i++)
	{
		printf("%c",array[i]);
	}

	printf("\n\n");

	printf("배열의 끝부터 출력\n");
	for (int i = sizeof(array) / sizeof(char); i >= 0;i--)
	{
		printf("%c", array[i]);
	}
	printf("\n\n");

	// 문자열 복사

	char temp[] = "안녕하세요!!";

	// strcpy() : 문자열 두개를 받아 오른쪽의 문자열을 왼쪽의 문자열에 복사해주는 함수
	printf("strcpy 전 : %s\n",temp);

	strcpy(temp, array);

	printf("strcpy 후 : %s\n", temp);
	
	
	printf("\n\n");

	// strcmp() : 문자열 두개를 받아 두 문자열이 같다면 0을, 다르다면 -1을 반환하는 함수
	// strcmp()를 if문에 쓰고 싶다면 !strcmp()로 써야한다 (참일 경우 0을 반환하므로 ! 을 써서 1로 바꿔준다)
	printf("array와 temp가 같나요? : %d\n",!strcmp(array,temp));

	
}