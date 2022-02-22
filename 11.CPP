// for couting the characters second version.

#include<stdio.h>
void main()
{
	double nc;

	for(nc = 0; getchar() !=EOF; ++nc)
		;
	printf("%.0f\n", nc);
}