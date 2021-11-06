#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001],b[1001];
    int s[1001],d[1001];
	scanf("%s%s",&a,&b);
    memset(s,0,1001*sizeof(int));
    memset(d,0,1001*sizeof(int));
    for(int i=strlen(a)-1,j=0; i>=0; i--)
    {
        s[j++]=a[i]-'0';
    }
    for(int i=strlen(b)-1,j=0; i>=0; i--)
    {
        d[j++]=b[i]-'0';
    }
    for(int i=0; i<1001; i++)
    {
        s[i]+=d[i];
        if(s[i]>=10)
        {
            s[i]=s[i]-10;
            s[i+1]++;
        }
    }
    int i;
    for( i=1000; i>=0; i--)
        if(s[i])
            break;
        for(int j=i;j>=0;j--)
        printf("%d",s[j]);
    return 0;
}
