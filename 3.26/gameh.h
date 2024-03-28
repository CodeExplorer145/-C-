#pragma once
#include<stdio.h>//头文件的包含


#define ROW 3
#define COL 3//符号定义

//函数的声明

void InitBoard(char board[ROW][COL], int row, int col);//初始化棋盘
void DisplayBoard(char board[ROW][COL],int row,int col);//打印棋盘

//玩家下棋
PlayerMove 