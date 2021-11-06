#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#define N 9999999
int n;
double min=9999.0;
bool use[N];
int x[N],y[N],z[N];
double juli(double x1,double x2,double y1,double y2){
	double s=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	return s;
}
void dfs(int begin,int n){
	if(begin==n-1){
		return ;
	}
	if(begin==4){
		double s0=juli(x[z[0]],x[z[1]],y[z[0]],y[z[1]]);
		double s1=juli(x[z[0]],x[z[2]],y[z[0]],y[z[2]]);
		double s2=juli(x[z[0]],x[z[3]],y[z[0]],y[z[3]]);
		double s3=juli(x[z[1]],x[z[2]],y[z[1]],y[z[2]]);
		double s4=juli(x[z[1]],x[z[3]],y[z[1]],y[z[3]]);
		double s5=juli(x[z[2]],x[z[3]],y[z[2]],y[z[3]]);
		if(min>((s0+s1+s2+s3+s4+s5)/6)){
			min=(s0+s1+s2+s3+s4+s5)/6;
		}
	}
	for(int i=0;i<n;i++){
		if(!use[i]){
			use[i] = true;
			z[begin] = i;
			dfs(begin+1,n);
			use[i] = false;
		}
	}
}
int main(){
	scanf("%d",&n);
	getchar();//处理回车 
	for(int i=0;i<n;i++){
		scanf("%d,%d",&x[i],&y[i]);
	}
	dfs(0,n);
	printf("%.2lf",min);
	return 0;
}
