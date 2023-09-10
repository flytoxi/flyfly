#pragma warning(disable:6031)//禁用 6031 的安全警告



#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


//        指     针
//指针就是个变量，用来存放地址
//指针的大小是固定的4/8个字节。(32位、64位)


//(*(void (*)()0))();//把 0 强制类型转换成：void(*)() 函数指针类型， 0 就是一个函数的地址；
//				 //调用0地址出的函数
//
//void(  *signal( int, void( * )( int ) ) )( int );   
//                整形  函数指针类型                    函数返回类型  void(*)(int) - 函数指针

// signal是一个函数声明
// signal函数的参数有两个，第一个是 int , 第二个是 函数指针， 该函数指针指向的函数的参数是 int， 返回类型是 void 
// signal函数的返回类型也是一个函数指针，该函数指针指向的函数的参数类型是 int ， 返回类型是void
//void(*signal(int, void(*)(int)))(int);
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
 



// 函数指针

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*int arr[10] = { 0 };*/
//	/*printf("sum = %d", Add(a, b));*/
//	//&函数名 和 函数名 都是函数的地址
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	/*scanf("%d %d", &a, &b);*/
//	int (*pa)(int, int) = Add;
//	printf("sum = %d \n", (pa)(a, b));
//  //printf("sum = %d \n", (*pa)(a, b));     
//  //printf("sum = %d \n", (**pa)(a, b));  // *解引用 是个摆设 有没有没有太大的价值
//  //printf("sum = %d \n", (***pa)(a, b)); //  函数名本来是个地址， Add(a,b)
//}


// 函数指针数组


//char* my_strcpy(char* dest, const char* src);
//int main()
//{
//	char* (*pf)(char*, const char*);
//	char* (*pfarr[4])(char*, const char*);
//}
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
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int(*parr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个数字：");
//			scanf("%d %d", &x, &y);
//			int ret = parr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出程序。\n");
//		}
//		else
//			printf("选择错误，请重新输入：\n");
//	} while (input);
//	return 0;
//}

// 
//int main()
//{
//	int* arr[5];
//	//需要一个数组， 存放4个函数的地址 - 函数指针的数组
//	/*int (*p)(int, int) = Add;*/
//	int (*parr[5])(int, int) = { Add, Sub, Mul, Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](4, 2));
//	}
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello world!!!");
//	return 0;
//}

//数组参数，指针参数

//二级指针

//void test(int** ptr)
//{
//	printf("%d\n", **ptr);
//
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}


//void test(int** p) 
//{}
//int main()
//{
//	int* arr[10] = { 0 }; //指针数组
//	test(arr);
//	return 0;
//}

//一级指针
//void test1(int* p)
//{}
//void test2(char* p)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test1(p1);
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);
//	return 0;
//}



//一维数组
//void test(int arr[])     √
//{}
//void test(int arr[10])   √ //数组大小可以不写
//{}
//void test(int *arr)      √
//{}
//void test2(int *arr[20]) √
//{}
//void test2(int **arr)    √
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test(arr2);
//	return 0;
//}

//二维数组

//void test(int arr[3][5]) √ // 行可以省略，列不能
//{}
//void test(int arr[][5])  √
//{}
//void test(int arr[3][])  ×
//{}
//void test(int *arr)      ×
//{}
//void test(int **arr)     ×
//{}
//void test(int *arr[5])   ×
//{}
//void tes(int (*arr)[5])  √
//{}
//
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}




//int arr[5];		  //arr 是一个5个元素的数组
//int *parr1[10];     //parr1是一个数组，数组有10个元素，每个元素的类型是int* ,parr1是指针数组
//int (*parr2)[10];   //parr2是一个指针，该指针指向了一个数组，数组有10个元素，每个元素的类型是int，-parr2是数组指针
//int (*parr3[10])[5] //parr3是一个数组,数组有10个元素，每个元素是 一个 指向有5个int类型元素的 数组的 指针



//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n",sz);
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//
//
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//常量字符串,a的地址赋给p
//	/**p = 'w';
//	printf("%s\n", p);*/
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	printf("%p\n", &(*p));
//	printf("%p\n", p);
//
//	return 0;
//}


//int main()
//{
//	char str1[] = "hello world.";
//	char str2[] = "hello world.";
//	char *str3 = "hello world.";//常量字符串，不能修改，节省空间，用的同一份  "hello world."
//	char *str4 = "hello world.";
//
//	if (str1 == str2)
//		printf("str1 and str2 arr same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}


//指针数组

//int main()
//{
//	//int arr[10] = { 0 };
//	//char ch[5] = { 0 };
//	//int* parr[4]; //存放整形指针的数组
//	//char* pch[5]; //存放字符指针的数组
//
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b, &c, &d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//		printf("%d ", p[i]);
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));//arr[i] == *(arr+i) == p[i] == *(p+i)
//
//	}
//	return 0;
//}
//数组指针  一般用于二维以上

//void print(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//void print(int (*parr)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", parr[i][j]);
//			printf("%d ", *(parr[i] + j));
//
//			printf("%d ", *(*(parr + i) + j));
//			printf("%d ", (*(parr + i))[j]);
//		}
//		printf("\n");
//	}
//	
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7} };
//	print(arr, 3, 5);
//	return 0;
//}




//int main()
//{
//	//int* p = NULL；//整形指针  -  指向整形的指针
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//arr - 首元素地址
//	//&arr[0] 首元素的地址
//	//&arr - 数组的地址
//	/*int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//	/*int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*p+i));
//	}*/
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}*/
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}

//struct Grade
//{
//	char name[10];
//	int age;
//	double score;
//};
//
//int main()
//{
//	/*struct Grade s = { "张三", 21, 95.4 };*/
//	struct Grade tmp = { 0 };
//	FILE* pf = fopen("fly.txt", "rb");
//	if (pf == NULL)
//	{
//		return;
//	}
//	/*fwrite(&s, sizeof(struct Grade), 1, pf);*/
//	fread(&tmp, sizeof(struct Grade), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//}