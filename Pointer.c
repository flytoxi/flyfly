#pragma warning(disable:6031)//禁用 6031 的安全警告



#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


//        指     针

// 回调函数

// 通过函数指针调用的函数

//void print(char* str)
//{
//	printf("hehe: %s", str);
//}
//
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("flyfly");
//}
//int main()
//{
//	
//	test(print);
//	return 0;
//}

//qsort - 可以排序任意类型的数据


//void qsort(void* base, 
//			size_t num, 
//			size_t width,
//			int(* cmp)(const void* e1,const void* e2));


//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//
//
//
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//int cmp_stu_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_stu_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//int main()
//{
//	int arr[10] = { 0, 8, 2, 3, 6, 5, 9, 7, 4, 1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct Stu s[3] = { {"zhangsan", 21}, {"lisi", 32}, {"wangwu", 9} };
//	int ssz = sizeof(s) / sizeof(s[0]);
//	float f[6] = {5.0, 8.0, 4.0, 1.0, 3.0, 9.0};
//	int fsz = sizeof(f) / sizeof(f[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//		printf("\n");
//
//	qsort(f, fsz, sizeof(f[0]), cmp_float);
//
//	int j = 0;
//	for (j = 0; j < fsz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//		printf("\n");
//
//	qsort(s, ssz, sizeof(s[0]), cmp_stu_age);
//
//	int k = 0;
//	for (k = 0; k < ssz; k++)
//	{
//		printf("姓名：%s 年龄: %d \n", s[k].name, s[k].age);
//	}
//	qsort(s, ssz, sizeof(s[0]), cmp_stu_name);
//	
//	int l = 0;
//	for (l = 0; l < ssz; l++)
//	{
//		printf("姓名：%s 年龄: %d \n", s[l].name, s[l].age);
//	}
//	
//
//	
//	
//	return 0;
//}















