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
//	}//二维数组在内中也是连续存放的
//	//一行内部连续，跨行也是连续
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
//		//一趟要经过的过程
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
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
//	//排序为升序
//	bubble_sort(arr);
//
//	return 0;
//}
//数组的应用实例三子棋
//test.c 测试和游戏的逻辑
//game.h 关于游戏相关函数的声明，符号声明，头文件的包含
//game.c 游戏相关函数的实现

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
	//存储数据-二维数组
	char board[ROW][COL];
	//初始化棋盘，初始化空格
	InitBoard(board, ROW, COL);
	DisplayBoard(board,ROW,COL);//打印棋盘的本质是打印数组的内容
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择戳我，重新选择\n");
			break;
		}
	} while(input);

	return 0;
}
