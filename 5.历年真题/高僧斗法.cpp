#include<stdio.h>
#include<string.h>
const int N = 100 + 10;
int a[N],b[N];
int main(){
    int n = 0,i,j,k,sum = 0;
    while(scanf("%d",&a[n])!=EOF)
        n++;
    for(i=1; i<n; ++i)
        b[i-1] = a[i] - a[i-1] - 1;
    for(i=0; i<n-1; i+=2)
        sum ^= b[i];
    if(sum==0)
        printf("-1\n");
    else{
        //枚举第i个人移动j步，使得剩下的局面异或等于0，
        for(i=0; i<n-1; ++i)
            for(j=1; a[i]+j<a[i+1]; ++j){
                b[i] -= j;
                if(i!=0)
                    b[i-1] += j;
                sum = 0;
                for(k=0; k<n-1; k+=2)
                    sum ^= b[k];
                if(sum==0){
                    printf("%d %d\n",a[i],a[i]+j);
                    break;
                }
                b[i] += j;
                if(i!=0)
                    b[i-1] -= j;
            }
    }
    return 0;
}
