#include <iostream>

hint main() {

	//printf("hello world! \n");
	//printf("hello world! \n");
	//printf("hello world! \n");
	//printf("hello world! \n");
	//printf("hello world! \n");

	//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
	//1에서 10까지 while문
	//int loopcount = 1;
	//while (10 >= loopcount)// 큰 수부터 작아질때는 루프카운트랑 숫자 변경
	//	
	//{
	//	printf("숫자 %d \n", loopcount);
	//	loopcount += 1; //마이너스를 플러스
	//}    // loop: 루프 종료
	//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ

	//int loopcount = 1;
	//while (loopcount <= 5)
	//	
	//{
	//	printf("* * * * * \n", loopcount);
	//	loopcount += 1; 
	//}    // loop: 루프 종료


	int loopcount1, loopcount2;
	int count;
	printf("정사각형의 사이즈를 입력하세요 : ");
	scanf_s(" %d", &count);

	loopcount1 = count;
	while (loopcount1 >= 1) {
		

		loopcount2 = count;
		while (loopcount2 >= 1)
		{
			printf(" *");
			loopcount2 -= 1;
		}
		printf("\n");
		loopcount1 -= 1;
	}

	/*loopcount = 4;
	while (loopcount)
	{
		printf("");
		loopcount -= 1;
	}*/
		
	














	return 0;
}

