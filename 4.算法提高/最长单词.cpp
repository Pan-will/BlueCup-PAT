#include<stdio.h>
#include<string.h>
int alpha(char c){
    if(c>='a'&&c<='z'||c>='A'&&c<='Z'){
        return 1;
    }else {
        return 0;
    }
}
int main(){
    int i,pointer,point,place,len,length,num;
    char str[1001];
    while(gets(str)){
        int flag=1;
        len=length=num=0;
        for(i=0;i<=strlen(str);i++){
            if(!alpha(str[i])){
                if(len>length){
                    length=len;
                    place=point;
                }
                flag=1;
                len=0;
            }else{
                if(flag){
                    point=i;
                    num++;
                }
                len++;
                flag=0;
            }
        }
        for(i=place;i<place+length;i++)
            printf("%c", str[i]);//��������
        printf("\n");
        printf("%d\n", length);//��������ʳ���
        printf("%d\n", num);//������ַ������м�������

    }
    return 0;
}
