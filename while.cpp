#include <iostream>

hint main() {

	//printf("hello world! \n");
	//printf("hello world! \n");
	//printf("hello world! \n");
	//printf("hello world! \n");
	//printf("hello world! \n");

	//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
	//1���� 10���� while��
	//int loopcount = 1;
	//while (10 >= loopcount)// ū ������ �۾������� ����ī��Ʈ�� ���� ����
	//	
	//{
	//	printf("���� %d \n", loopcount);
	//	loopcount += 1; //���̳ʽ��� �÷���
	//}    // loop: ���� ����
	//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�

	//int loopcount = 1;
	//while (loopcount <= 5)
	//	
	//{
	//	printf("* * * * * \n", loopcount);
	//	loopcount += 1; 
	//}    // loop: ���� ����


	int loopcount1, loopcount2;
	int count;
	printf("���簢���� ����� �Է��ϼ��� : ");
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

