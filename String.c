#pragma warning(disable:6031)//���� 6031 �İ�ȫ����



#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>




//  �ַ���

// strlen

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(*str != NULL);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//size_t
//
//int main()
//{
//	//int len = strlen("abcdefg");
//	//char arr[] = { 'a', 'b', 'c', 'd ', 'e' };
//	//int len = strlen(arr);
//	//int len = my_strlen("abcdefg");
//	//printf("%d\n", len);
//	if (strlen("abc") - strlen("abcdef") > 0)  // strlen  ���������� size_t == unsigned int  �޷�������
//	{
//		printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//
//	return 0;
//}

// strcpy


//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	// ����srcָ����ַ�����destָ��Ŀռ䣬����  '\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	// ����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	//strcpy(arr1, arr2);   //  hello \0
//	printf("%s\n", arr1);
//	return 0;
//}

// strcat

//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//1.�ҵ�Ŀ���ַ����� '\0 '
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2. ׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello";  //  ׷�ӵĿռ�����㹻��    Ŀ�ĵ���\0   \0Ҳ����ȥ
//	char arr2[] = "world";
//	//strcat(arr1, arr2);
//	my_strcat(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}







