#include<stdio.h>
int main()
{
    int i,j,a[3][3] = {0},result = 0;
    printf("请输入该3*3矩阵：\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("该3*3矩阵为：\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }

    printf("其转置矩阵为：\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%2d ",a[j][i]);
        }
        printf("\n");
    }

    for (i=0;i<3;i++)
    {
        result+=a[i][i];
    }
    printf("其主对角线元素和为：%d\n",result);
    
    result = 0;
    for (i=0;i<3;i++)
    {
        result += a[i][2-i];
    }
    printf("其副对角线元素和为：%d\n",result);
    return 0;
} 
