/*
	1：两个字符串长度不等。比如 Beijing 和 Hebei
　　2：两个字符串不仅长度相等，而且相应位置上的字符完全一致(区分大小写)，比如 Beijing 和 Beijing
　　3：两个字符串长度相等，相应位置上的字符仅在不区分大小写的前提下才能达到完全一致（也就是说，它并不满足情况2）。比如 beijing 和 BEIjing
　　4：两个字符串长度相等，但是即使是不区分大小写也不能使这两个字符串一致。
*/ 
#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[10],ch2[10];//定义字符串数组 
    scanf("%s%s",ch1,ch2);
    int len1,len2;
    len1=strlen(ch1);//求字符串长度 
    len2=strlen(ch2);
    if(len1==len2){//判断字符串长度是否相等 
        int flag=1;//定义一个标识符 
        for(int i=0;i<len1;i++)
            if(ch1[i]!=ch2[i])//判断如果不相同 
                flag=0;//使标识符变化 
        if(flag)//标识符没有改变即字符串相同，符合条件2
			printf("2");
        else{
            flag=1;//重新定义标识符 
            for(int i=0;i<len1;i++)//判断，如果在忽略大小写的情况下是否还是不同
	            if(ch1[i]+32!=ch2[i] && ch1[i]-32!=ch2[i] && ch1[i]!=ch2[i])
	                 flag=0;//使标识符改变 
            if(flag)  printf("3");//如果标识符没有改变 ，则符合条件3 
            else  printf("4");//如果标识符改变，则符合条件4 
        }
    }
    else printf("1");//两字符串长度不等，符合条件1 
}
