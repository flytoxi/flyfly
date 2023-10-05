#pragma warning(disable:6031)//禁用 6031 的安全警告



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Dynamic memory   动态内存

//  柔性数组(flexible array)  有利于访问速度

struct S
{
	int n;
	int arr[];// 未知大小  柔性数组成员， 数组的大小是可以调整的, 前面至少有一个成员
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

