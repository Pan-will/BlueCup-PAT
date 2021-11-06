/*
分析：
1.可能两个数的长度不同，那么就需要在一个数加完之后把另一个数的剩下的数全加上。
2.判断最高位，如果最高位有进位，那么还需要把进位位加上。
*/
#include<stdio.h>
#include<string.h>
main(){
	char a[1000],b[1000];//用符串数组存放加数 
    long long c[2000];//存放结果
    scanf("%s%s",a,b);
    int i,j,k=0,r=0;//r是进位，初始为0 
    int lena,lenb;//表字符长度 
    lena = strlen(a);//获取字符串长度 
    lenb = strlen(b);
    for(i=lena-1,j=lenb-1; i>=0 && j>=0; i--,j--){ 
        int p=(a[i]-'0')+(b[j]-'0')+r;//从最后一位开始算，r为进位 
        r=p/10;//算出进位
        c[k++]=p%10;//余数存到数组中,先正序存入,再反序输出 
    }
    while(i>=0){//如果a中的数加完了  
        int p=(a[i]-'0')+r;
        r=p/10;
        c[k++]=p%10;
        i--;
    }
    while(j>=0){//如果b中的数加完了  
        int p=(b[j]-'0')+r;
        r=p/10;
        c[k++]=p%10;
        j--;
    }
    if(r){//判断最高位有没有进位
        c[k++]=r;
    }
    for(int i=k-1;i>=0;i--){//倒序输出结果数组 
    	printf("%d",c[i]);
	}
}
