#include "main.h"

void positive_or_negative(int n )
{
	if (n < 0)
	{
		/* if n<0 */
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		/* if n>0 */
		printf("%d is positive\n", n);
	}
	else
	{
		/* if none of the conditions is true i.e n=0 */
		printf("%d is zero\n", n);
	}
}
