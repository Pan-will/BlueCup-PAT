#include<stdio.h>
int main()
{
    int i,j,a[3][3] = {0},result = 0;
    printf("�������3*3����\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("��3*3����Ϊ��\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }

    printf("��ת�þ���Ϊ��\n");
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
    printf("�����Խ���Ԫ�غ�Ϊ��%d\n",result);
    
    result = 0;
    for (i=0;i<3;i++)
    {
        result += a[i][2-i];
    }
    printf("�丱�Խ���Ԫ�غ�Ϊ��%d\n",result);
    return 0;
} 
