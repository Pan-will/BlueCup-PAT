#include<stdio.h>
#include<math.h>
#define MAX 10000
int num[MAX];
char s[MAX];
//����ṹ�� 
struct Node{
	Node *left,*right;
	char c;
};
//���ַ�����תΪ�������� 
void strtoint(char *s, int *num, int len) {
	for(int i=0;i<len;i++){
		num[i] = s[i] - '0';
	}
}
//�������:�ݹ������������ 
void lastdfs(Node *head){
	if(head->left)
		lastdfs(head->left);
	if(head->right)
		lastdfs(head->right);
	printf("%c",head->c);
}
//�жϲ�����01���Ƿ�Ϊȫ0��ȫ1����ϴ� 
char fbi(int *num,int begin,int end){
	int sum=0;
	for(int i=begin;i<=end;i++) {
		sum+=num[i];
	}
	if(sum==0) return 'B';//ȫ0�� 
	else if(sum==end-begin+1) return 'I';//ȫ1�� 
	else return 'F';//��ϴ� 
}
//����������
Node *buildTree(int *num, int begin, int end){
	char c = fbi(num,begin,end);
	Node *p = new Node;
	p->c = c;
	if(begin<end){//˵���Ӵ���Ϊ�� 
		int mid = (begin+end)/2;
		p->left = buildTree(num,begin,mid);
		p->right = buildTree(num,mid+1,end);
	}else{//���Ӵ�Ϊ�գ�����������NULL 
		p->left=NULL;
		p->right=NULL;
	}
	return p;
}
int main(){
	int n;
	scanf("%d",&n);
	getchar();//����س�
	gets(s);
	int len = pow(2,n);//������"01"���ĳ���Ϊ2��n�η� 
	strtoint(s,num,len);
	Node *head = buildTree(num,0,len-1);
	lastdfs(head);
	return 0;
}
