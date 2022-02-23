// for performing the function concept through c.

#include<stdio.h>
#include<conio.h>

int power(int m, int n);

int main()
{ clrscr();
	int i;

	for(i = 0; i < 10; ++i)
	{
		printf("%d %d %d \n", i, power(2, i), power(-3, i));
	}
  getch(); return 0;
}

int power(int base, int n)
{
	int i, p;

	p = 1;
1
	for(i = 1; i <= n; ++i);
	{
		p = p * base;
	}
	return p;
}

