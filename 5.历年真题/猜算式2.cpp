/*
46*79 = 23*158
54*69 = 27*138
54*93 = 27*186
58*67 = 29*134
58*69 = 23*174
58*73 = 29*146
58*96 = 32*174
63*74 = 18*259
64*79 = 32*158
73*96 = 12*584
76*98 = 14*532
11个
*/
#include<stdio.h>
#include<string.h>
bool use[10];//访问标记数组
int a[10];//判断a与b的积是否出现过
int yin1,yin2,yin3,yin4;
int count=0;
void dfs(int begin){  
    if(begin==10){
    	yin1=a[1]*10+a[2];
    	yin2=a[3]*10+a[4];
    	yin3=a[5]*10+a[6];
    	yin4=a[7]*100+a[8]*10+a[9];
		if((yin1*yin2==yin3*yin4) && yin1<yin2){
			count++;
			printf("%2d*%2d = %2d*%3d\n",yin1,yin2,yin3,yin4);
		}
        return; 
    }  
    for(int i=1; i<=9; i++){
        if(!use[i]){
        	use[i] = true;
        	a[begin]=i;
        	dfs(begin+1);
        	use[i] = false;
		}
    }  
}  
int main(){  
    memset(use,false,sizeof(use));
    dfs(1);
    printf("\n共有%d个.",count);
	return 0;
}
