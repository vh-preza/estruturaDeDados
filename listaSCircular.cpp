#include <iostream>

using namespace std;

struct no{

    int codigo;
    struct no * prox;
};

typedef struct no * noptr;

noptr fim = NULL;
noptr topo = NULL;

void retirar()
{
    noptr p;

    p = fim->prox;
    fim->prox = p->prox;

    cout<<"musica de codigo: "<<p->codigo<<" retirada!\n"<<endl;
    delete (p);
}

void printar()
{
    noptr x = topo;

    cout<<"____________________\n"<<endl;
    
    do
    {
        cout<<x->codigo<<endl;
        x = x->prox;

    }while(x!=topo);
}

void inserir()
{
    noptr p;

    p = new no;

    cout<<"insira o codigo da musica:"<<endl;
    cin>>p->codigo;

    if(fim==NULL)
    {
        topo = p;        
        fim = p;
        p->prox = p;
    }
    else
    {
        p->prox = fim->prox;
        fim->prox = p;
        fim = p;
    }
}

int menu()
{
    int n;

    cout<<"1 para inserir codigo da musica\n"<<"2 para printar\n"<<"3 para retirar\n"<<"0 para parar\n"<<endl;
    cin>>n;

    return n;
}

int main()
{
    int n;

    do
    {
        n = menu();

        switch (n)
        {
        case 1: inserir(); break;
        
        case 2: printar(); break;

        case 3: retirar(); break;
        }

    }while(n!=0);

    return 0;
}
