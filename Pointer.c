#pragma warning(disable:6031)//���� 6031 �İ�ȫ����



#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


//        ָ     ��
//ָ����Ǹ�������������ŵ�ַ
//ָ��Ĵ�С�ǹ̶���4/8���ֽڡ�(32λ��64λ)


//(*(void (*)()0))();//�� 0 ǿ������ת���ɣ�void(*)() ����ָ�����ͣ� 0 ����һ�������ĵ�ַ��
//				 //����0��ַ���ĺ���
//
//void(  *signal( int, void( * )( int ) ) )( int );   
//                ����  ����ָ������                    ������������  void(*)(int) - ����ָ��

// signal��һ����������
// signal�����Ĳ�������������һ���� int , �ڶ����� ����ָ�룬 �ú���ָ��ָ��ĺ����Ĳ����� int�� ���������� void 
// signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ����Ĳ��������� int �� ����������void
//void(*signal(int, void(*)(int)))(int);
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
 



// ����ָ��

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
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	/*scanf("%d %d", &a, &b);*/
//	int (*pa)(int, int) = Add;
//	printf("sum = %d \n", (pa)(a, b));
//  //printf("sum = %d \n", (*pa)(a, b));     
//  //printf("sum = %d \n", (**pa)(a, b));  // *������ �Ǹ����� ��û��û��̫��ļ�ֵ
//  //printf("sum = %d \n", (***pa)(a, b)); //  �����������Ǹ���ַ�� Add(a,b)
//}


// ����ָ������


//char* my_strcpy(char* dest, const char* src);
//int main()
//{
//	char* (*pf)(char*, const char*);
//	char* (*pfarr[4])(char*, const char*);
//}
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("�������������֣�");
//			scanf("%d %d", &x, &y);
//			int ret = parr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//		}
//		else
//			printf("ѡ��������������룺\n");
//	} while (input);
//	return 0;
//}

// 
//int main()
//{
//	int* arr[5];
//	//��Ҫһ�����飬 ���4�������ĵ�ַ - ����ָ�������
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

//���������ָ�����

//����ָ��

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
//	int* arr[10] = { 0 }; //ָ������
//	test(arr);
//	return 0;
//}

//һ��ָ��
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



//һά����
//void test(int arr[])     ��
//{}
//void test(int arr[10])   �� //�����С���Բ�д
//{}
//void test(int *arr)      ��
//{}
//void test2(int *arr[20]) ��
//{}
//void test2(int **arr)    ��
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test(arr2);
//	return 0;
//}

//��ά����

//void test(int arr[3][5]) �� // �п���ʡ�ԣ��в���
//{}
//void test(int arr[][5])  ��
//{}
//void test(int arr[3][])  ��
//{}
//void test(int *arr)      ��
//{}
//void test(int **arr)     ��
//{}
//void test(int *arr[5])   ��
//{}
//void tes(int (*arr)[5])  ��
//{}
//
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}




//int arr[5];		  //arr ��һ��5��Ԫ�ص�����
//int *parr1[10];     //parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int* ,parr1��ָ������
//int (*parr2)[10];   //parr2��һ��ָ�룬��ָ��ָ����һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int��-parr2������ָ��
//int (*parr3[10])[5] //parr3��һ������,������10��Ԫ�أ�ÿ��Ԫ���� һ�� ָ����5��int����Ԫ�ص� ����� ָ��



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
//	const char* p = "abcdef";//�����ַ���,a�ĵ�ַ����p
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
//	char *str3 = "hello world.";//�����ַ����������޸ģ���ʡ�ռ䣬�õ�ͬһ��  "hello world."
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


//ָ������

//int main()
//{
//	//int arr[10] = { 0 };
//	//char ch[5] = { 0 };
//	//int* parr[4]; //�������ָ�������
//	//char* pch[5]; //����ַ�ָ�������
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
//����ָ��  һ�����ڶ�ά����

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
//	//int* p = NULL��//����ָ��  -  ָ�����ε�ָ��
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//arr - ��Ԫ�ص�ַ
//	//&arr[0] ��Ԫ�صĵ�ַ
//	//&arr - ����ĵ�ַ
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
//	/*struct Grade s = { "����", 21, 95.4 };*/
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