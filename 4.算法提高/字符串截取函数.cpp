#include<stdio.h>
#include<stdlib.h>
char* substring(char* ch,int pos,int length)  
{  
    char* pch=ch;//����һ���ַ�ָ�룬ָ�򴫵ݽ�����ch��ַ��  
    char* subch=(char*)calloc(sizeof(char),length+1);//ͨ��calloc������һ��length���ȵ��ַ����飬���ص����ַ�ָ�롣  
    int i;//ֻ����C99��forѭ���вſ�����������������д�����棬��߼����ԡ�  
    pch=pch+pos;//��pchָ��ָ��posλ�á�  
    for(i=0;i<length;i++){  
        subch[i]=*(pch++);//ѭ��������ֵ���顣  
    }  
    subch[length]='\0';//�����ַ�����������  
    return subch;      //���ط�����ַ������ַ��  
} 

main(){
    char* result;
    char tstStr[]="abcdefg";
    result = substring(tstStr,1,2);
    printf("�����%s",result);
}
