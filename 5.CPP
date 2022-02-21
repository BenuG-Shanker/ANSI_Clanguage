// for priting the value in floating point arithmetic values.
#include<stdio.h>
void main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	while(fahr <= upper)
	{
		celsius = 5.0 * (fahr-32.0) / 9.0;
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}/* %3.0f means that a floating point number is to be printed at least three
character wide, with no decimal point and no fraction digits.
%6.1f means that a floating point number is to be printed at least six
character wide, with one digit after the decimal point. /*