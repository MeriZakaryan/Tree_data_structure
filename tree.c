#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode
{
    int value;
    struct TreeNode* firstChild;
    struct TreeNode* nextSibling;
}TreeNode;

TreeNode* createNode(int data)
{
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->value = data;
    node->firstChild = NULL;
    node->nextSibling = NULL;

    return node;
}

void addChild(TreeNode* parent, TreeNode* child)
{
    if(parent->firstChild == NULL)
        parent->firstChild = child;
    else
    {
        TreeNode* current = parent->firstChild;
        while(current->nextSibling)
            current = current->nextSibling;

        current->nextSibling = child;
    }
}

int main()
{
    TreeNode* root = createNode(1);
    TreeNode* n1 = createNode(2);
    TreeNode* n2 = createNode(3);
    TreeNode* n3 = createNode(4);
    TreeNode* n4 = createNode(5);
    TreeNode* n5 = createNode(6);
    TreeNode* n6 = createNode(7);
    TreeNode* n7 = createNode(8);

    addChild(root, n1);
    addChild(root, n2);
    addChild(root, n3);
    addChild(n1, n4);
    addChild(n1, n5);
    addChild(n2, n6);
    addChild(n6, n7);

    
    return 0;
}