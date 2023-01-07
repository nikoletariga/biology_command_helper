#include <stdio.h>
#include <math.h>

int main()
{
	char	k;
	float	tot=0;
	float	seq=0;

	while ( scanf("%c", &k) == 1 )
	{
		seq++;
		if ( k == 'c' || k == 'C' || k == 'g' || k == 'G' )
		  {
			tot++;
		  }

	}

	
	printf("The GC percentage is  %f%%\n", 100*(tot/seq) );
}


