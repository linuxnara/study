/*
* 설명 : 각 자료형에 대한 byte 사이즈를 출력 
* 파일 이름 : h2_1.c
* 수정 일자 : 2023-04-11
* 작성자 : 신주섭
*/
#include <stdio.h>		//선행지시자, 기본 입출력 함수 헤더(printf(), scanf()등)를 포함

/* main 시작 함수 */
void main() {
	//sizeof로 char형의 사이즈(숫자) 출력한다. 1byte출력 
	printf("char 자료형 크기 : %d byte\n", sizeof(char));
	/*
		sizeof로 signed char형의 사이즈를 출력한다. 1byte
		char나 singned char 동일하나 컴파일러에 따라서 char는 부호없는 문자를 
		나타내기도 하므로 정확히 부호가 있는 문자를 나타내고자 할 경우 signed char를 사용 하도록 한다. 
	*/
	printf("signed char 자료형 크기 : %d byte\n", sizeof(signed char));	//
	
	//sizeof로 short 형의 사이즈(숫자)를 출력한다. 2byte 	
	printf("short 자료형 크기 : %d byte\n", sizeof(short)); 	
	/*
		sizeof로 short int 형의 사이즈(숫자)를 출력한다. 2byte 	
		short과 short int는 동일한 자료형이며 short은 int보다 작은 자료값을 저장할때 사용한다. 
	*/
	printf("short int 자료형 크기 : %d byte\n", sizeof(short int));	
	
	//sizeof로 signed short 형의 사이즈(숫자)를 출력한다 부호가 있는 정수. 2byte 
	printf("signed short 자료형 크기 : %d byte\n", sizeof(signed short));
	/*
		sizeof로 signed short int 형의 사이즈(숫자)를 출력한다. 2byte
	*/	
	printf("signed short int 자료형 크기 : %d byte\n", sizeof(signed short int));
	
	//unsined short과 unsigned short int 는 동일한 자료형이며 부호가 필요없는 정수형 자료형 
	printf("unsigned short 자료형 크기 : %d byte\n", sizeof(unsigned short));
	printf("unsigned short int 자료형 크기 : %d byte\n", sizeof(unsigned short int));
	
	//int와 signed int는 동일한 자료형이며 부호가 포함된 정수형 자료형 
	printf("int 자료형 크기 : %d byte\n", sizeof(int));
	printf("signed int 자료형 크기 : %d byte\n", sizeof(signed int));
	
	//unsigned과 unsigned int는 동일한 자료형이며 부호가 없는 정수형 자료형 
	printf("unsigned 자료형 크기 : %d byte\n", sizeof(unsigned));
	printf("unsigned int 자료형 크기 : %d byte\n", sizeof(unsigned int));
	
	//long 은 정수형 자료형이며 int보다 큰 값을 표현할때 사용한다. 
	printf("long 자료형 크기 : %d byte\n", sizeof(long));
	printf("long int 자료형 크기 : %d byte\n", sizeof(long int));
	printf("signed long 자료형 크기 : %d byte\n", sizeof(signed long));
	printf("signed long int 자료형 크기 : %d byte\n", sizeof(signed long int));
	
	printf("unsigned long 자료형 크기 : %d byte\n", sizeof(unsigned long));
	printf("unsigned long int 자료형 크기 : %d byte\n", sizeof(unsigned long int));
	
	printf("long long 자료형 크기 : %d byte\n", sizeof(long long));
	printf("long long int 자료형 크기 : %d byte\n", sizeof(long long int));	
	
	printf("signed long long 자료형 크기 : %d byte\n", sizeof(signed long long));
	printf("signed long long int 자료형 크기 : %d byte\n", sizeof(signed long long int));
	
	printf("unsigned long long 자료형 크기 : %d byte\n", sizeof(unsigned long long));
	printf("unsigned long long int 자료형 크기 : %d byte\n", sizeof(unsigned long long int));
	
	
	printf("float 자료형 크기 : %d byte\n", sizeof(float));
	printf("double 자료형 크기 : %d byte\n", sizeof(double));
	printf("long double 자료형 크기 : %d byte\n", sizeof(long double));	
}
