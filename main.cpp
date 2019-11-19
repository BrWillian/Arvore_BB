#include <iostream>
#include <tree.h>

using namespace std;

int main()
{

    // Exemplos para teste da arvore.

    tree arvore;

    int d = 10;
    int a = 12;
    int b = 13;
    int c = 11;
    int k = 8;
    int p = 9;
    int z = 7;

    arvore.insert(&d);
    arvore.insert(&a);
    arvore.insert(&b);
    arvore.insert(&c);
    arvore.insert(&k);
    arvore.insert(&p);
    arvore.insert(&z);
    //arvore.print();
    arvore.print_leaf();
}
