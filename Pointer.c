//指针地址越界

#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 12; i++)//越界--野指针
	{
		*(p++);//越界
      *p++ = 1;
	}
	return 0;
}