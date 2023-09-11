#pragma warning(disable:6031)//禁用 6031 的安全警告



#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


//        指     针


//指向函数指针数组的指针

//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)][10] = &arr;
//	
//	int (*pf)(int, int);// 函数指针
//
//	int (*pfArr[4])(int, int);  // pfArr是一个数组 -  函数指针数组
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr 是一个数组指针， 指针指向的数组有4个元素，每个元素的类型是一个函数指针  int (*)(int, int)
//
//	return 0;
//}
















//  计算器
//void menu()
//{
//	printf("-------------------------------------\n");
//	printf("------- 1.Add  2.Sub  3.Mul ---------\n");
//	printf("------- 4.Div  0.Exit       ---------\n");
//	printf("-------------------------------------\n");
//}
//
//void Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数字：");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出:\n");
//			break;
//		default:
//			printf("输入错误：\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

