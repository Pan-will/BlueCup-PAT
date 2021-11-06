#include<stdio.h>
int main(){
	char a[100];
	int i,j,m=0;
	printf("ÊäÈë×Ö·û´®:\n");
    for(i=0;i<=100;i++)
    {
        scanf("%s",&a);
    }
    for(i=0;i<9-m;i++)//i<=9---->i<9-m
    {
        for(j=i+1;j<=9-m;)//j<=9---->j<=9-m
        {
            if(a[j]==a[i])
            {
                for(;j<=8-m;j++)//j<=8----j<=8-m
                {
                    a[j]=a[j+1];
                }
                m++;
                j=i+1;
            }
            else
                j++;
        }
    }
    for(i=0;i<=9-m;i++)
    {
        printf("%s",a[i]);
    }
    return 0;
}
