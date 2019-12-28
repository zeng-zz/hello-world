//一个旅行社有 72 人，其中会英语的有 48 人，会俄语的有 36 人，两样都不会的有 8 人，两样都会的有
//_______个。
//编程：输入旅行社有72人
//     输入会英语48人
//     输入会俄语36人
//     输入两样都不会有8人
//     输出两样都会的有   人 
//     输出：输入数据错误，无法计算
#include <stdio.h>
int main  (void){
	int a,b,c,d,e;
	printf("travel agency people number");
	scanf("%d",&a);
	printf("rissian speaker");
	scanf("%d",&b);
	printf("englishi speaker");
	scanf("%d",&c);
	printf("neith");
	scanf("%d",&d);
	e=b+c+d-a;
	printf("both%d",e);
}
