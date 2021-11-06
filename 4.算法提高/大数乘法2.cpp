#include<stdio.h>
#include<string.h>
char s[1000];
void mult(char a[],char b[])
{
    int i,j,k=0,alen,blen,sum=0,res[500][500]={0},flag=0;
    char result[500];
    alen=strlen(a);blen=strlen(b); 

    for (i=0;i<alen;i++)
    for (j=0;j<blen;j++) res[i][j]=(a[i]-'0')*(b[j]-'0');

    for (i=alen-1;i>=0;i--)
        {
            for (j=blen-1;j>=0;j--) sum=sum+res[i+blen-j-1][j];
            result[k]=sum;
            k=k+1;
            sum=sum/10;
        }

    for (i=blen-2;i>=0;i--)
        {
            for (j=0;j<=i;j++) sum=sum+res[i-j][j];
            result[k]=sum;
            k=k+1;
            sum=sum/10;
        }
    if (sum!=0) {result[k]=sum;k=k+1;}

    for (i=0;i<k;i++) result[i]+='0';
    for (i=k-1;i>=0;i--) s[i]=result[k-1-i];
    s[k]='\0';

    while(1)
        {
        if (strlen(s)!=strlen(a)&&s[0]=='0') 
            strcpy(s,s+1);
        else
            break;
        }
}
int main(){
	char str1[1000],str2[1000];
	int t,frag,i;
//	while(scanf("%s%s",str1,str2)!=EOF){
	scanf("%s%s",str1,str2); 
	mult(str1,str2);
	frag=0;
	t=strlen(s);
	for(i=0;i<t;i++){
		if(s[i]!='0')
			frag=1;
		if(frag==1)
			printf("%c",s[i]);
	}
	if(frag==0)
		printf("0");
//	}
	return 0;
}
