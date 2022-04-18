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
		printf("小端存储\n");//括号乱码部分的内容是"小端存储"
	}
	else if (q == 0)
	{
		printf("大端存储\n");//括号乱码部分的内容是"大端存储"
	}
	return 0;
}