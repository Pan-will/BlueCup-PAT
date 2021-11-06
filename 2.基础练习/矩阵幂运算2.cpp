#include<stdio.h>
/*输出矩阵的函数*/
void print(int c[][101],int n){
	for(int i=0;i<n;i++){  
        for(int j=0;j<n;j++){
        	printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
/*矩阵乘法函数*/
void Chengfa(int a[][101],int b[][101],int c[][101],int n,int m){
	for(int p=1;p<m;p++){  
        for(int i=0;i<n;i++){  
            for(int j=0;j<n;j++){  
                int t=0;  
                for(int k=0;k<n;k++){  
                    t += a[i][k]*b[k][j];  
                    c[i][j]=t;  
                }  
            }  
        }  
        for(int i=0;i<n;i++){  
            for(int j=0;j<n;j++){  
                b[i][j]=c[i][j];  
            }  
        }  
    } 
}

int main(){
	int n,m;  
    int a[101][101]={0},b[101][101]={0},c[101][101]={0};
    scanf("%d%d",&n,&m);
    /*输入矩阵*/
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		scanf("%d",&a[i][j]);
		}
	}
	/*记录矩阵*/
	for(int i=0;i<n;i++){  
        for(int j=0;j<n;j++){  
            b[i][j]=a[i][j];  
        }  
    }  
    if(m==0){
    	for(int i=0;i<n;i++){  
            for(int j=0;j<n;j++){  
                if(i==j) 
					c[i][j]=1;  
            }  
        }  
        print(c,n);
	}
	else if(m==1){  
        print(a,n);  
    }  
    else{  
        Chengfa(a,b,c,n,m);  
        print(c,n);  
    }  
    return 0;  
}
