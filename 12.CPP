// for couting the new lines in input.

#include<stdio.h>
void main()
{
	int nl, c;

	nl = 0;

	while((c = getchar()) != EOF)
	{
		if(c == '\n')
		{
			++nl;
		}
	}

	printf("%d\n", nl);
}