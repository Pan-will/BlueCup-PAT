#include<stdio.h>  
#include<math.h>  
//int is_prime(int num){  
//    int k, i;  
//    k = sqrt(num);
//    for (i = 2; i <= k; i++){  
//        if (num%i == 0)
//            return 0;
//    }  
//    return 1;
//}
int is_prime(int a) {  
    if(a % 2 == 0 && a != 2) {  
        return 0;  
    }  
    for(int i = 3; i * i <= a; i++) {  
        if(a % i == 0) {  
            return 0;  
        }  
    }  
    return a != 1;  
}

int main(){  
    int a = 0,num = 0,item = 0,n; 
    int sushu[99999] = {0};
    scanf("%d",&n);
    for(a=1;a<=99999;a++){  
        if (is_prime(a) == 1){
            sushu[num++] = a;
        }  
    }
    for(int i=1;sushu[i]<=n;i++){
    	if(sushu[i]-sushu[i-1] == 2){
    		item++;
		}
	}
	printf("%d",item);
    return 0; 
}
