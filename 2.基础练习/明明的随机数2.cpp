#include<stdio.h>
int main(){
    int N,a[1001]={0},t;
    int count=0;//¼ÆÊıÆ÷ 
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&t);
        if(a[t]==0){
            a[t]=t;
            count++;
        }
    }
    printf("%d\n",count);
    for(int i=0;i<1001;i++){
        if(a[i]!=0)
			printf("%d ",a[i]);
    }
    return 0;
}
