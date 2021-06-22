#include<stdio.h>

int main()
{
	// 자료형중 실수형

	// 자료형		byte	소수점 이하의 표현
	// float	4		소수점 6자리			라떼는 float이였는데
	// double	8		소수점 14자리			요즘은 double을 더 많이 씀

	// 선언방식은 정수형과 동일

	// 서식문자는 %f , %lf
	// %f 는 소수점 6자리까지 표현한다
	// %.(숫자)f 는 소수점 (숫자)자리까지 표현

	printf("%f  \n",1,2345);
	printf("%.2f\n",1.2345);

	float a = 10;
	float PI = 3.14;
	double b = 0.123456789;

	printf("a = %f\n", a);
	printf("PI = %f\n", PI);
	printf("(double)b = %lf\n", b);

	// 실행값
	/*
	0.000000
	1.23
	a = 10.000000
	PI = 3.140000
	(double)b = 0.123457
	*/
	// b가 0.123457이 나오는 이유는 소수점 6자리까지 표현하면서 반올림을 했기 때문이다
}