#include <stdio.h>

void main() {
	int a[] = {14,22,30,38};
	
	printf("%u\n", &a[0]);		//a의 시작주소 
	printf("%u, %u, %u\n", &a[0], &a[1] , &a[2]); //int형식이므로 4byte씩 증가 
	printf("%u",a);	//a의 시작주소 
}
