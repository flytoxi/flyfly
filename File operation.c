#pragma warning(disable:6031)//禁用 6031 的安全警告



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <errno.h>

//  文件操作   File operation


//  文件类型  1.文本文件 2.二进制文件

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("fly.txt", "wb");
//	fwrite(&a, 4, 1, pf);// 二进制的形式写到文本中 00 00 27 10 (16进制） -- 10000
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//  文件缓冲区
//  从内存向磁盘输出数据会先送到内存中的缓冲区，装满缓冲区后才一起送到磁盘上，  编译器不同 缓冲区大小不同


//  文件指针

//int main()
//{
//	//打开文件test.txt    // 相对路径 .  上一级路径 ..   绝对路径  fopen("D:\\VS\\Solution1\\1\\test.txt", "r");
//	FILE* pfWrite = fopen("test.txt", "w");  //  w 写文件 如果没有会创建一个文件  如果有会覆盖原来的文件    r  读文件  不存在会打开失败
//	if (pfWrite == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	// 写文件
//	fputc('f', pfWrite);  // fputc 输出 所有输出流
//	fputc('l', pfWrite);
//	fputc('y', pfWrite);
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}

// 从键盘输入 
// 输入到屏幕
// 键盘&屏幕都是外部设备

// 键盘--标准输入设备 - stdin
// 屏幕--标准输出设备 - stdout
// 是一个程序默认打开的两个设备

//int main()
//{
//	
//	FILE* pfRead = fopen("test.txt", "r");  //fly
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	// 读文件
//	printf("%c", fgetc(pfRead));// fgetc 输入   所有输入流  
//	printf("%c", fgetc(pfRead));
//	printf("%c\n", fgetc(pfRead));
//
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//int main()
//{
//	int ch = fgetc(stdin);// 从键盘上输入
//	fputc(ch, stdout);// 从屏幕上输出
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));// 或者 perror("open file test.txt"); 
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	printf("%s", buf);//buf 里面有一个换行
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// 从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);// 从标准输入流读取
//	//fputs(buf, stdout);// 输出到标准输出流
//	gets(buf);
//	puts(buf);
//	return 0;
//}



// 格式化输入输出函数  fscanf fprintf  所有输入输出流
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	//struct S s = { 100, 3.14f, "fly" };
//	struct S s = { 0 };
//
//	FILE* pf = fopen("test.txt", "r"); // "w"
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	// 格式化的形式写文件
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	//fprintf(pf, "%s %f %s", s.n, s.score, s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// sscanf   从字符串中读取格式化的数据 
// sprintf  把格式化数据输出成（储存到）字符串


//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100, 3.14f, "flyfly" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//把格式化的数据转换成字符串储存到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//	//从buf中读取格式化的数据到tmp
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}


// 文件的随机读取

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");// flyfly hello
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针  fseek(FILE* stream, long offset, int origin);
//	                        //   pf           偏移量  文件指针的当前位置(当前SEEK_CUR 末尾SEEK_END 起始SEEK_SET)
//	fseek(pf, -7, SEEK_END);
//	//2.读取文件
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// rewind  让文件指针的位置回到文件的起始位置 rewind(pf)

// 文件结束判定
//  feof

//int main()
//{
//
//	//feof(); // 不是用于判断文件是否结束  是判断读取失败结束，还是遇到文件尾结束
//	// EOF - end of file - 文件结束标志  -1
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//int ch = fgetc(pf);
//	//printf("%d\n", ch);
//	//读文件
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		putchar(ch);
//	}
//	if (ferror(pf))
//	{
//		printf("error\n");
//	}
//	else if (feof(pf))
//	{
//		printf("end of file\n");
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

