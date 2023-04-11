/*
* 설명 : 변수 a,b를 입력받아 a*b한 값을 c에 반환하고 그 내용을 출력한다. 
* 파일 이름 : h1_2.c
* 수정 일자 : 2023-04-11
* 작성자 : 신주섭
*/
#include <stdio.h> 				//선행지시자, 기본 입출력 함수 헤더(printf(), scanf()등)를 포함
#pragma warning(disable:4996))	//scanf에 대한 경고를 제거하도록 하는 선행지시자 

int a,b,c;						//상수 a,b,c 선언 초기값을 선언하지 않아서 쓰레기값이 들어갈 수 있음 
int product(int x, int y);		//사용자 정의 함수의 프로토타입으로 미리 정의 하여 컴파일러에게 알려주고 선언전 호출시 오류가 나는걸 방지한다. 

/* main 함수 */
void main() {
	//숫자를 입력 받아 a변수에 저장한다. 
	printf("Enter a number between 1 and 100 : ");
	scanf("%d", &a); 	//주소값을 지정하여 변수a에 입력된 값이 할당된다  
	
	//숫자를 입력받아 b변수에 저장한다 
	printf("Enter another number between 1 and 100 : ");
	scanf("%d", &b);	//주소값을 지정하여 변수b에 입력된 값이 할당된다  
	
	/*
	  상단에 정의된 사용자 정의 함수의 원형에 따라 하단에 정의된 함수가 호출된다
	  product함수에 파라메터 scanf로 부터 입력된 a,b 값을 파라메터 전달하고 처리 완료된 값은 c값에 저장된다 
	*/ 	
	c = product(a,b);			
	
	//scanf로 입력된 a,b 값과 함수 product에서 처리된 값을 출력한다. 
	printf("%d * %d = %d\n", a, b, c);
} 

/* product 사용자 정의 함수로 처리결과는 int형으로 반환한다.*/
int product(int x, int y) {
	//파라메터로 입력받은 x값과 y값을 곱한 결과를 int형으로 리턴한다. 
	return (x * y);
}
