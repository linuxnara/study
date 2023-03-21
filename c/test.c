#include <stdio.h>
#include <stdbool.h>

int main(int args, char *argv[]) {
    // int n1 = 1, n2 = 2, n3 = 3;
    // int r1, r2, r3;
    // bool tf = -3;

    // r1 = (n2 <= 2) || (n3 > 3);
    // r2 = !n3;
    // r3 = (n1 > 1) && (n2 < 3);

    // printf("%d\n", tf);
    // printf("%d > 1 = %d\n", n1, n1 > 1);
    // printf("%d, %d, %d\n", r1, r2, r3);
    // printf("%d\n", r3 - r2 + r1);

    // int a[] = {14, 22, 30, 38};
    // printf("%d\n", a[2]);
    // printf("%u\n", &a[2]);
    // printf("%u\n", a);
  

    //--------------------------
    // int x = 5, a, b;
    
    // a = ++x*x--;
    // b = x * 10;

    // printf("%d\n", a);
    // printf("%d\n", b);

    int a = 10, b = 3, c = 1;
    a *= (b-1);
    b/=2+3;
    c+=2;
    printf("a=%d b=%d, c=%d\n", a,b,c);


    float ff = 3.14;
    printf("int형의 크기는=%d바이트\n", sizeof(int));
    printf("float형의 크기는=%d바이트\n", sizeof(ff));
    printf("double형의 크기는=%d바이트\n", sizeof(double));
    printf("long형의 크기는=%d바이트\n", sizeof(long));


    //--------------------------
    int a1=10, b1=20, c1= 30;
        
    printf("%d\n", a1 = b1+=2*c1);          //c1 * 2 = 60 + b1(20) + 80 --> b1 = 80
    //printf("%d\n", b1);
    printf("%d\n", a1 = (b1 > c1) ? b1 : c1);       //b1 = 80으로 바뀐상태
    
    return 0;
}