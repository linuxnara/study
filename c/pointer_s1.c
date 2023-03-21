/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a = 1;
    //void *a_p; //범용포인터 변수
    int *a_p; //타입지정 포인터
    a_p = &a;  //주소연산자 &
    
    printf("%p\n", a_p);
    printf("%ld\n", sizeof(void *)); //포인터의 크기
    printf("%d\n", *a_p);   //poiter가 int type으로 반환 맨앞에 *는 역참조 연산자

    return 0;
}
