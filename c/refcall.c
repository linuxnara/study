// 참조에 의한 호출 함수 예시
#include <stdio.h>

void add(int *add_a) {
    *add_a = *add_a + 1;
    printf("add_a : %p\n", add_a);
    printf("in add function, a = %d\n", *add_a);
}

int main()
{
    int a = 0;
    
    add(&a);
    
    printf("a : %p\n", &a);
    printf("in main function, a = %d\n", a);
    return 0;
}