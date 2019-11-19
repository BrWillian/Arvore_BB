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
    void print();
    int print_leaf();
protected:
    static void R_insert(int k, node *p, node **root);
    static int R_print_leaf(node *root);
    static bool R_search(int k, node *root);
    static bool R_remove(int k, node **root);
    static node *max(node *R);
    static void inorder(node *root);
    static void preorder(node *root);
    static void posorder(node *root);

};

#endif // TREE_H
