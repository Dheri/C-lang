#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct treeNode_def{
	int number;
	struct treeNode_def *left, * right;
}treeNode;

typedef struct {
	treeNode* root;
	int nodeCount;
}BinaryTree;

void init (BinaryTree*);
treeNode* createNode(int);
void preOrderTransversal (treeNode*);
void postOrderTransversal (treeNode*);
void visitNode(treeNode*);

int main (void){
	BinaryTree btree;
	init(&btree);
	
	treeNode * newNode = createNode(10);
	btree.root = newNode;
	btree.nodeCount++;
	
	newNode = createNode(4);
	btree.root->left = newNode;
	btree.nodeCount++;
	
	newNode = createNode(12);
	btree.root->left->left = newNode;
	btree.nodeCount++;
	
	newNode = createNode(8);
	btree.root->left->right = newNode;
	btree.nodeCount++;
	
	newNode = createNode(5);
	btree.root->right = newNode;
	btree.nodeCount++;
	
	newNode = createNode(1);
	btree.root->right->left = newNode;
	btree.nodeCount++;
	
	newNode = createNode(3);
	btree.root->right->right = newNode;
	btree.nodeCount++;
	
//	preOrderTransversal(newNode);
	postOrderTransversal(btree.root);
}

void init (BinaryTree* btree){
	btree->root = NULL;
	btree->nodeCount = 0;
}

treeNode* createNode(int num){
	treeNode* newNode = malloc(sizeof(treeNode));
	newNode->number = num;
	newNode->left = newNode->right = NULL;
	assert(newNode);
	return newNode;
}
void preOrderTransversal (treeNode* node){
	if(node == NULL ){
		return;
	}
	visitNode(node);
	preOrderTransversal(node->left);
	preOrderTransversal(node->right);
}

void postOrderTransversal (treeNode* node){
	if(node == NULL ){
		return;
	}
	
	postOrderTransversal(node->left);
	postOrderTransversal(node->right);
	visitNode(node);
	
}

void visitNode(treeNode* node){
	printf(" %d \n ", node->number);
}


