#pragma warning(disable:6031)//禁用 6031 的安全警告



#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


//       指     针

// qsort - 可以排序任意类型的数据


//void qsort(void* base, 
//			size_t num, 
//			size_t width,
//			int(* cmp)(const void* e1,const void* e2));

//第一个参数:  待排序数组的首元素地址
//第二个参数:  待排序数组的元素个数
//第三个参数:  待排序数组的每个元素的大小
//第四个参数:  是函数指针， 比较两个元素的所用函数的地址-这个函数使用者自己实现
//               函数指针的两个参数是: 带比较的两个元素的地址       


struct Stu
{
	char name[20];
	int age;
};


int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int cmp_float(const void* e1, const void* e2)
{
	return (int)(*(float*)e1 - *(float*)e2);
}
int cmp_stu_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test1()
{
	int arr[10] = { 0, 8, 2, 3, 6, 5, 9, 7, 4, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	//打印
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test2()
{
	float f[6] = { 5.0, 8.0, 4.0, 1.0, 3.0, 9.0 };
	int fsz = sizeof(f) / sizeof(f[0]);
	qsort(f, fsz, sizeof(f[0]), cmp_float);
	//打印
	int j = 0;
	for (j = 0; j < fsz; j++)
	{
		printf("%f ", f[j]);
	}
	printf("\n");
}

void test3()
{
	struct Stu s[3] = { {"zhangsan", 21}, {"lisi", 32}, {"wangwu", 9} };
	int ssz = sizeof(s) / sizeof(s[0]);

	qsort(s, ssz, sizeof(s[0]), cmp_stu_age);
	//打印
	int k = 0;
	for (k = 0; k < ssz; k++)
	{
		printf("姓名：%s 年龄: %d \n", s[k].name, s[k].age);
	}
}
void test4()
{
	struct Stu s[3] = { {"zhangsan", 21}, {"lisi", 32}, {"wangwu", 9} };
	int ssz = sizeof(s) / sizeof(s[0]);
	qsort(s, ssz, sizeof(s[0]), cmp_stu_name);
	//打印
	int l = 0;
	for (l = 0; l < ssz; l++)
	{
		printf("姓名：%s 年龄: %d \n", s[l].name, s[l].age);
	}

}
int main()
{
	//  qsort  排序
	// 整数
	test1();
	// 浮点数
	test2();
	// 结构体 年龄
	test3();
	// 结构体 名字
	test4();
	return 0;
}















