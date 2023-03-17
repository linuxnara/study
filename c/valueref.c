/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// 값에 의한 함수 호출 예시
#include <stdio.h>

void add(int add_a) {
    add_a = add_a + 1;
    printf("add_a : %p\n", &add_a);
    printf("in add function, a = %d\n", add_a);
}

int main()
{
    int a = 0;
    
    add(a);
    
    printf("a : %p\n", &a);
    printf("in main function, a = %d\n", a);
    return 0;
}