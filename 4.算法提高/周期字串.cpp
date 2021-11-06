/*
	目标：测定一个字符串的最小周期；
	要求：一个最大长度为100的无空格的字符串 
*/
#include<stdio.h>
#include<string.h>
int main(){
    char a[101];//定义字符数组 
    gets(a);//输入字符串
    int len=strlen(a);//获取字符串长度 
    for(int i=1;i<=len;i++){//i表周期,最短为1,最长为len
        int flag=1;//定义标记 
        if(len%i==0){//长度肯定是周期的倍数,满足条件才执行 
	        //若i为周期,则遍历下一个周期对应元素是否与上一个周期的元素相等 
			for(int j=i;j<len;j++){ 
	            if(a[j%i] != a[j]){//不满足条件 
	                flag=0;//当前的i不是周期,标记置0 
	                break;//跳出循环 
	            }
	        }
	        if(flag==1){//若标记不为0,则 i为最小周期 
                printf("%d",i);
                break;
            }
        }				
    }
    return 0;
}
                
