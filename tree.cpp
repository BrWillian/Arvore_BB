#include "tree.h"
#include <iostream>

tree::tree()
{
    root = nullptr;
}
bool tree::search(int k)
{
    node *it = root;
    if(!it)
    {
        return false;
    }
    return R_search(k, it);
}
bool tree::remove(int k)
{
    node **it = &root;
    if(!(*it))
    {
        return false;
    }
    return R_remove(k, it);
}
bool tree::R_remove(int k, node **it)
{
    node *p;

    if(k < (*it)->key)
    {
        return R_remove(k, &(*it)->left);
    }
    if(k > (*it)->key)
    {
        return R_remove(k, &(*it)->right);
    }
    if(!(*it)->left)
    {
        p = *it;
        *it = (*it)->right;
        node::DesmountNode(p);
        return true;
    }
    if(!(*it)->right)
    {
        p = *it;
        *it = (*it)->left;
        node::DesmountNode(p);
        return true;
    }

    node *m = max((*it)->left);
    int aux = m->key;
    (*it)->key = aux;
    R_remove(k, &(*it)->left);
}
bool tree::R_search(int k, node *r)
{
    if(r == nullptr)
    {
        return false;
    }
    if(r->key == k)
    {
        return true;
    }else {
        if(k < r->key)
        {
            R_search(k, r->left);
        }else {
            R_search(k, r->right);
        }
    }
}
bool tree::insert(int *dat)
{
    node **it = &root;
    node *p = node::MountNode(dat);
    if(!p)
    {
        return false;
    }
    R_insert(*dat,p,it);
    return true;
}
void tree::R_insert(int k, node *p, node **it)
{
    if(!(*it))
    {
        *it = p;
    }else {
        if(k < (*it)->key)
        {
            R_insert(k,p,&(*it)->left);
        }else {
            R_insert(k,p,&(*it)->right);
        }
    }
}

node *tree::max(node *r)
{
    if(r->right == nullptr)
    {
        return r;
    }
    return max(r->right);
}
void tree::inorder(node *r)
{
    if(r)
    {
        inorder(r->left);
        std::cout<<r->key;
        inorder(r->right);
    }
}
void tree::preorder(node *r)
{
    if(r)
    {
        std::cout<<r->key;
        preorder(r->left);
        preorder(r->right);
    }
}
void tree::posorder(node *r)
{
    if(r)
    {
        posorder(r->left);
        posorder(r->right);
        std::cout<<r->key;
    }
}
