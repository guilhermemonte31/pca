#ifndef ARVOREB_H
#define ARVOREB_H

#define MAX 2 // árvore b de ordem 3
#define MIN 1

// Declaração da estrutura
typedef struct aux {
  int item[MAX + 1];
  int count;
  struct aux* linker[MAX + 1];
}BTreeNode;

typedef struct{
    BTreeNode *root;
}Tree;


// Declaração das funções
void inicializeTree(Tree *t);
BTreeNode *createNode(int item,BTreeNode *child);
void addValToNode(int item, int pos,BTreeNode *node, BTreeNode *child);
void splitNode(int item, int *pval, int pos, BTreeNode *node, BTreeNode *child, BTreeNode **newNode);
int setValueInNode(int item, int *pval, BTreeNode *node, BTreeNode **child);
void insertion(BTreeNode *root, int item);
void copySuccessor(BTreeNode *myNode, int pos);
void removeVal(BTreeNode *myNode, int pos);
void rightShift(BTreeNode *myNode, int pos);
void leftShift(BTreeNode *myNode, int pos);
void mergeNodes(BTreeNode *myNode, int pos);
void adjustNode(BTreeNode *myNode, int pos);
int delValFromNode(int item, BTreeNode *myNode);
void delete(int item, BTreeNode *myNode, BTreeNode *root);
void searching(int item, int *pos, BTreeNode *myNode);
void traversal( BTreeNode *myNode);

#endif
