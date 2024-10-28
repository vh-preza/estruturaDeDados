#include <iostream>

using namespace std;

struct no
{
    int info;

    struct no * prox;
};

typedef struct no * noptr;

noptr topo = NULL;

noptr fim = NULL;

void procura()
{

    noptr p,q;
    int n;
    p = topo;


    cout<<"qual número deseja procurar?"<<endl;
    cin>>n;
    while(n!=p->info && p!=NULL)
    {
        q = p;
        p = p->prox;
    }

    if(p==NULL)
    {
        p = q;
    }

    if(n==p->info)
    {
        cout<<"item "<<p->info<<" encontrado!!! e retirado..."<<endl;

        if(p==topo)
        {
            topo = p->prox;
        }
        else
        {
            q->prox = p->prox;
        }
        delete(p);
    }

    else
    {
        cout<<"elemento nao encontrado..."<<endl;
    }
}

void maiorElemento()
{
    noptr p,q;
    int maior;

    maior = topo->info;
    
    q = topo->prox;

    p = topo->prox;

    while(p!=NULL)
    {
        if(maior<p->info)
        {
            q = p;
            maior = p->info;            
        }
        p = p->prox;
    }

    if(q->prox==NULL)
    {
        cout<<"o ultimo elemento é o maior"<<endl;      
    }
    else if(q = topo)
    {
        cout<<"o primeiro elemento é o maior";
    }
    else
    {
        p = q->prox;

        cout<<"o maior elemento é"<<maior<<endl;
        cout<<"o proximo elemento é"<<p->info<<endl;
    }        
}

void enfileirar()
{
    noptr p;
    int valor;

    p = new no;

    cout<<"insira o valor"<<endl;
    cin>>valor;

    p->info = valor;

    if(topo==NULL)
    {
        topo = p;
        fim = p;
    }
    else
    {
        fim->prox = p;
        fim = p;
    }
}


void empilhar()
{
    noptr p;

    int valor;

    p = new no;

    cout<<"insira o valor"<<endl;

    cin>>valor;

    p->info = valor;

    p->prox = topo;

    topo = p;
}

void desimpilhar()
{
    noptr p = topo;
    
    if(topo!=NULL)
    {
        cout<<"o item "<<topo->info<<" foi retirado"<<endl;
        
        topo = topo->prox;

        delete(p);

        cout<<"item retirado\n"<<endl;
    }  
    else
    {
        cout<<"lista vazia!!!\n"<<endl;
    }
     
}


void menu()
{
    int op;

    do{
    
    cout<<"1-empilhar\n"<<"2-desimpilhar\n"<<"3-enfileirar\n"<<"4-procurar\n"<<"0-sair"<<endl;
    cin>>op;
    switch(op)
    {
        case 1:empilhar();break;
        case 2:desimpilhar();break;
        case 3:enfileirar();break;
        case 4:procura();break;
    }
    }while(op!=0);
}


int main()
{
    menu();

    return 0;    
}

