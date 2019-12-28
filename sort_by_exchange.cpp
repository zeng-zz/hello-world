#include <stdio.h>
int main()
{
	int x[3],i,j;
	scanf("%d%d%d",&x[0],&x[1],&x[2]);
	for (i=0;i<2;i++){
		
		for (j=0;j<2-i;j++){
			
			if (x[j]>x[j+1]){
				int temp1=x[j];
				x[j]=x[j+1];
				x[j+1]=temp1;
				
			}
			
		}
		
	}
	printf("\n%d %d %d ",x[0],x[1],x[2]);
	return 0;
	
}
  
