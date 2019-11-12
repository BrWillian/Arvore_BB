#ifndef NODE_H
#define NODE_H


class node
{
private:
public:
    int key;
    node *left;
    node *right;

    node();
    static node *MountNode(int *dat);
    static void DesmountNode(node *p);
};

#endif // NODE_H
