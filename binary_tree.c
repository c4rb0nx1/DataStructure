#include "stdio.h"
#include"stdlib.h"

struct node
 {
 	int data;
 	struct node* right;
 	struct node* left;
 }; 

 struct node* create(value)
 {
 	struct node* n = malloc(sizeof(struct node*));
 	n->data = value;
 	n->right = NULL;
 	n->left = NULL;
 	return n;
 }

 struct node* right(struct node* root,int value)
 {
 	root->left = create(value);
 	return root->left;
 }

 struct node* left(struct node* root, int value)
 {
 	root->right = create(value);
 	return root->right;
 }

 void inorder(struct node* root)
 {
 	if(root == NULL){return;}
 	inorder(root->left);
 	printf("%d ",root->data);
 	inorder(root->right);
 }

 void preorder(struct node* root)
 {
 	if(root == NULL){return;}
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
 }

 void postorder(struct node* root)
 {
 	if(root == NULL){return;}
 	postorder(root->left);
 	postorder(root->right);
 	printf("%d ",root->data);
 }

 int main()
 {
 	struct node* root = create(1);
 	left(root,2); 
 	right(root,3);
 	right(root->right,5);
 	right(root->left,4);
 	printf("\ninorder LrR\n");
 	inorder(root);
 	printf("\npreorder rLR\n");
 	preorder(root);
 	printf("\npostorder LRr\n");
 	postorder(root);
 }
