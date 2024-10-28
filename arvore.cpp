#include <iostream>

using namespace std;

struct no
{
    int info;
    struct no * esq;
    struct no * dir;
};

typedef struct no * noptr;

bool listaVazia(noptr p)
{
    if(p)

        return false;
    else
        return true;
}

void inserir(noptr *p,int x)
{
    if(listaVazia(*p))
    {
        *p = new no;
        (*p)->info = x;
        (*p)->esq = NULL;
        (*p)->dir = NULL;
    }
    else
    {
        if(x<((*p)->info))
            inserir(&((*p)->esq), x);
        else
            inserir(&((*p)->dir), x);
    }   
}

noptr buscar(noptr p, int x)
{
    if(p==NULL)
        return NULL;
    if(x==(p->info))
        return p;
    if(x<(p->info))
        return buscar((p->esq),x);
    else
        return buscar((p->dir),x);
}

int main()
{
    int op1, x;
    bool achei;
    noptr raiz = NULL;

    do{
    cout<<"1- inserir\n"<<"2-procura\n"<<"0-sair\n"<<endl;
    cin>>op1;

    switch(op1)
    {
        case 1: cout<<"elemento que deseja inserir:"<<endl;
        cin>>x;
        inserir(&raiz,x);
        break;

        case 2: cout<<"elemento a procurar: "<<endl;
        cin>>x;
        noptr p = buscar(raiz,x);
        if(!p)
            cout<<"elemento nao encontrado..."<<endl;
        else
            cout<<"elemento "<<x<<" encontrado no endereco: "<<p<<endl;
        break;
    }

    }while(op1!=0);
}