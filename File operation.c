#pragma warning(disable:6031)//���� 6031 �İ�ȫ����



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <errno.h>

//  �ļ�����   File operation


//  �ļ�����  1.�ı��ļ� 2.�������ļ�

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("fly.txt", "wb");
//	fwrite(&a, 4, 1, pf);// �����Ƶ���ʽд���ı��� 00 00 27 10 (16���ƣ� -- 10000
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//  �ļ�������
//  ���ڴ������������ݻ����͵��ڴ��еĻ�������װ�����������һ���͵������ϣ�  ��������ͬ ��������С��ͬ


//  �ļ�ָ��

//int main()
//{
//	//���ļ�test.txt    // ���·�� .  ��һ��·�� ..   ����·��  fopen("D:\\VS\\Solution1\\1\\test.txt", "r");
//	FILE* pfWrite = fopen("test.txt", "w");  //  w д�ļ� ���û�лᴴ��һ���ļ�  ����лḲ��ԭ�����ļ�    r  ���ļ�  �����ڻ��ʧ��
//	if (pfWrite == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	// д�ļ�
//	fputc('f', pfWrite);  // fputc ��� ���������
//	fputc('l', pfWrite);
//	fputc('y', pfWrite);
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}

// �Ӽ������� 
// ���뵽��Ļ
// ����&��Ļ�����ⲿ�豸

// ����--��׼�����豸 - stdin
// ��Ļ--��׼����豸 - stdout
// ��һ������Ĭ�ϴ򿪵������豸

//int main()
//{
//	
//	FILE* pfRead = fopen("test.txt", "r");  //fly
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	// ���ļ�
//	printf("%c", fgetc(pfRead));// fgetc ����   ����������  
//	printf("%c", fgetc(pfRead));
//	printf("%c\n", fgetc(pfRead));
//
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//int main()
//{
//	int ch = fgetc(stdin);// �Ӽ���������
//	fputc(ch, stdout);// ����Ļ�����
//	return 0;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));// ���� perror("open file test.txt"); 
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 1024, pf);
//	printf("%s", buf);//buf ������һ������
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// �Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);// �ӱ�׼��������ȡ
//	//fputs(buf, stdout);// �������׼�����
//	gets(buf);
//	puts(buf);
//	return 0;
//}



// ��ʽ�������������  fscanf fprintf  �������������
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
//	// ��ʽ������ʽд�ļ�
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	//fprintf(pf, "%s %f %s", s.n, s.score, s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// sscanf   ���ַ����ж�ȡ��ʽ�������� 
// sprintf  �Ѹ�ʽ����������ɣ����浽���ַ���


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
//	//�Ѹ�ʽ��������ת�����ַ������浽buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}


// �ļ��������ȡ

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");// flyfly hello
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��  fseek(FILE* stream, long offset, int origin);
//	                        //   pf           ƫ����  �ļ�ָ��ĵ�ǰλ��(��ǰSEEK_CUR ĩβSEEK_END ��ʼSEEK_SET)
//	fseek(pf, -7, SEEK_END);
//	//2.��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

// rewind  ���ļ�ָ���λ�ûص��ļ�����ʼλ�� rewind(pf)

// �ļ������ж�
//  feof

//int main()
//{
//
//	//feof(); // ���������ж��ļ��Ƿ����  ���ж϶�ȡʧ�ܽ��������������ļ�β����
//	// EOF - end of file - �ļ�������־  -1
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//int ch = fgetc(pf);
//	//printf("%d\n", ch);
//	//���ļ�
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

