#include <iostream>




//���漱��

float func(float);
//�Ǽ��� �Լ��� �����Ѵ�.



float calc(float number) {
	const float PI = 3.141592f;

	float memory = number * number * PI;

	return memory;
}


int main() {
		
	////������ ������ Ÿ��
	//char charvalue = 'A';   //���� �ϳ��� �����ϱ� ���� ������ Ÿ��
	//short shortvalue = 10;  //int ���� ���� ���� �����ϱ� ���� ������ Ÿ��
	//int intvalue = 100;     //���� ������ ���� �����ϱ� ���� ������ Ÿ��
	//long longvalue = 200;   //int�� Ŀ���� ���� �� �Ⱦ��� ������ Ÿ��
	//long long longlongvalue = 1000;  //int���� ū ���� �����ϱ� ���� Ÿ��

	////�Ǽ��� ������ Ÿ��
	//float floatvalue = 10.1; //���� ������ �Ǽ��� �����ϱ� ���� ������ Ÿ��
	//double doublevalue = 100.1; //float ���� ū �Ǽ��� �����ϱ� ����
	//long double longdoublevalue = 200.1; //double ���� ū �Ǽ��� �����ϱ� ����

	//	printf("char �� ũ���? %d byte. \n", sizeof(charvalue));
	//	printf("short �� ũ���? %d byte. \n", sizeof(shortvalue));
	//	printf("int �� ũ���? %d byte. \n", sizeof(intvalue));
	//	printf("long �� ũ���? %d byte. \n", sizeof(longvalue));
	//	printf("long long �� ũ���? %d byte. \n", sizeof(longlongvalue));

	const float PI = 3.141592f;


	float r, area;



		printf("�������� �Է��ϼ��� : ");
		scanf_s("%f", &r);



		//area = r * r * PI;

		area = calc(r);


		printf("r2 * PI \n");
		//printf("���� ���� : %f", area);

	
		func(area);






		
		return 0;



}


float func(float area1) {

	printf("���� ���� : %f", area1);

	return area1;
}


//���� �������� �Է¹޾Ƽ� ���� ���̸� ����ϴ� ���α׷�
//]������ ���ϱ� ������������
//- �Լ� ���, ���漱��
//- ���� �������� ����
