#pragma warning(disable:6031)//���� 6031 �İ�ȫ����



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Dynamic memory   ��̬�ڴ�

//  ��������(flexible array)  �����ڷ����ٶ�

struct S
{
	int n;
	int arr[];// δ֪��С  ���������Ա�� ����Ĵ�С�ǿ��Ե�����, ǰ��������һ����Ա
};

int main()
{
	//struct S s;
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	if (ps != NULL)
	{
		ps->n = 100;
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			ps->arr[i] = i;
		}
		struct S* ptr = realloc(ps, 44);
		if (ptr != NULL)
		{
			ps = ptr;
			for (i = 5; i < 10; i++)
			{
				ps->arr[i] = i;
			}
		}

		for (i = 0; i < 10; i++)
		{
			printf("%d ", ps->arr[i]);
		}
		free(ps);
		ps = NULL;
	}
	return 0;
}

