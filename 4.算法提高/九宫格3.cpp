#include<stdio.h> 
int main(){
	int sum=0,k=0,f=1;
	int s[100]={0};
	/*�����ά����,������ֵΪ0*/
	int a[3][3];
	int i,j;
	/*¼��A[m][s]*/
	for(i=0;i<3;i++){
		sum=0;//ÿ����һ��ʱsum��Ϊ0 
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
			sum = sum+a[i][j];
		}
		s[k++] = sum;//ÿ�еĺ� 
	}
	
	for(sum=0,i=0;i<3;i++){
		sum=0;
		for(j=0;j<3;j++){
			sum+=a[j][i];
		}
		s[k++] = sum;//ÿ�еĺ� 
	}
	
	for(sum=0,i=0;i<3;i++)
		sum+=a[i][i];
	s[k++] = sum;//���Խ���Ԫ�غ� 
	s[k++] = a[0][2]+a[1][1]+a[2][0];//���Խ���Ԫ�غ� 
	for(i=0;i<k-1;i++)
		for(j=i+1;j<k;j++){
			if(s[i] != s[j]){
				f=0;
			}
		}
	s[k++] = sum;//ÿ�еĺ� 
	if(f)
		printf("1");
	else
		printf("0");
	return 0;
}
