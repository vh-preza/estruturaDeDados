#include <iostream>

using namespace std;

struct no
{
    int info;
    struct no * ant;
    struct no * prox;
};

typedef struct no * noPtr;

int menu()
{
    int n;
    cout<<"1-inserir\n"<<"2-retirar\n"<<"3-teste\n"<<endl;
    cin>>n;

    return n;
}

void teste(noPtr*topo)
{
    noPtr p = *topo;

    noPtr q, r;

    q = p;

    p->ant = NULL; 

    cout<<"a lista:"<<endl;
    
    while(p!=NULL)
    {
        cout<<p->info<<endl;

        q=p;
        p = p->prox;
    }
 
    cout<<"agora ao contrario:"<<endl;

    while(q!=NULL)
    {
        cout<<q->info<<endl;

        q = q->ant;
    }
}

void retirar(noPtr* topo)
{
    noPtr p;

    p = *topo;

    if(*topo!=NULL)
    {
        if(p->prox == NULL)
        {
            *topo = NULL;
        }
        else
        {
            *topo = p->prox;
            (*topo)->ant = NULL;
        }
        delete(p);
        cout<<"intem retirado da lista.."<<endl;
    }

    else
    {
        cout<<"sem elemento na lista...."<<endl;
    }
}

void inserir(noPtr* topo)
{
    noPtr p = new no;

    cout<<"digite o numero do elemento:\n";
    cin>>p->info;

    if(*topo == NULL)
    {
        p->prox = NULL;
    }
    else
    {
        p->prox = *topo;
        (*topo)->ant = p;
    }
    *topo = p;
}

int main()
{
    int op;
    noPtr topo = NULL;

    do
    {
        op = menu();

        switch(op)
        {
            case 1: inserir(&topo); break;
            case 2: retirar(&topo); break;
            case 3: teste(&topo); break;
        }
    }while(op!=0);

    return 0;
}



