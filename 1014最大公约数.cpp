//1014：最大公约数
#include<stdio.h>
#include<math.h>


int main(void)
{
	int m,i,a[20];
	int max=0;
	int c=0,b=0; 
	
	scanf("%d",&m);
	for (i=0;i<=m-1;i++){
		scanf("%d",&a[i]);
	}
	
	for (i=0;i<=m-1;i++){
		if (fabs(a[i])>max)
		    max=fabs(a[i]);
	} 
	
	for (i=0;i<=m-1;i++){
		if (fabs(a[i])==max){
			if (a[i]>0)
			    b=a[i];
			if (a[i]<0)
			    c=a[i];
		}
	}
	
	if (max==0){
		printf("%d",max);
		return 0;
	}
	if (c!=0)
	    printf("%d",c);
	if (b!=0)
	    printf("%d",b);
	return 0;
}

