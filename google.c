//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值
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
