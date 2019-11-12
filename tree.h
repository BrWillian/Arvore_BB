#ifndef TREE_H
#define TREE_H
#include <node.h>

class tree
{
private:
    node *root;
public:
    tree();
    bool insert(int *dat);
    bool search(int k);
    bool remove(int k);
protected:
    static void R_insert(int k, node *p, node **root);
    static bool R_search(int k, node *root);
    static bool R_remove(int k, node **root);
    static node *max(node *R);
    void inorder(node *root);
    void preorder(node *root);
    void posorder(node *root);

};

#endif // TREE_H
