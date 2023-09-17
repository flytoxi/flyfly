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


//strncat

//char* my_strncat(char* str1, const char* str2, int count)
//{
//	assert(str1 && str2);
//	char* start = str1;
//	while (*str1++)
//		;
//	str1--;
//	while (count--)
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//
//	return(start);
//}
//
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxx";
//	char arr2[] = "world";
//	//strncat(arr1, arr2, 5);
//	my_strncat(arr1, arr2, 7);
//	printf("%s\n", arr1);
//	return 0;
//}


//strncpy

//void my_strncpy(char* str1, const char* str2, int x)
//{
//	assert(str1 && str2);
//	while (x && (*str1 = *str2))
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//		x--;
//	}
//
//}
//
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "oooooo";
//	my_strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}


// strcmp  比较字符串大小  int strcmp(const cahr* e1, const char* e2)

//int my_strcmp(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	// 比较
//	while (*p1 == *p2)
//	{
//		if (*p1 == '0')
//		{
//			return 0;
//		}
//		p1++;
//		p2++;
//	}
//	if (*p1 > *p2)
//		return 1;
//	else
//		return -1;
//
//}
//int main()
//{
//	char* p1 = "abcdef";   //常量字符串 表达式 ， 首字符的地址
//	char* p2 = "sqwer";
//	/*int ret = strcmp(p1, p2);*/  // 字符串一个一个比 a b c d .... w x y z   大于返回 大于 0 的数 ， 等于返回 0 ， 小于返回 小于 0 的数
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d", ret);
//	return 0;
//}



//int main()
//{
//
//	// 长度不受限制的字符串函数类型  不安全  strcpy strcmp strcat
//	char arr1[5] = "abc";
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);  //×
//	printf("%s\0", arr1); 
//	return 0;
//}

//int main()
//{
//	// 长度受限制的字符串函数类型  相对安全  strncpy strncmp strncat
//	char arr1[] = "abcdefgh";
//	char arr2[] = "ooo";
//	char arr3[] = "pppppppppp";
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	strncpy(arr1, arr3, 8);
//	printf("%s\n", arr1);
//
//	return 0;
//}


































