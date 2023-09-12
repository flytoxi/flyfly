#pragma warning(disable:6031)//���� 6031 �İ�ȫ����



#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


//       ָ     ��

// qsort - ���������������͵�����


//void qsort(void* base, 
//			size_t num, 
//			size_t width,
//			int(* cmp)(const void* e1,const void* e2));

//��һ������:  �������������Ԫ�ص�ַ
//�ڶ�������:  �����������Ԫ�ظ���
//����������:  �����������ÿ��Ԫ�صĴ�С
//���ĸ�����:  �Ǻ���ָ�룬 �Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
//               ����ָ�������������: ���Ƚϵ�����Ԫ�صĵ�ַ       


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
	//��ӡ
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
	//��ӡ
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
	//��ӡ
	int k = 0;
	for (k = 0; k < ssz; k++)
	{
		printf("������%s ����: %d \n", s[k].name, s[k].age);
	}
}
void test4()
{
	struct Stu s[3] = { {"zhangsan", 21}, {"lisi", 32}, {"wangwu", 9} };
	int ssz = sizeof(s) / sizeof(s[0]);
	qsort(s, ssz, sizeof(s[0]), cmp_stu_name);
	//��ӡ
	int l = 0;
	for (l = 0; l < ssz; l++)
	{
		printf("������%s ����: %d \n", s[l].name, s[l].age);
	}

}
int main()
{
	//  qsort  ����
	// ����
	test1();
	// ������
	test2();
	// �ṹ�� ����
	test3();
	// �ṹ�� ����
	test4();
	return 0;
}















