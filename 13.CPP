// for couting new character, word, line in a string.

#include<stdio.h>

#define IN 1
#define OUT 0

void main()
{
	int c, nc, nw, nl, state;

	nc = nw = nl = 0;

	while((c = getchar()) != EOF)
	{
		++nc;

		if(c == '\n')
		{
			++nl;
		}

		if(c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;
		}
		else if(state == OUT)
		{
			state = IN;
			++nw;
		}
	}

	printf("%d %d %d", nc, nw, nl);
}