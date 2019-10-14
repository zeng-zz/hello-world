#include <stdio.h>
#include <math.h>
int main() 
{
	int n,i;double k;
	scanf("%d",&n);
	k=sqrt(n);
	for(i=2;i<=k;i++)
	{
		if(n%i==0) break;
	}
	if(i<=k) printf("prime number.");
	else printf("sum number.");
	return 0; 
}
