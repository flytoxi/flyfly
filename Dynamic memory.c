#pragma warning(disable:6031)//���� 6031 �İ�ȫ����



#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <errno.h>


// Dynamic memory   ��̬�ڴ�

//�ڴ�ʹ�÷�ʽ
//1.����һ������ 
//  int a = 10;  //�ֲ����� -- ջ��   ȫ�ֱ��� -- ��̬��
//2.����һ������
// int arr[10];  //�ֲ� ȫ�� -- 

// ��̬�ڴ����     ����
// ���ö��ٿռ�Ϳ��ٶ��ٿռ�

// malloc  void* malloc(size_t size);

//int main()
//{
//	// ���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p+i));
//		}
//	}
//	// ����̬�ڴ�����Ŀռ䲻��ʹ�õ�ʱ��
//	// ��Ӧ�û�������ϵͳ
//	free(p);// �ͷſռ� һ���Ƕ�̬���ٵĿռ�
//	p = NULL;// ָ���ָ��
//	return 0;
//}

// calloc    ��̬���ٿռ�   void* calloc(size_t num, size_t size);

//int main()
//{
//	//malloc(10*sizeof(int));   ����  
//	int* p = (int*)calloc(10, sizeof(int));// ��ʼ��
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


// realloc   ������̬���ٿռ�Ĵ�С  void* realloc(void* ptr, size_t size);
// ptr   ��Ҫ�������ڴ��ַ
// size  ����֮��Ĵ�С   int* p = (int*)realloc(NULL��40);  -----   malloc(40)


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
//	//1. ���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2. ���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//	//   ����һ����������Ŀռ䣬 ���Ұ�ԭ���ڴ��е����ݿ��������� �ͷžɵ��ڴ�ռ�
//	//   ��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3. ����һ���µı���������reallc �����ķ���ֵ
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

//   �����Ķ�̬�ڴ����

//int main()
//{
	////1. ��NULL���н����ò���
	//int* p = (int*)malloc(40);
	////  ��һmalloc ʧ���ˣ� p �ͱ���ֵ��ָ��
	//// *p = 0; //err
	//int i = 0;
	//for ( i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;
	
		//2. �Զ�̬���ٵ��ڴ��Խ�����
		//int* p = (int*)malloc(5 * sizeof(int));
		//if (p == NULL)
		//{
		//	return 0;
		//}
		//else
		//{
		//	int i = 0;
		//	for ( i = 0; i < 10; i++)// ���ڿ��ٵĿռ�
		//	{
		//		*(p + i) = i;
		//	}
		//}
		//free(p);
		//p = NULL;


		//int a = 10;
		//int* p = &a;
		//*p = 20;
		//// 3. �ԷǶ�̬�����ڴ�� free
		//free(p);
		//p = NULL;
	
			 // 4. ʹ��free�ͷŶ�̬�����ڴ��һ����
			 //int* p = (int*)malloc(40);
			 //if(p == NULL)
			 //{
				//	return 0;
			 //}
			 //int i = 0;
			 //for ( i = 0; i < 10; i++)
			 //{
				// *p++ = i;// λ�ñ仯
			 //}
			 //free(p);
			 //p = NULL;
			 
					 // 5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
				    //int* p = (int*)malloc(40);
					//if (p == NULL)
					//{
					//	return 0;
					//}
					//// ʹ��
					//// �ͷ�
					//free(p);  Ϊ�˱������ͷ�  ����Ӹ� p = NULL;  �������ͷţ� free�ͷſ�ָ�� ɶҲ����
					////.......
					//free(p);
						//6. ��̬�����ڴ������ͷ� ���ڴ�й©��
//	return 0;
//}