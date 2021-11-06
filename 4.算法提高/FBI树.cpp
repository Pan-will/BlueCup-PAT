#include<stdio.h>
#include<math.h>
#define MAX 10000
int num[MAX];
char s[MAX];
//定义结构体 
struct Node{
	Node *left,*right;
	char c;
};
//将字符数组转为整形数组 
void strtoint(char *s, int *num, int len) {
	for(int i=0;i<len;i++){
		num[i] = s[i] - '0';
	}
}
//后序遍历:递归遍历左右子树 
void lastdfs(Node *head){
	if(head->left)
		lastdfs(head->left);
	if(head->right)
		lastdfs(head->right);
	printf("%c",head->c);
}
//判断并返回01串是否为全0、全1、混合串 
char fbi(int *num,int begin,int end){
	int sum=0;
	for(int i=begin;i<=end;i++) {
		sum+=num[i];
	}
	if(sum==0) return 'B';//全0串 
	else if(sum==end-begin+1) return 'I';//全1串 
	else return 'F';//混合串 
}
//创建二叉树
Node *buildTree(int *num, int begin, int end){
	char c = fbi(num,begin,end);
	Node *p = new Node;
	p->c = c;
	if(begin<end){//说明子串不为空 
		int mid = (begin+end)/2;
		p->left = buildTree(num,begin,mid);
		p->right = buildTree(num,mid+1,end);
	}else{//若子串为空，左右子树赋NULL 
		p->left=NULL;
		p->right=NULL;
	}
	return p;
}
int main(){
	int n;
	scanf("%d",&n);
	getchar();//处理回车
	gets(s);
	int len = pow(2,n);//按题意"01"串的长度为2的n次方 
	strtoint(s,num,len);
	Node *head = buildTree(num,0,len-1);
	lastdfs(head);
	return 0;
}
