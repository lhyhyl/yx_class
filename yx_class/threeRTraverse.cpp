////写出二叉树的三大递归遍历
//void preOrder(biTree* T) {
//	if (T) {
//		visit(T);
//		preOrder(T->lchild);
//		preOrder(T->rchild);
//	}
//}
//void inOrder(biTree* T) {
//	if (T) {
//		inOrder(T->lchild);
//		visit(T);
//		inOrder(T->rchild);
//	}
//}
//void postOrder(biTree* T) {
//	if (T)
//	{
//		postOrder(T->lchild);
//		postOrder(T->rchild);
//		visit(T);
//	}
//}