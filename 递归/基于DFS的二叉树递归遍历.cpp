struct tree{
	char c;
	tree left;
	tree right;
};
void preorder(tree t){
	if(!t) 
		return;
	visit(t);
	preorder(t->left);
	preorder(t->right);
}
void inorder(tree t){
	if(!t)
		return;
	lastorder(t->left);
	visit(t);
	lastorder(t->right);
}
void lastorder(tree t){
	if(!t)
		return;
	inorder(t->left);
	inorder(t->right);
	visit(t);
}

void  cengorder(tree t){
	if(!t)
		return;
	queue<tree> re;
	tree p = T;
	re.push(p);
	while(!re.empty()){
		p = re.front();
		visit(p);
		if(p->left)
			re.push(p->left);
		if(p->right)
			re.push(p->right)
	}
}
