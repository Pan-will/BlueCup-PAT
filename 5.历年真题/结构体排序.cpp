#include <stdio.h>
#include <stdlib.h>
struct node
{
     double date1;
     int no;
} s[100];

int i,n;

int cmp(const void *a,const void *b)
{
     node *aa=(node*)a;
     node *bb=(node*)b;
     if(aa->date1!=bb->date1)
         return(((aa->date1)>(bb->date1))?1:-1);
     else
         return((aa->no)-(bb->no));
}

int main()
{
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         s[i].no=i+1;
         scanf("%lf",&s[i].date1);
     }
     qsort(s,n,sizeof(s[0]),cmp);

     for(i=0;i<n;i++) printf("%d   %lf\n",s[i].no,s[i].date1);

     return 0;
}
