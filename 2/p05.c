#include <stdio.h>
#include <math.h>

int main()
{
	char k;
	int tot = 0;	

	while ( scanf("%c", &k ) == 1 )
	{
		if ( k == 'c' || k == 'C' )
		  {
			tot++;
		  }
	}
	
	printf("The number of cytosines in the sequence is %d\n", tot);
}


