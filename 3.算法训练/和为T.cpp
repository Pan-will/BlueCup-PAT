#include<stdio.h>
int a[22],b[22];//a记录数集元素，b记录不同的方案 
int n,T;//n为元素个数，T为要达到的和 
int ans=0;//记录方案数量 
void showb(int bindex){//分行输入不同的方案 
	for(int i=bindex;i>=0;i--)
		printf("%d ",b[i]);
	printf("\n");
}
void heweit(int end,int bindex,int sum){
	if(end<0) return;//end指最后一个元素下标 
	heweit(end-1,bindex,sum);
	b[bindex] = a[end];//将每种方案放到b中,方便输出 
	sum += a[end];
	if(sum==T){
		ans++;
		showb(bindex);
	}
	heweit(end-1,bindex+1,sum);//递归调用
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){//录入数集元素 
		scanf("%d",&a[i]);
	}
	scanf("%d",&T);//要达到的和T 
	heweit(n-1,0,0);//n-1:最后一个元素，0:第一个元素 
	printf("%d",ans);//输出方案数 
	return 0;
}
