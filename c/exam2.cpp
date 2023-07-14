#include <stdio.h>

int func(int a) {
	printf("%d\n", a);
	
	if (a <= 1) 
		return 1;
	else
		return a * (func(a-1));	
}

int main() {
	int a = 5;
	int b = func(a);
	
	
	printf("%d", b);
}
