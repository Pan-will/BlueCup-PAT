#include<stdio.h>
int main(){
	int a[3][3];
	int i,j,temp;
	for(i=0;i<3;i++)  /*ͨ������Ϊ����Ԫ�ظ�ֵ*/
    {
        for(j=0;j<3;j++)
        {
           printf("a[%d][%d]=",i,j);
           scanf("%d",&a[i][j]);
        }
    }
	printf("ת��ǰ��\n") ;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n") ;
	}
	for(i=0;i<3;++i){
		for(j=0;j<3;++j){
			if(j>i){
				temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = temp;
			}
		}
	}
	printf("ת�ú�\n") ;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n") ;
	}
	return 0;
}
