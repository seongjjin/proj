#include <iostream>

int main() {
//
	char charvalue = 'B';

	printf("char ����� ���� c�� �غ���. -> %d \n", charvalue);

	bool isSame = ('A' == 65);

	char someAlphabet = '$';
	bool isBigAlphabet = ('A' <= someAlphabet && someAlphabet <= 'Z');
	bool issmallAlphabet = ('a' <= someAlphabet && someAlphabet <= 'z');
	bool isnumberAlphabet = ('0' <= someAlphabet && someAlphabet <= '9');

	if (isBigAlphabet)
	{
		printf("���� �빮�� �Դϴ�. \n");
	}  // if���� ���ǽ��� ���̸� ������ ���� ������ �����ϰ�, �����̸� �ǳʶڴ�.
	else if (issmallAlphabet)
	{
		printf("���� �ҹ��� �Դϴ�. \n");
	}
	else if (isnumberAlphabet)
	{
		printf("���� �Դϴ�. \n");
	}

	else
	{
		printf("�� �𸣰ڽ��ϴ�. \n");
	} // ���� ���ǽĿ��� ���� �ƴ�, �ٸ� ��� ��� ������ ���� ������ �����Ѵ�.




	//printf("\nsome alphabet�� �빮���ΰ�?? %d \n", isBigAlphabet);
//
//
//
//	printf("\n��¥�� ������?? %d \n", isSame);

	
	//char charvalue = '@';
	//// Ư������ @�� �����Ѵ�

	//bool isSame = ('A' == 65);
	//// A�� 65���� Ȯ���Ѵ�

	//char someAlphabet = '#';
	//// ���� ���� ���ڴ� #�̴�
	//
	//bool isBigAlphabet = ('A' <= someAlphabet && someAlphabet <= 'Z');
	////���� ���� ������ #�� a���� ũ�� z���� ������ Ȯ���Ѵ�
	//
	//bool issmallAlphabet = ('a' <= someAlphabet && someAlphabet <= 'z');
	////�ҹ��ں��� ũ�� ������ Ȯ���Ѵ�.
	//
	//bool isnumberAlphabet = ('0' <= someAlphabet && someAlphabet <= '9');
	////0���� ũ�� ������ Ȯ���Ѵ�
	//
	//bool result;


	//result = (isBigAlphabet || issmallAlphabet || isnumberAlphabet);
	////������ ��. ������ ������ �������� Ȯ���Ѵ�.
	//
	//printf("\nsome alphabet�� Ư�������ΰ�?? %d \n",result);





	//





	//return 0;

}


//ĳ���� �ϳ��� �Է¹޾Ƽ� �ش� ���ڰ� Ư���������� �ƴ��� üũ�ؼ� �˷��ִ� ���α׷� �ۼ��غ���
//- �빮�� ���ĺ� �ƴϰ�, �ҹ��� ���ĺ� �ƴϸ� Ư�����ڷ� ���� ����
//- �ƹ��ų� �Է��غ��ٵ�, ���� Ư�������� ��쿡�� ���� �ϵ�
//�Լ� Ȱ��, ���漱�� Ȱ��
//
//
//���̿��� ��Ʈ�� �ƴϴ�
//�ҹ��ڵ� �ƴϴ�
//���ڵ� �ƴϴ�
