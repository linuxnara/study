/*
* ���� : �� �ڷ����� ���� byte ����� ��� 
* ���� �̸� : h2_1.c
* ���� ���� : 2023-04-11
* �ۼ��� : ���ּ�
*/
#include <stdio.h>		//����������, �⺻ ����� �Լ� ���(printf(), scanf()��)�� ����

/* main ���� �Լ� */
void main() {
	
	//�ֿܼ�  char�� ������ ����Ѵ�. 1byte
	printf("char �ڷ��� ũ�� : %d byte\n", sizeof(char));	
	//�ֿܼ� signed char�� ����� ����Ѵ�. 1byte
	printf("signed char �ڷ��� ũ�� : %d byte\n", sizeof(signed char));
	
	//�ֿܼ� short�� ����� ����Ѵ�. 2byte
	printf("short �ڷ��� ũ�� : %d byte\n", sizeof(short)); 		
	//�ֿܼ� short int �� ����� ����Ѵ�. 2byte
	printf("short int �ڷ��� ũ�� : %d byte\n", sizeof(short int));	
	
	//�ֿܼ� signed short�� ����� ����Ѵ�. 2byte
	printf("signed short �ڷ��� ũ�� : %d byte\n", sizeof(signed short));
	//�ֿܼ� signed short int�� ����� ����Ѵ�. 2byte	
	printf("signed short int �ڷ��� ũ�� : %d byte\n", sizeof(signed short int));
	
	//�ֿܼ� unsigned short�� ����� ����Ѵ�. 2byte
	printf("unsigned short �ڷ��� ũ�� : %d byte\n", sizeof(unsigned short));
	//�ֿܼ� unsigned short int�� ����� ����Ѵ�. 2byte
	printf("unsigned short int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned short int));
	
	//�ֿܼ� int�� ����� ����Ѵ�. 4byte
	printf("int �ڷ��� ũ�� : %d byte\n", sizeof(int));
	//�ֿܼ� signed int�� ����� ����Ѵ�. 4byte
	printf("signed int �ڷ��� ũ�� : %d byte\n", sizeof(signed int));
	
	//�ֿܼ� unsigned�� ����� ����Ѵ�. 4byte
	printf("unsigned �ڷ��� ũ�� : %d byte\n", sizeof(unsigned));
	//�ֿܼ� unsigned int�� ����� ����Ѵ�. 4byte
	printf("unsigned int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned int));
	
	//�ֿܼ� long�� ����� ����Ѵ�. 4byte
	printf("long �ڷ��� ũ�� : %d byte\n", sizeof(long));
	//�ֿܼ� long int�� ����� ����Ѵ�. 4byte
	printf("long int �ڷ��� ũ�� : %d byte\n", sizeof(long int));
	
	//�ֿܼ� signed long�� ����� ����Ѵ�. 4byte
	printf("signed long �ڷ��� ũ�� : %d byte\n", sizeof(signed long));
	//�ֿܼ� signed long int�� ����� ����Ѵ�. 4byte
	printf("signed long int �ڷ��� ũ�� : %d byte\n", sizeof(signed long int));
	
	//�ֿܼ� unsigned long�� ����� ����Ѵ�. 4byte
	printf("unsigned long �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long));
	//�ֿܼ� unsigned long int�� ����� ����Ѵ�. 4byte
	printf("unsigned long int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long int));
	
	//�ֿܼ� long long�� ����� ����Ѵ�. 8byte
	printf("long long �ڷ��� ũ�� : %d byte\n", sizeof(long long));
	//�ֿܼ� long long int�� ����� ����Ѵ�. 8byte
	printf("long long int �ڷ��� ũ�� : %d byte\n", sizeof(long long int));	
	
	//�ֿܼ� signed long long�� ����� ����Ѵ�. 8byte
	printf("signed long long �ڷ��� ũ�� : %d byte\n", sizeof(signed long long));
	//�ֿܼ� signed long long int�� ����� ����Ѵ�. 8byte
	printf("signed long long int �ڷ��� ũ�� : %d byte\n", sizeof(signed long long int));
	
	//�ֿܼ� unsigned long long�� ����� ����Ѵ�. 8byte
	printf("unsigned long long �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long long));
	//�ֿܼ� unsigned long long int�� ����� ����Ѵ�. 8byte
	printf("unsigned long long int �ڷ��� ũ�� : %d byte\n", sizeof(unsigned long long int));
	
	//�ֿܼ� float(�����е� �Ǽ���)�� ����� ����Ѵ�. 4byte	
	printf("float �ڷ��� ũ�� : %d byte\n", sizeof(float));
	
	//�ֿܼ� double(�����е� �Ǽ���)�� ����� ����Ѵ�. 8byte	
	printf("double �ڷ��� ũ�� : %d byte\n", sizeof(double));
	//�ֿܼ� long double(Ȯ�� �����е� �Ǽ���)�� ����� ����Ѵ�. 16byte
	printf("long double �ڷ��� ũ�� : %d byte\n", sizeof(long double));	
}
