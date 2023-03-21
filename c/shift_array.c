/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int foo;
    foo = 'a';
    foo = foo << 8 | 'b'; //8bit 이동
    foo = foo << 8 | 'c';
    foo = foo << 8 | 'd';
    
    printf("%c\n", foo >> 24);
    printf("%c\n", foo >> 16);
    printf("%c\n", foo >> 8);
    printf("%c\n", foo);
    
    printf("-----------------------\n");
    
    
    char array[5] = {'a','b','c','d','e'};
    printf("%c\n", *array);
    printf("%c\n", *(array+1));
    printf("%c\n", *(array+2));
    printf("%c\n", *(array+3));
    printf("%c\n", *(array+4));
    printf("%c\n", *(array+5));
    
    printf("%c\n",array[0]);
    
    
    printf("-----------------------\n");
    
    for(int i = 0; i < 5; i++) {
        printf("%c\n", array[i]);
    }
    
    printf("-----------------------\n");
    
    char b = 'a';
    char strArray[5] = "abcde";

    for(int i = 0; i < 5; i++) {
        printf("%c\n", strArray[i]);
    }    
    
    printf("-----------------------\n");
    //point array
    char *pArray = "abc";   //리터럴, 배열 수정 불가
    for(int i = 0; i < 3; i++) {
        printf("%c\n", pArray[i]);
    }        
    
    return 0;
}
