/*
* ���� : �� �ڷ����� ���� byte ����� ��� 
* ���� �̸� : h2_1.c
* ���� ���� : 2023-04-11
* �ۼ��� : ���ּ�
*/
#include <stdio.h>		//����������, �⺻ ����� �Լ� ���(printf(), scanf()��)�� ����

/* main ���� �Լ� */
void main() {

/*	
�� �ڵ�� C ���� ��� ������ �پ��� �ڷ����� ũ�⸦ ����ϴ� �ڵ��Դϴ�.



sizeof(char)�� char �ڷ����� ũ�⸦ ����ϴ� �ڵ��Դϴ�. ���⼭ char�� signed char�� ������ �ڷ��������� �����Ϸ��� ���� ��ȣ ���� ���ڸ� ��Ÿ���⵵ �ϹǷ� ��Ȯ�� ��ȣ�� �ִ� ���ڸ� ��Ÿ������ �� ��� signed char�� ����ϴ� ���� �����ϴ�.

sizeof(signed short)�� signed short �ڷ����� ũ�⸦ ����ϴ� �ڵ��Դϴ�. signed short int�� ������ �ڷ����̸� ��ȣ�� �ִ� ������ ��Ÿ���ϴ�.

sizeof(unsigned short)�� unsigned short �ڷ����� ũ�⸦ ����ϴ� �ڵ��Դϴ�. unsigned short int�� ������ �ڷ����̸� ��ȣ�� ���� ������ ��Ÿ���ϴ�.

sizeof(int)�� int �ڷ����� ũ�⸦ ����ϴ� �ڵ��Դϴ�. ��ȣ�� ���Ե� ������ �ڷ����Դϴ�.

sizeof(unsigned)�� unsigned �ڷ����� ũ�⸦ ����ϴ� �ڵ��Դϴ�. unsigned int�� ������ �ڷ����̸� ��ȣ�� ���� ������ ��Ÿ���ϴ�.

sizeof(long)�� long �ڷ����� ũ�⸦ ����ϴ� �ڵ��Դϴ�. int���� ū ���� ǥ���� �� ����մϴ�.

sizeof(long long)�� long long �ڷ����� ũ�⸦ ����ϴ� �ڵ��Դϴ�. long long int�� ������ �ڷ����̸� long �ڷ������� �� ū ���� ǥ���� �� ����մϴ�.

sizeof(float), sizeof(double), sizeof(long double)�� ���� float, double, long double �ڷ����� ũ�⸦ ����ϴ� �ڵ��Դϴ�. ���� �����е� �Ǽ���, �����е� �Ǽ���, Ȯ�� �����е� �Ǽ����Դϴ�.

�� �ڵ忡�� sizeof() �Լ��� ���޵� �ڷ����� ũ�⸦ ��ȯ�ϴ� �Լ��Դϴ�. ����� �� %d�� ����մϴ�.

char �ڷ��� ũ�� : 1 byte
signed char �ڷ��� ũ�� : 1 byte
short �ڷ��� ũ�� : 2 byte
short int �ڷ��� ũ�� : 2 byte

signed short �ڷ��� ũ�� : 2 byte
signed short int �ڷ��� ũ�� : 2 byte
unsigned short �ڷ��� ũ�� : 2 byte
unsigned short int �ڷ��� ũ�� : 2 byte
int �ڷ��� ũ�� : 4 byte
signed int �ڷ��� ũ�� : 4 byte
unsigned �ڷ��� ũ�� : 4 byte
unsigned int �ڷ��� ũ�� : 4 byte
long �ڷ��� ũ�� : 4 byte
long int �ڷ��� ũ�� : 4 byte
signed long �ڷ��� ũ�� : 4 byte
signed long int �ڷ��� ũ�� : 4 byte
unsigned long �ڷ��� ũ�� : 4 byte
unsigned long int �ڷ��� ũ�� : 4 byte
long long �ڷ��� ũ�� : 8 byte
long long int �ڷ��� ũ�� : 8 byte
signed long long �ڷ��� ũ�� : 8 byte
signed long long int �ڷ��� ũ�� : 8 byte
unsigned long long �ڷ��� ũ�� : 8 byte
unsigned long long int �ڷ��� ũ�� : 8 byte
float �ڷ��� ũ�� : 4 byte
double �ڷ��� ũ�� : 8 byte
long double �ڷ��� ũ�� : 16 byte
*/
	
	//�ֿܼ�  char�� ������ ����Ѵ�. 1byte
	printf("char �ڷ��� ũ�� : %d byte\n", sizeof(char));	
	//char�� signed char�� ������ �ڷ����̳� signed char�� ��ȣ�� �ִ� ���ڸ� ����Ҷ� ����Ѵ�. 
	//�ֿܼ� signed char�� ����� ����Ѵ�. 1byte
	printf("signed char �ڷ��� ũ�� : %d byte\n", sizeof(signed char));	//
	
	//�ֿܼ� short�� ����� ����Ѵ�. 2byte
	printf("short �ڷ��� ũ�� : %d byte\n", sizeof(short)); 	
	//�ֿܼ� short int �� ����� ����Ѵ�. 2byte
	printf("short int �ڷ��� ũ�� : %d byte\n", sizeof(short int));	
	
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("signed short �ڷ��� ũ�� : %d byte\n", sizeof(signed short));
	//�ֿܼ� signed short int�� ����� ����Ѵ�. 2byte	
	printf("signed short int �ڷ��� ũ�� : %d byte\n", sizeof(signed short int));
	
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("unsigned short �ڷ��� ũ�� : %d byte\n", sizeof(unsigned short));
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("unsigned short int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned short int));
	
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("int �ڷ��� ũ�� : %d byte\n", sizeof(int));
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("signed int �ڷ��� ũ�� : %d byte\n", sizeof(signed int));
	
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("unsigned �ڷ��� ũ�� : %d byte\n", sizeof(unsigned));
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("unsigned int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned int));
	
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("long �ڷ��� ũ�� : %d byte\n", sizeof(long));
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("long int �ڷ��� ũ�� : %d byte\n", sizeof(long int));
	
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("signed long �ڷ��� ũ�� : %d byte\n", sizeof(signed long));
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("signed long int �ڷ��� ũ�� : %d byte\n", sizeof(signed long int));
	
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("unsigned long �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long));
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("unsigned long int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long int));
	
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("long long �ڷ��� ũ�� : %d byte\n", sizeof(long long));
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("long long int �ڷ��� ũ�� : %d byte\n", sizeof(long long int));	
	
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("signed long long �ڷ��� ũ�� : %d byte\n", sizeof(signed long long));
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("signed long long int �ڷ��� ũ�� : %d byte\n", sizeof(signed long long int));
	
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("unsigned long long �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long long));
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("unsigned long long int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long long int));
	
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte	
	printf("float �ڷ��� ũ�� : %d byte\n", sizeof(float));
	
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte	
	printf("double �ڷ��� ũ�� : %d byte\n", sizeof(double));
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("long double �ڷ��� ũ�� : %d byte\n", sizeof(long double));	
}
