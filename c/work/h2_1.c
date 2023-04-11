/*
* 설명 : 각 자료형에 대한 byte 사이즈를 출력 
* 파일 이름 : h2_1.c
* 수정 일자 : 2023-04-11
* 작성자 : 신주섭
*/
#include <stdio.h>		//선행지시자, 기본 입출력 함수 헤더(printf(), scanf()등)를 포함

/* main 시작 함수 */
void main() {

/*	
이 코드는 C 언어에서 사용 가능한 다양한 자료형의 크기를 출력하는 코드입니다.



sizeof(char)는 char 자료형의 크기를 출력하는 코드입니다. 여기서 char와 signed char는 동일한 자료형이지만 컴파일러에 따라 부호 없는 문자를 나타내기도 하므로 정확히 부호가 있는 문자를 나타내고자 할 경우 signed char를 사용하는 것이 좋습니다.

sizeof(signed short)는 signed short 자료형의 크기를 출력하는 코드입니다. signed short int와 동일한 자료형이며 부호가 있는 정수를 나타냅니다.

sizeof(unsigned short)는 unsigned short 자료형의 크기를 출력하는 코드입니다. unsigned short int와 동일한 자료형이며 부호가 없는 정수를 나타냅니다.

sizeof(int)는 int 자료형의 크기를 출력하는 코드입니다. 부호가 포함된 정수형 자료형입니다.

sizeof(unsigned)는 unsigned 자료형의 크기를 출력하는 코드입니다. unsigned int와 동일한 자료형이며 부호가 없는 정수를 나타냅니다.

sizeof(long)은 long 자료형의 크기를 출력하는 코드입니다. int보다 큰 값을 표현할 때 사용합니다.

sizeof(long long)은 long long 자료형의 크기를 출력하는 코드입니다. long long int와 동일한 자료형이며 long 자료형보다 더 큰 값을 표현할 때 사용합니다.

sizeof(float), sizeof(double), sizeof(long double)는 각각 float, double, long double 자료형의 크기를 출력하는 코드입니다. 각각 단정밀도 실수형, 배정밀도 실수형, 확장 배정밀도 실수형입니다.

위 코드에서 sizeof() 함수는 전달된 자료형의 크기를 반환하는 함수입니다. 출력할 때 %d로 출력합니다.

char 자료형 크기 : 1 byte
signed char 자료형 크기 : 1 byte
short 자료형 크기 : 2 byte
short int 자료형 크기 : 2 byte

signed short 자료형 크기 : 2 byte
signed short int 자료형 크기 : 2 byte
unsigned short 자료형 크기 : 2 byte
unsigned short int 자료형 크기 : 2 byte
int 자료형 크기 : 4 byte
signed int 자료형 크기 : 4 byte
unsigned 자료형 크기 : 4 byte
unsigned int 자료형 크기 : 4 byte
long 자료형 크기 : 4 byte
long int 자료형 크기 : 4 byte
signed long 자료형 크기 : 4 byte
signed long int 자료형 크기 : 4 byte
unsigned long 자료형 크기 : 4 byte
unsigned long int 자료형 크기 : 4 byte
long long 자료형 크기 : 8 byte
long long int 자료형 크기 : 8 byte
signed long long 자료형 크기 : 8 byte
signed long long int 자료형 크기 : 8 byte
unsigned long long 자료형 크기 : 8 byte
unsigned long long int 자료형 크기 : 8 byte
float 자료형 크기 : 4 byte
double 자료형 크기 : 8 byte
long double 자료형 크기 : 16 byte
*/
	
	//콘솔에  char형 사이즈 출력한다. 1byte
	printf("char 자료형 크기 : %d byte\n", sizeof(char));	
	//char와 signed char는 동일한 자료형이나 signed char는 부호가 있는 문자를 출력할때 사용한다. 
	//콘솔에 signed char의 사이즈를 출력한다. 1byte
	printf("signed char 자료형 크기 : %d byte\n", sizeof(signed char));	//
	
	//콘솔에 short의 사이즈를 출력한다. 2byte
	printf("short 자료형 크기 : %d byte\n", sizeof(short)); 	
	//콘솔에 short int 의 사이즈를 출력한다. 2byte
	printf("short int 자료형 크기 : %d byte\n", sizeof(short int));	
	
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("signed short 자료형 크기 : %d byte\n", sizeof(signed short));
	//콘솔에 signed short int의 사이즈를 출력한다. 2byte	
	printf("signed short int 자료형 크기 : %d byte\n", sizeof(signed short int));
	
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("unsigned short 자료형 크기 : %d byte\n", sizeof(unsigned short));
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("unsigned short int 자료형 크기 : %d byte\n", sizeof(unsigned short int));
	
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("int 자료형 크기 : %d byte\n", sizeof(int));
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("signed int 자료형 크기 : %d byte\n", sizeof(signed int));
	
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("unsigned 자료형 크기 : %d byte\n", sizeof(unsigned));
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("unsigned int 자료형 크기 : %d byte\n", sizeof(unsigned int));
	
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("long 자료형 크기 : %d byte\n", sizeof(long));
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("long int 자료형 크기 : %d byte\n", sizeof(long int));
	
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("signed long 자료형 크기 : %d byte\n", sizeof(signed long));
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("signed long int 자료형 크기 : %d byte\n", sizeof(signed long int));
	
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("unsigned long 자료형 크기 : %d byte\n", sizeof(unsigned long));
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("unsigned long int 자료형 크기 : %d byte\n", sizeof(unsigned long int));
	
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("long long 자료형 크기 : %d byte\n", sizeof(long long));
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("long long int 자료형 크기 : %d byte\n", sizeof(long long int));	
	
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("signed long long 자료형 크기 : %d byte\n", sizeof(signed long long));
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("signed long long int 자료형 크기 : %d byte\n", sizeof(signed long long int));
	
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("unsigned long long 자료형 크기 : %d byte\n", sizeof(unsigned long long));
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("unsigned long long int 자료형 크기 : %d byte\n", sizeof(unsigned long long int));
	
	//콘솔에 signed short의 사이즈를 출력한다. 2byte	
	printf("float 자료형 크기 : %d byte\n", sizeof(float));
	
	//콘솔에 signed short의 사이즈를 출력한다. 2byte	
	printf("double 자료형 크기 : %d byte\n", sizeof(double));
	//콘솔에 signed short의 사이즈를 출력한다. 2byte
	printf("long double 자료형 크기 : %d byte\n", sizeof(long double));	
}
