#include<stdio.h>
int MBO()
{
	int w = 1;
	char* r = &w;
	if (*r == 1)
	{
		return 1;
	}
	else if (*r == 0)
		return 0;
}
int main()
{
	int q = 0;
	q=MBO();
	if (q == 1)
	{
		printf("С�˴洢\n");//�������벿�ֵ�������"С�˴洢"
	}
	else if (q == 0)
	{
		printf("��˴洢\n");//�������벿�ֵ�������"��˴洢"
	}
	return 0;
}