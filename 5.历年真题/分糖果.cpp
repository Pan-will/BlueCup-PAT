#include<stdio.h> 
int main(){
	int i,N,a[100];
	int answer=0;//计数器
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	while(1){
		//若小朋友的糖果数相等，结束 
	    for(i=1;i<N;i++)  
	    {  
	        if(a[i]!=a[0])  
	            break;
	    }
	    if(i==N)//检查到最后一位，结束 
	    	break;
	    /*分给左手边一半*/
	    int num=a[0];
	    for(i=0;i<N-1;i++){
	    	a[i] = (a[i]+a[i+1])/2;
		}
		a[i]=(a[i]+num)/2;
		/*奇数补充为偶数*/
		for(i=0;i<N;i++){
			if(a[i]%2!=0){
				a[i]++;
				answer++;//计数器自增 
			}
		}
	}
	printf("%d",answer);
}
