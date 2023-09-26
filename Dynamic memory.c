#pragma warning(disable:6031)//禁用 6031 的安全警告



#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <errno.h>


// Dynamic memory   动态内存

//内存使用方式
//1.创建一个变量 
//  int a = 10;  //局部变量 -- 栈区   全局变量 -- 静态区
//2.创建一个数组
// int arr[10];  //局部 全局 -- 

// 动态内存分配     堆区
// 想用多少空间就开辟多少空间

// malloc  void* malloc(size_t size);

//int main()
//{
//	// 向内存申请10个整形的空间
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p+i));
//		}
//	}
//	// 当动态内存申请的空间不再使用的时候
//	// 就应该还给操作系统
//	free(p);// 释放空间 一定是动态开辟的空间
//	p = NULL;// 指向空指针
//	return 0;
//}

// calloc    动态开辟空间   void* calloc(size_t num, size_t size);

//int main()
//{
//	//malloc(10*sizeof(int));   堆区  
//	int* p = (int*)calloc(10, sizeof(int));// 初始化
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + 1));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


// realloc   调整动态开辟空间的大小  void* realloc(void* ptr, size_t size);
// ptr   是要调整的内存地址
// size  调整之后的大小   int* p = (int*)realloc(NULL，40);  -----   malloc(40)


//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for ( i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//1. 如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2. 如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//	//   开辟一块满足需求的空间， 并且把原来内存中的数据拷贝过来， 释放旧的内存空间
//	//   最后返回新开辟的内存空间地址
//	//3. 得用一个新的变量来接受reallc 函数的返回值
//	int* ptr = realloc(p, 4000/*INT_MAX*/);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//   常见的动态内存错误

//int main()
//{
	////1. 对NULL进行解引用操作
	//int* p = (int*)malloc(40);
	////  万一malloc 失败了， p 就被赋值空指针
	//// *p = 0; //err
	//int i = 0;
	//for ( i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;
	
		//2. 对动态开辟的内存的越界访问
		//int* p = (int*)malloc(5 * sizeof(int));
		//if (p == NULL)
		//{
		//	return 0;
		//}
		//else
		//{
		//	int i = 0;
		//	for ( i = 0; i < 10; i++)// 大于开辟的空间
		//	{
		//		*(p + i) = i;
		//	}
		//}
		//free(p);
		//p = NULL;


		//int a = 10;
		//int* p = &a;
		//*p = 20;
		//// 3. 对非动态开辟内存的 free
		//free(p);
		//p = NULL;
	
			 // 4. 使用free释放动态开辟内存的一部分
			 //int* p = (int*)malloc(40);
			 //if(p == NULL)
			 //{
				//	return 0;
			 //}
			 //int i = 0;
			 //for ( i = 0; i < 10; i++)
			 //{
				// *p++ = i;// 位置变化
			 //}
			 //free(p);
			 //p = NULL;
			 
					 // 5.对同一块动态内存的多次释放
				    //int* p = (int*)malloc(40);
					//if (p == NULL)
					//{
					//	return 0;
					//}
					//// 使用
					//// 释放
					//free(p);  为了避免多次释放  后面加个 p = NULL;  后面再释放， free释放空指针 啥也不干
					////.......
					//free(p);
						//6. 动态开辟内存忘记释放 （内存泄漏）
//	return 0;
//}