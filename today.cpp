// today.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int func(int a, int b, int c, int d) {

	a = b * c + d;
	
	return a;

}

int sec() {



}


int main()
{

	// 변수 선언부
	
	/*int result;
	int num1, num2;*/

	int result=0, num1=0, num2=0, num3=0;



	// 사용자 입력 받는 로직 
	
	//교수님이 하신 것
	/*printf("정수 one : ");
	scanf_s("%d", &num1);
	printf("정수 two : ");
	scanf_s("%d", &num2);*/

	/*printf("정수 2개를 입력해주세요 : ");
	scanf_s("%d, %d", &num1, &num2);*/


	//내꺼

	printf("정수 3개를 입력해주세요 : ");
	scanf_s("%d, %d, %d", &num1, &num2, &num3);
	//스캔에프에는 무조건 앤드 붙이기



	// 실제 연산하는 로직 / 플러스 연산
	
	//교수님
	/*result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);*/

	//내꺼
	result = func(result, num1, num2, num3);
	printf("%d * %d + %d = %d \n", num1, num2, num3, result);



	
	//main 함수 여기서 종료
	return 0;   









}   //main()



