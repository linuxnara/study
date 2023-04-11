/*
* ���� : �� �ڷ����� ���� byte ����� ��� 
* ���� �̸� : h2_1.c
* ���� ���� : 2023-04-11
* �ۼ��� : ���ּ�
*/
#include <stdio.h>		//����������, �⺻ ����� �Լ� ���(printf(), scanf()��)�� ����

/* main ���� �Լ� */
void main() {
	//sizeof�� char���� ������(����) ����Ѵ�. 1byte��� 
	printf("char �ڷ��� ũ�� : %d byte\n", sizeof(char));
	/*
		sizeof�� signed char���� ����� ����Ѵ�. 1byte
		char�� singned char �����ϳ� �����Ϸ��� ���� char�� ��ȣ���� ���ڸ� 
		��Ÿ���⵵ �ϹǷ� ��Ȯ�� ��ȣ�� �ִ� ���ڸ� ��Ÿ������ �� ��� signed char�� ��� �ϵ��� �Ѵ�. 
	*/
	printf("signed char �ڷ��� ũ�� : %d byte\n", sizeof(signed char));	//
	
	//sizeof�� short ���� ������(����)�� ����Ѵ�. 2byte 	
	printf("short �ڷ��� ũ�� : %d byte\n", sizeof(short)); 	
	/*
		sizeof�� short int ���� ������(����)�� ����Ѵ�. 2byte 	
		short�� short int�� ������ �ڷ����̸� short�� int���� ���� �ڷᰪ�� �����Ҷ� ����Ѵ�. 
	*/
	printf("short int �ڷ��� ũ�� : %d byte\n", sizeof(short int));	
	
	//sizeof�� signed short ���� ������(����)�� ����Ѵ� ��ȣ�� �ִ� ����. 2byte 
	printf("signed short �ڷ��� ũ�� : %d byte\n", sizeof(signed short));
	/*
		sizeof�� signed short int ���� ������(����)�� ����Ѵ�. 2byte
	*/	
	printf("signed short int �ڷ��� ũ�� : %d byte\n", sizeof(signed short int));
	
	//unsined short�� unsigned short int �� ������ �ڷ����̸� ��ȣ�� �ʿ���� ������ �ڷ��� 
	printf("unsigned short �ڷ��� ũ�� : %d byte\n", sizeof(unsigned short));
	printf("unsigned short int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned short int));
	
	//int�� signed int�� ������ �ڷ����̸� ��ȣ�� ���Ե� ������ �ڷ��� 
	printf("int �ڷ��� ũ�� : %d byte\n", sizeof(int));
	printf("signed int �ڷ��� ũ�� : %d byte\n", sizeof(signed int));
	
	//unsigned�� unsigned int�� ������ �ڷ����̸� ��ȣ�� ���� ������ �ڷ��� 
	printf("unsigned �ڷ��� ũ�� : %d byte\n", sizeof(unsigned));
	printf("unsigned int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned int));
	
	//long �� ������ �ڷ����̸� int���� ū ���� ǥ���Ҷ� ����Ѵ�. 
	printf("long �ڷ��� ũ�� : %d byte\n", sizeof(long));
	printf("long int �ڷ��� ũ�� : %d byte\n", sizeof(long int));
	printf("signed long �ڷ��� ũ�� : %d byte\n", sizeof(signed long));
	printf("signed long int �ڷ��� ũ�� : %d byte\n", sizeof(signed long int));
	
	printf("unsigned long �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long));
	printf("unsigned long int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long int));
	
	printf("long long �ڷ��� ũ�� : %d byte\n", sizeof(long long));
	printf("long long int �ڷ��� ũ�� : %d byte\n", sizeof(long long int));	
	
	printf("signed long long �ڷ��� ũ�� : %d byte\n", sizeof(signed long long));
	printf("signed long long int �ڷ��� ũ�� : %d byte\n", sizeof(signed long long int));
	
	printf("unsigned long long �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long long));
	printf("unsigned long long int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long long int));
	
	
	printf("float �ڷ��� ũ�� : %d byte\n", sizeof(float));
	printf("double �ڷ��� ũ�� : %d byte\n", sizeof(double));
	printf("long double �ڷ��� ũ�� : %d byte\n", sizeof(long double));	
}
