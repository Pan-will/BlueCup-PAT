/*179 224 716 358 358 40096*/
#include<stdio.h>
#include<string.h>
int jinwei(int i,int *f){
	while(i>0){
		if(f[i%10]==2){
			return 0;
		}
		f[i%10]++;
		i/=10;
	}
	return 1;
}
bool check(int i,int j,int a,int b,int c,int d){
	int x[20]={i/100,(i/10)%10,i%10,j/100,(j/10)%10,j%10,a/100,(a/10)%10,a%10,b/100,(b/10)%10,b%10,c/100,(c/10)%10,c%10,d/10000,(d/1000)%10,(d/100)%10,(d/10)%10,d%10};
	int y[20]={0};
	for(int h=0;h<20;h++){
		y[x[h]]++;
	}
	for(int h=0;h<20;h++){
		if(y[h]!=2){
			return false;
		}else{
			return true;
		}
	}
}
int main(){
	int i,j;
	for(i=100;i<=999;i++){
		for(j=100;j<=999;j++){
			int f[10]={0};//数组初始化 
			int a = i*(j%10);//乘个位得 
			int b = i*((j/10)%10);//乘十位得
			int c = i*(j/100);//乘百位得
			
			if(a>=1000||b>=1000||c>=1000||i*j>=100000||a<100||b<100)
				continue;
			
			if(!check(i,j,a,b,c,i*j))
				continue;

			if(i<j && jinwei(i,f)&&jinwei(j,f)&&jinwei(i*j,f)&&jinwei(a,f)&&jinwei(b,f))
				printf("%d %d %d %d %d %d\n",i,j,a,b,c,i*j);
		}
	}
	return 0;
}
