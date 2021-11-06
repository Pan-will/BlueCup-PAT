#include<stdio.h>
#include<string.h>
#include<math.h>
#define max(a,b) (a>b)?a:b
int prime[110], vis[350], dp[100010];
main(){
    int n, cur, i, j, k;  
    scanf("%d", &n);  
    cur=0;  
    memset(vis, 0, sizeof(vis));  
    for(i=2; i<350; i++){  
        if(!vis[i]){  
            prime[cur++]=i;
            for(j=i+i; j<350; j=j+i){  
                vis[j]=1;  
            }     
        }  
    }  
    memset(dp, 0, sizeof(dp));  
    for(i=1; i<=n; i++){  
        for(j=0; j<=cur-1; j++){  
            if(prime[j]<=sqrt(i)){
                if(i%prime[j]==0)  
                dp[i]=max(dp[i],dp[i-2*prime[j]]+prime[j]);//ÄÃ¶àµÄ 
            }  
            else{  
                break;  
            }  
        }  
    }  
    printf("%d",dp[n]);  
}
