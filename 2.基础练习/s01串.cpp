#include<stdio.h>
#include<string.h>
/*ȫ�ֱ���*/
char s[20000];
int slen;//s����ĳ��� 

/*��������ĺ���*/
void changing(){
    char t[20000];
    int len=0;//t����ĳ��� 
    for(int i=0;i<slen;i++){
        if(s[i]=='1'){
            t[len++]='0';
        }
        t[len++]='1';
    }
    for(int i=0;i<len;i++){
        s[i]=t[i];//��t����ֵ����s���� 
    }
    slen=len;//��t���鳤�ȸ���s���� 
}
int main(){
    int n;
    s[0]='0';//��s����Ԫ�ظ�ֵΪ0 
    slen=1;//��ʼ����Ϊ1 
    scanf("%d",&n);
    while(n--){
        changing();
    }
    printf("%s",s);
    return 0;
}
