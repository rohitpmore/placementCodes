#include <cstdio>
int main()
{
	int n,m;
	scanf( "%d%d", &n,&m );
	int d=0;
	while( n>0 )
	{
		d++;
		if( d && d%m==0 )
			n++;
		n--;
	}	
	printf( "%d\n", d );
	return 0;
}
