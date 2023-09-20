#pragma warning(disable:6031)//禁用 6031 的安全警告



#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>



//  内存函数  

// memset  -  内存设置

//int main()
//{
//	char arr[10] = "";
//	memset(arr, '#', 10);  //单位是字节 
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}


// memcmp

//int main()
//{
//	int arr1[] = { 1, 2, 5, 4, 5 };
//	int arr2[] = { 1, 2, 3, 4, 3 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);
//	return 0;
//}



//    memcpy 内存拷贝       memove                memcmp           memset
//    不重叠的内存         重叠的内存拷贝
//struct S
//{
//	char name[20];
//	int age;
//};
//
//
//void* my_memcpy(void* dest, const void* src, int num) //  不能处理重叠拷贝
//{
//	assert(dest && src);
//	void* start = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return start;
//}

//void* my_memmove(void* dest, const void* src, int num)
//{
//	
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		// 前到后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		// 后到前
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//my_memcpy(arr + 2, arr, 20);  //  目的地和源头 不能有关联
//	
//	// memmove  处理重叠的情况
//	//memmove(arr + 2, arr, 20);
//	my_memmove(arr + 2, arr, 20);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1, 2, 3 ,4, 5 };
//	int arr2[5] = { 0 };
//	//memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	struct S arr3[] = { {"张三", 20}, {"李四", 30} };
//	struct S arr4[3] = { 0 };
//	//memcpy(arr4, arr3, sizeof(arr3));
//	my_memcpy(arr4, arr3, sizeof(arr3));
//
//	int j = 0;
//	for (j = 0; j < 2; j++)
//	{
//		printf("姓名： %s  年龄： %d\n", arr4[j].name, arr4[j].age);
//	}
//	return 0;
//}




//  字符串函数    操作对象是 字符串  \0


//  字符分类函数

// 函数			如果它的参数符合下列条件就返回 真

//   头文件 <ctype.h>
// 
//iscntrl		任何控制字符
//isspace		空白字符:  空格  '' 换页 '\f' 换行  '\n'  回车   '\r' 制表符  '\t'
//isdigit		十进制数字 0-9
//isxdigit		十六进制数字，包括所有十进制数字， 小写字母 a - f  ,大写字母 A - F
//islower		小写字母
//isupper		大写字母
//isalpha		字母 a - z or A - Z
//isalnum		字母或者数字，  a - z   A - Z   0 - 9
//ispunct		标点符号，任何不属于数字或者字母的图形字符  ( 可打印 )
//isgraph		任何图形字符
//isprint       任何可打印字符， 包括字符和空白字符


//int main()
//{
//	char ch = 'w';
//	char j = 'A';
//	int ret = islower(ch);
//	printf("%d\n", ret);
//	int i = isalnum(j);
//	printf("%d\n", i);
//
//	return 0;
//}

// 字符转换 

//  tolower  转小写
//  toupper  转大写

//int main()
//{
//	char arr[] = "I Am A Chinese !";
//	int i = 0;
//	while (arr[i])
//	{
//		int ret = 0;
//		if (ret = isupper)
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}




// 错误报告函数  
// strerror


//int main()
//{
//	//  错误码 错误信息
//	//  0   No error
//	//  1   Operation not permitted
//	//  2   No such file or directory
//	//  3   No such process
//	//  4	Interrupted function call ........
//	//  errno  是一个全局的错误码的变量
//	//  当C语言的库函数在执行过程中， 发生了错误， 就会把对应的错误码， 赋值到 errno 中
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//  打开文件
//	FILE* pf = fopen("text.txt", "r"); // 读文件
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//		printf("open file success\n");
//	//   No such file or directory
//	//   创建一个这样的文件  --  open file success
//	return 0;
//}



// strtok   char* strtok(char* str, const cahr* sep)
//											sep参数是个字符串，定义了用作分割符的字符集合

	//192.168.31.121  
	//192 168 31 121  -strtok
	//2239359619@qq.com
	//2239359619 qq com

//int main()
//{
//	char arr1[] = "21@125.354.256.154.";
//	char* p = "@.";
//	char* ret = NULL;
//	for (ret = strtok(arr1, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s ", ret);
//	}
//
//	//切割
//	/*char* ret = strtok(arr1, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);*/
//	return 0;
//}
































