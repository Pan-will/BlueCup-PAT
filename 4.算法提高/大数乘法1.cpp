#include "stdio.h"
#include "math.h"
int main()
{
    long long int S;
    int n=0,i,j,k1,k2,L1,L2,A,B,C,D,m1,m2,m3,p,q;
    scanf("%d%d",&p,&q); 
    if(p>q)
        j=p;
    else
        j=q;
    while(j!=0)
    {
        j=j/10;
        n++;
    }
    L1=L2=n/2;
    for(i=0,k1=p;i<L1;i++)
    {
        k1=k1/10;
    }
    A=k1;
    for(i=0;i<L1;i++)
    {
        k1=k1*10;
    }
    B=p-k1;

    for(i=0,k2=q;i<L2;i++)
    {
        k2=k2/10;
    }
    C=k2;
    for(i=0;i<L2;i++)
    {
        k2=k2*10;
    }
    D=q-k2;

    m1=A*C;
    m2=(A-B)*(D-C);
    m3=B*D;
    S=(m1*pow(10,n)+(m1+m2+m3)*pow(10,n/2)+m3);
    printf("%lld\n",S);
    return 0;
 }
