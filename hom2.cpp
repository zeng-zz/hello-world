#include <stdio.h>
int main()
{
	int m,n,k; 
	scanf("%d",&m);
	scanf("%d",&n);
	int c,a=m,b=n;
	while(m%n!=0)
	{
		c=m%n;
		m=n;
		n=c;
	}
	k=a*b/c;
	printf("least common multiple: %d",k);
	return 0;
 } 
