#include<stdio.h>
int tongji(char* buf){
    int n = 0;
    int tag = 1;
    char *p = buf;
    for(;*p!=0 && *p!=13 && *p!=10;p++){
        if(*p==' '&&tag==0)
			tag=1;
        if(*p!=' '&&tag==1){
            n++;
            tag=0;
        }
    }
    return n;
}

int main(){
    char str[1000];
    fgets(str,1000,stdin);
    printf("%d\n", tongji(str));
    return 0;
} 
