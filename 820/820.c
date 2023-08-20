#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include"Add.h"





void print01(int n)
{
	if (n > 9)
	{
		print01(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	print01(num);



	//int a = 10;
	//int b = 20;
	//int sum=Add(a, b);
	//printf("sum= %d", sum);
	return 0;

}