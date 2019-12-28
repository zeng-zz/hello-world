//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数。
//求 100~10000 内的所有超级素数，及它们的平均数。
#include <stdio.h>
int f(int j,int a[]){
	int b[100];
	int i=0;
	int k;
	int count=0;
	do{
		b[i++]=a[j]%10;
		a[j]=a[j]/10;
	}while(a[j]>0);
	for(k=0;k<=i-1;k++){
		if(b[k]==1)
		count++;
	}
	return count;
}
int main() {
	int i,n;
	int a[10000];
	int sum;
	for(n=2;;n++){
	sum=0;
    for(i=0;i<=n-1;i++){
    	a[i]=i+1;
    	sum=sum+f(i,a);
	}
	if(sum==n);
	break;
}
	printf("%d",sum);
	
	
    return 0;
}
