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

    arvore.insert(&d);
    arvore.insert(&a);
    arvore.insert(&b);
    arvore.insert(&c);

    arvore.remove(10);

    if(arvore.search(10))
    {
        cout<<"Achou!";
    }
    else {
        cout<<"Não achou!";
    }
}
