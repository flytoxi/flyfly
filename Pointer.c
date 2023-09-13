#pragma warning(disable:6031)//禁用 6031 的安全警告



#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


//       指     针



struct People
{
	char name[20];
	int age;

};

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++; buf2++;
	}
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int cmp_stu_age(const void* e1, const void* e2)
{
	return ((struct People*)e1)->age - ((struct People*)e2)->age;
}

int cmp_stu_name(const void* e1, const void* e2)
{
	return strcmp(((struct People*)e1)->name, ((struct People*)e2)->name);
}

void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base+j*width, (char*)base+(j+1)*width)>0)
			{
				//交换
				Swap((char*)base+j*width, (char*)base+(j+1)*width, width);
			}
		}
	}
}



void test()
{
	int arr[15] = { 9,8,7,6,5,4,3,2,1,0,4564,845467,234564565,35461,254765462};
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test2()
{
	struct People p[3] = { {"zhangsan", 55}, {"lisi", 25}, {"wangwu", 18} };
	int sz = sizeof(p) / sizeof(p[0]);
	bubble_sort(p, sz, sizeof(p[0]), cmp_stu_name);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("姓名：%-5s\t  年龄：%-4d\t \n", p[i].name, p[i].age);
	}
	printf("\n");
}

void test3()
{
	struct People p[3] = { {"zhangsan", 55}, {"lisi", 25}, {"wangwu", 18} };
	int sz = sizeof(p) / sizeof(p[0]);
	bubble_sort(p, sz, sizeof(p[0]), cmp_stu_age);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("姓名：%-5s\t  年龄：%-4d\t \n", p[i].name, p[i].age);
	}
}
int main()
{
	test();
	test2();
	test3();
	return 0;
}













