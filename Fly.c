
#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


//        ָ     ��
//  ָ����Ǹ�������������ŵ�ַ�� ��ַΨһ
//ָ��Ĵ�С�ǹ̶���4/8���ֽڡ�(32λ��64λ)

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


int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };

	int* parr[] = { arr1, arr2, arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(parr[i]+j));
		}
		printf("\n");
	}

	return 0;
}




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