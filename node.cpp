#include "node.h"

node::node()
{
    left = right = nullptr;
}

node *node::MountNode(int *dat)
{
    node *p = new node;
    if(p)
    {
        p->key = *dat;
    }
    return p;
}
void node::DesmountNode(node *p)
{
    if(p)
    {
        delete p;
    }
}
