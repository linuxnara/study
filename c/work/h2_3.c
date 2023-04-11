/*
* 설명 : 두개의 파라메터 계산 하여 출력 
* 파일 이름 : h2_3.c 
* 수정 일자 : 2023-04-11
* 작성자 : 신주섭
*/


/*
사용자 정의 헤더파일을 include하는 선행지시자 
사용자 헤더파일에 stdio.h 헤더가 포함되어 있으므로 다시 추가할 필요 없음 
*/
#include "exam2-3.h"	//같은 경로에 있으므로 path를 추가적으로 지정할 필요가 없다. 

/* main 함수 */
void main() {
			
	int add_result, sub_result;			//현재 사용되지 않는 변수 
	
	//헤더 선행 지시자 ADD를 이용하여 10 + 5에 대한 결과를 출력한다. 
	printf("10과 5를 더하면 %d 이다.\n", ADD(10,5)); 	//exam2-3.h 헤더에 정의되어 있는 매크로 ADD ((x) + (y))  
	//헤더 선행 지시자 SUB를 이용하여 10-5에 대한 결과를 출력한다. 
	printf("10과 5를 빼면 %d 이다.\n", SUB(10,5));		//exam2-3.h 헤더에 정의되어 있는 매크로 SUB ((x) - (y)) 
	
	/* 변수를 사용하여 출력하도록 수정해본결과 
	int param1 = 10, param2 = 5;
	
	add_result = ADD(param1,param2);
	sub_result = SUB(param1,param2);
	
	printf("%d과 %d를 더하면 %d 이다\n", param1, param2, add_result);
	printf("%d과 %d를 빼면 %d 이다\n", param1, param2, sub_result);
	*/	
} 
