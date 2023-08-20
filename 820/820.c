#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include"Add.h"





//void print01(int n)
//{
//	if (n > 9)
//	{
//		print01(n / 10);
//	}
//	printf("%d ", n % 10);
//}


//int fib(int m)
//{
//	if (m >= 3)
//	{
//		return fib(m - 1) + fib(m - 2);
//	}
//	else {
//		return 1;
//	}
//}


//int Fibno2(int n)
//{
//	int num1 = 1;
//	int num2 = 1;
//	int tmp = 0;
//	int i = 0;
//	if (n < 3)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i = 0; i > n - 3; i++)
//		{
//			tmp = num1 + num2;
//			num1 = num2;
//			num2 = tmp;
//		}
//		return tmp;
//	}
//}


//int fib(int m)
//{
//	int i;
//	int bank[101] = { 0,1,1 };
//	for (i = 2; i <= m; i++)   
//	{
//		bank[i] = bank[i - 1] + bank[i - 2];   
//	}
//	return bank[m];
//}

//Hanoi problem
//void move(char x, char y)
//{
//	printf("%c-> %c\n",x,y);
//}
//void hanoi(int n,char a, char b, char c)
//{
//	if (n == 1)
//	{
//		move(a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);
//		move(a, c);
//		hanoi(n - 1, b, a, c);
//	}
//}

//int jmp_step(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//
//	}
//	else if (n == 2)
//	{
//		return 2;
//
//	}
//	else
//	{
//		return jmp_step(n - 1) + jmp_step(n - 2);
//	}
//	
//}

int main()
{




	//int n = 0;
	//scanf("%d", &n);
	//int num = jmp_step(n);
	//printf("Solution(s)= %d", num);



	//int n = 0;
	//scanf("%d", &n);
	//hanoi(n, 'a', 'b', 'c');




	//int n;
	//scanf("%d", &n);
	//printf("%d", fib(n));



	//unsigned int num = 0;
	//scanf("%d", &num);
	//print01(num);



	//int a = 10;
	//int b = 20;
	//int sum=Add(a, b);
	//printf("sum= %d", sum);
	return 0;

}