//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//素数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位素数输出。如果不存在5位素数，则输出ERROR。

 
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
