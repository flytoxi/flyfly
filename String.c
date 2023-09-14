#pragma warning(disable:6031)//禁用 6031 的安全警告



#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>




//  字符串

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
//	if (strlen("abc") - strlen("abcdef") > 0)  // strlen  返回类型是 size_t == unsigned int  无符号整形
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
//	// 拷贝src指向的字符串到dest指向的空间，包含  '\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	// 返回目的空间的起始地址
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
//	//1.找到目的字符串的 '\0 '
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2. 追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello";  //  追加的空间必须足够大    目的地是\0   \0也传过去
//	char arr2[] = "world";
//	//strcat(arr1, arr2);
//	my_strcat(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}







