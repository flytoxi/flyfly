#pragma once
#define ROW 3
#define COL 3

#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
//ÉùÃ÷¡£
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void WindowsMove(char board[ROW][COL], int row, int col);


char IsWin(char board[ROW][COL], int row, int col);