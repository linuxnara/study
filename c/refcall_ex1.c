#include <stdio.h>

// swap 함수: 입력받은 두 변수의 위치를 바꾸는 함수

void swap(int *a_p, int *b_p) {
    int c;
    c = *b_p;
    *a_p = *a_p;
    *a_p = c;
}

int main()
{
    int a = 10, b = 20;
    
    printf("%d, %d\n", a, b);
    swap(&a, &b);
    printf("%d, %d\n", a, b);
    
    return 0;
}