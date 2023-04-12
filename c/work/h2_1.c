/*
* 설명 : 각 자료형에 대한 byte 사이즈를 출력 
* 파일 이름 : h2_1.c
* 수정 일자 : 2023-04-11
* 작성자 : 신주섭
*/
#include <stdio.h>		//선행지시자, 기본 입출력 함수 헤더(printf(), scanf()등)를 포함

/* main 시작 함수 */
void main() {
	
	//콘솔에  char형 사이즈 출력한다. 1byte
	printf("char 자료형 크기 : %d byte\n", sizeof(char));	
	//콘솔에 signed char의 사이즈를 출력한다. 1byte
	printf("signed char 자료형 크기 : %d byte\n", sizeof(signed char));
	
	//콘솔에 short의 사이즈를 출력한다. 2byte
	printf("short 자료형 크기 : %d byte\n", sizeof(short)); 		
	//콘솔에 short int 의 사이즈를 출력한다. 2byte
	printf("short int 자료형 크기 : %d byte\n", sizeof(short int));	
	
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("signed short 자료형 크기 : %d byte\n", sizeof(signed short));
	//콘솔에 signed short int의 사이즈를 출력한다. 2byte	
	printf("signed short int 자료형 크기 : %d byte\n", sizeof(signed short int));
	
	//콘솔에 unsigned short의 사이즈를 출력한다. 2byte
	printf("unsigned short 자료형 크기 : %d byte\n", sizeof(unsigned short));
	//콘솔에 unsigned short int의 사이즈를 출력한다. 2byte
	printf("unsigned short int 자료형 크기 : %d byte\n", sizeof(unsigned short int));
	
	//콘솔에 int의 사이즈를 출력한다. 4byte
	printf("int 자료형 크기 : %d byte\n", sizeof(int));
	//콘솔에 signed int의 사이즈를 출력한다. 4byte
	printf("signed int 자료형 크기 : %d byte\n", sizeof(signed int));
	
	//콘솔에 unsigned의 사이즈를 출력한다. 4byte
	printf("unsigned 자료형 크기 : %d byte\n", sizeof(unsigned));
	//콘솔에 unsigned int의 사이즈를 출력한다. 4byte
	printf("unsigned int 자료형 크기 : %d byte\n", sizeof(unsigned int));
	
	//콘솔에 long의 사이즈를 출력한다. 4byte
	printf("long 자료형 크기 : %d byte\n", sizeof(long));
	//콘솔에 long int의 사이즈를 출력한다. 4byte
	printf("long int 자료형 크기 : %d byte\n", sizeof(long int));
	
	//콘솔에 signed long의 사이즈를 출력한다. 4byte
	printf("signed long 자료형 크기 : %d byte\n", sizeof(signed long));
	//콘솔에 signed long int의 사이즈를 출력한다. 4byte
	printf("signed long int 자료형 크기 : %d byte\n", sizeof(signed long int));
	
	//콘솔에 unsigned long의 사이즈를 출력한다. 4byte
	printf("unsigned long 자료형 크기 : %d byte\n", sizeof(unsigned long));
	//콘솔에 unsigned long int의 사이즈를 출력한다. 4byte
	printf("unsigned long int 자료형 크기 : %d byte\n", sizeof(unsigned long int));
	
	//콘솔에 long long의 사이즈를 출력한다. 8byte
	printf("long long 자료형 크기 : %d byte\n", sizeof(long long));
	//콘솔에 long long int의 사이즈를 출력한다. 8byte
	printf("long long int 자료형 크기 : %d byte\n", sizeof(long long int));	
	
	//콘솔에 signed long long의 사이즈를 출력한다. 8byte
	printf("signed long long 자료형 크기 : %d byte\n", sizeof(signed long long));
	//콘솔에 signed long long int의 사이즈를 출력한다. 8byte
	printf("signed long long int 자료형 크기 : %d byte\n", sizeof(signed long long int));
	
	//콘솔에 unsigned long long의 사이즈를 출력한다. 8byte
	printf("unsigned long long 자료형 크기 : %d byte\n", sizeof(unsigned long long));
	//콘솔에 unsigned long long int의 사이즈를 출력한다. 8byte
	printf("unsigned long long int 자료형 크기 : %d byte\n", sizeof(unsigned long long int));
	
	//콘솔에 float(단정밀도 실수형)의 사이즈를 출력한다. 4byte	
	printf("float 자료형 크기 : %d byte\n", sizeof(float));
	
	//콘솔에 double(배정밀도 실수형)의 사이즈를 출력한다. 8byte	
	printf("double 자료형 크기 : %d byte\n", sizeof(double));
	//콘솔에 long double(확장 배정밀도 실수형)의 사이즈를 출력한다. 16byte
	printf("long double 자료형 크기 : %d byte\n", sizeof(long double));	
}
