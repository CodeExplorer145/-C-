#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int arr[][4] = { {1,2},{3,4},{4,5} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//		}
//
//	}//��ά����������Ҳ��������ŵ�
//	//һ���ڲ�����������Ҳ������
//	return 0;
//}
//int main()
//{
//	int arr[][4] = { {1,2},{3,4},{4,5} };
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d", *p);
//		p++;
//	}
//	return 0;
//}
//void bubble_sort(int arr[])
//{
//	int sz = sizeof(arr) / sizeof{arr[0]};
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��Ҫ�����Ĺ���
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//����Ϊ����
//	bubble_sort(arr);
//
//	return 0;
//}
//�����Ӧ��ʵ��������
//test.c ���Ժ���Ϸ���߼�
//game.h ������Ϸ��غ���������������������ͷ�ļ��İ���
//game.c ��Ϸ��غ�����ʵ��

#include"gameh.h"

void menu()
{
	printf("******************\n");
	printf("******1.play******\n");
	printf("******0.exit******\n");
	printf("******************\n");
}

void game()
{
	//�洢����-��ά����
	char board[ROW][COL];
	//��ʼ�����̣���ʼ���ո�
	InitBoard(board, ROW, COL);
	DisplayBoard(board,ROW,COL);//��ӡ���̵ı����Ǵ�ӡ���������
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ����ң�����ѡ��\n");
			break;
		}
	} while(input);

	return 0;
}
