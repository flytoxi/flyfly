
#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>>


struct Grade
{
	char name[10];
	int age;
	double score;
};

int main()
{
	/*struct Grade s = { "уехЩ", 21, 95.4 };*/
	struct Grade tmp = { 0 };
	FILE* pf = fopen("fly.txt", "rb");
	if (pf == NULL)
	{
		return;
	}
	/*fwrite(&s, sizeof(struct Grade), 1, pf);*/
	fread(&tmp, sizeof(struct Grade), 1, pf);
	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
	fclose(pf);
	pf = NULL;
}