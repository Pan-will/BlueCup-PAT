/*8*/
#include<stdio.h>
int a[10];
bool b[10];
int sum=0;
void f(int i){
	if(i>=9){
		int sum1=0,sum2=0,sum3=0,lie1=0,lie2=0,lie3=0,xie1=0,xie2=0;
		sum1=a[1]+a[4]+a[7];
	    sum2=a[2]+a[5]+a[8];
	    sum3=a[3]+a[6]+a[9];
		lie1=a[1]+a[2]+a[3];
	    lie2=a[4]+a[5]+a[6];
	    lie3=a[7]+a[8]+a[9];
	    xie1=a[1]+a[5]+a[9];
	    xie2=a[3]+a[5]+a[7];
	    if(sum1==sum2 && sum2==sum3 && sum3==lie1 && lie1==lie2 && lie2==lie3 && lie3==xie1 && xie1==xie2){
			sum++;
			return;
		}
	}
	for(int j=1;j<=9;j++){
		if(!b[j]){
			b[j] = true;
			a[i] = j;
			f(i+1);
			b[j] = false;
		}
	}
}
int main(){
	f(1);//表示从第一个数开始搜索 
	printf("%d",sum);
	return 0;
}
