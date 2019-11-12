#include <iostream>
#include <tree.h>

using namespace std;

int main()
{

    // Exemplos para teste da arvore.

    tree arvore;

    int d = 10;
    int a = 12;
    int b = 14;
    int c = 31;
    int k = 11;
    int p = 9;

    arvore.insert(&d);
    arvore.insert(&a);
    arvore.insert(&b);
    arvore.insert(&c);
    arvore.insert(&k);
    arvore.insert(&p);

    arvore.imprima();
}
