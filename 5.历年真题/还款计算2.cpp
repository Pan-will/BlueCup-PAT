#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x=10000,r;// r �� ������ 
    int n;// ������ 
    cin>>r>>n;
    r=r*0.01/12;//ÿ�µ���Ϣ
    double start=x/n;
    double sum=x,last=99999999;
    while(start){
        sum=x;
        for(int i=1;i<=n;i++)
            sum=sum+sum*r-start;
        if(abs(last)<abs(sum)){
            int zz=(double)((start-0.01)*100+0.5);
            cout<<zz;
            break;
        }
        last=sum;
        start=start+0.01;
    }
    return 0;
}
