#include <stdio.h>

void main() {
	int a[] = {14,22,30,38};
	
	printf("%u\n", &a[0]);		//a�� �����ּ� 
	printf("%u, %u, %u\n", &a[0], &a[1] , &a[2]); //int�����̹Ƿ� 4byte�� ���� 
	printf("%u",a);	//a�� �����ּ� 
}
