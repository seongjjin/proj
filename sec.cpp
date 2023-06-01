#include <iostream>




//전방선언

float func(float);
//실수로 함수를 선언한다.



float calc(float number) {
	const float PI = 3.141592f;

	float memory = number * number * PI;

	return memory;
}


int main() {
		
	////정수형 데이터 타입
	//char charvalue = 'A';   //문자 하나를 저장하기 위한 데이터 타입
	//short shortvalue = 10;  //int 보다 작은 수를 저장하기 위한 데이터 타입
	//int intvalue = 100;     //가장 만만한 수를 저장하기 위한 데이터 타입
	//long longvalue = 200;   //int가 커져서 이제 잘 안쓰는 데이터 타입
	//long long longlongvalue = 1000;  //int보다 큰 수를 저장하기 위한 타입

	////실수형 데이터 타입
	//float floatvalue = 10.1; //가장 만만한 실수를 저장하기 위한 데이터 타입
	//double doublevalue = 100.1; //float 보다 큰 실수를 저장하기 위한
	//long double longdoublevalue = 200.1; //double 보다 큰 실수를 저장하기 위한

	//	printf("char 의 크기는? %d byte. \n", sizeof(charvalue));
	//	printf("short 의 크기는? %d byte. \n", sizeof(shortvalue));
	//	printf("int 의 크기는? %d byte. \n", sizeof(intvalue));
	//	printf("long 의 크기는? %d byte. \n", sizeof(longvalue));
	//	printf("long long 의 크기는? %d byte. \n", sizeof(longlongvalue));

	const float PI = 3.141592f;


	float r, area;



		printf("반지름을 입력하세요 : ");
		scanf_s("%f", &r);



		//area = r * r * PI;

		area = calc(r);


		printf("r2 * PI \n");
		//printf("원의 넓이 : %f", area);

	
		func(area);






		
		return 0;



}


float func(float area1) {

	printf("원의 넓이 : %f", area1);

	return area1;
}


//원의 반지름을 입력받아서 원의 넓이를 출력하는 프로그램
//]원주율 곱하기 반지름반지른
//- 함수 사용, 전방선언
//- 원의 반지름은 정수
