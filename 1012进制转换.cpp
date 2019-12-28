//1012：进制转换
#include<stdio.h>
#include<math.h>
int main(void){
    int n,i,j,k,m,count;
    int a[10000],b[10000];
	scanf("%d",&n);
	k=0;
	if(n%2==0&&n>=6){
	for(i=3;i<=n;i++){
		count=0;
		for(j=2;j<=i-1;j++){
			if(i%j==0){
				count=1;
				break;
			}	
		}
		if(count==0){
		
		a[k++]=i;}
	}
	for(m=0;m<=k-1;m++){
		if(a[m]>(n/2)){
		m--;
		break;}
	}
	for(i=0;i<=m;i++){
		b[i]=n-a[i];
		for(j=0;j<=k-1;j++){
			if(b[i]==a[j]){
			printf("%d %d\n",a[i],a[j]);
			
		    break;
			}
		}
	}
}
	else{
	printf("ERROR");}
	return 0;
} 
