#include<stdio.h>
#define N 10 
int main(void)
{
	int i,j,k,max=0,temp1,a[N];
	for (i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<N-1;i++){
		for (j=0;j<N-1-i;j++){
			if (a[j]<a[j+1]){
				temp1=a[j];
				a[j]=a[j+1];
				a[j+1]=temp1;
			}
		}
	}
	for (k=0;k<N;k++){
	    printf("%d\t",a[k]);
	}
	for (k=0;k<N;k++){
		max=max*10+a[k];
	}
	printf("\n%d",max);
	return 0;
 } 
