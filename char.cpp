#include <iostream>

int main() {
//
	char charvalue = 'B';

	printf("char 출력할 때는 c로 해보자. -> %d \n", charvalue);

	bool isSame = ('A' == 65);

	char someAlphabet = '$';
	bool isBigAlphabet = ('A' <= someAlphabet && someAlphabet <= 'Z');
	bool issmallAlphabet = ('a' <= someAlphabet && someAlphabet <= 'z');
	bool isnumberAlphabet = ('0' <= someAlphabet && someAlphabet <= '9');

	if (isBigAlphabet)
	{
		printf("영문 대문자 입니다. \n");
	}  // if문은 조건식이 참이면 스코프 안의 내용을 진행하고, 거짓이면 건너뛴다.
	else if (issmallAlphabet)
	{
		printf("영문 소문자 입니다. \n");
	}
	else if (isnumberAlphabet)
	{
		printf("숫자 입니다. \n");
	}

	else
	{
		printf("잘 모르겠습니다. \n");
	} // 위의 조건식에서 참이 아닌, 다른 모두 경우 스코프 안의 내용을 진행한다.




	//printf("\nsome alphabet은 대문자인가?? %d \n", isBigAlphabet);
//
//
//
//	printf("\n진짜로 같은가?? %d \n", isSame);

	
	//char charvalue = '@';
	//// 특수문자 @로 선언한다

	//bool isSame = ('A' == 65);
	//// A는 65인지 확인한다

	//char someAlphabet = '#';
	//// 내가 정한 문자는 #이다
	//
	//bool isBigAlphabet = ('A' <= someAlphabet && someAlphabet <= 'Z');
	////위에 내가 선언한 #이 a보다 크고 z보다 작은지 확인한다
	//
	//bool issmallAlphabet = ('a' <= someAlphabet && someAlphabet <= 'z');
	////소문자보다 크고 작은지 확인한다.
	//
	//bool isnumberAlphabet = ('0' <= someAlphabet && someAlphabet <= '9');
	////0보다 크고 작은지 확인한다
	//
	//bool result;


	//result = (isBigAlphabet || issmallAlphabet || isnumberAlphabet);
	////선언한 것. 세개가 참인지 거짓인지 확인한다.
	//
	//printf("\nsome alphabet은 특수문자인가?? %d \n",result);





	//





	//return 0;

}


//캐릭터 하나를 입력받아서 해당 문자가 특수문자인지 아닌지 체크해서 알려주는 프로그램 작성해보기
//- 대문자 알파벳 아니고, 소문자 알파벳 아니면 특수문자로 인정 이지
//- 아무거나 입력해볼텐데, 오직 특수문자인 경우에만 인정 하드
//함수 활용, 전방선언 활용
//
//
//에이에서 제트는 아니다
//소문자도 아니다
//숫자도 아니다
