#pragma warning(disable:6031)//���� 6031 �İ�ȫ����



#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


//        ָ     ��


//ָ����ָ�������ָ��

//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)][10] = &arr;
//	
//	int (*pf)(int, int);// ����ָ��
//
//	int (*pfArr[4])(int, int);  // pfArr��һ������ -  ����ָ������
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr ��һ������ָ�룬 ָ��ָ���������4��Ԫ�أ�ÿ��Ԫ�ص�������һ������ָ��  int (*)(int, int)
//
//	return 0;
//}
















//  ������
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
//	printf("�������������֣�");
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
//		printf("��ѡ��");
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
//			printf("�˳�:\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

