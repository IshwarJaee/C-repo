#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    node *Next;
    node *Prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class Doubly_linkedList
{
    private:
        PNODE Head;
    public:
        Doubly_linkedList();
       ~Doubly_linkedList();
       BOOL InsertFirst(int);
       BOOL InsertLast(int);
       BOOL InsertAtPosition(int ,int);
       inline void Display();
       inline int Count();
       BOOL DeleteFirst();
       BOOL DeleteAtPosition(int);
       BOOL DeleteLast();     
};

Doubly_linkedList::Doubly_linkedList()
{
    Head=NULL;
}
Doubly_linkedList::~Doubly_linkedList()
{
    PNODE Temp=Head;

    if(Head!=NULL)
    {
        while(Head!=NULL)
        {
            Head=Head->Next;
            delete Temp;
            Temp=Head;
        }
    }
}

BOOL Doubly_linkedList::InsertFirst(int no)
{
    PNODE newn=NULL;

    newn=new NODE;
    if(newn==NULL)
    {
        return FALSE;
    }

    newn->Next=NULL;
    newn->Prev=NULL;
    newn->Data=no;

    if(Head!=NULL)
    {
        Head=newn;
    }
    else
    {
        Head->Prev=newn;
        newn->Next=Head;
        Head=newn;
    }
    return TRUE;
}

BOOL Doubly_linkedList::InsertLast(int no)
{
    PNODE newn=NULL,temp=Head;
    newn=new NODE;

    if(newn==NULL)
    {
        return FALSE;
    }
    newn->Next=NULL;
    newn->Perv=NULL;
    newn->Data=no;

    if(Head==NULL)
    {
        Head=newn;
    }
    else
    {
        while(temp->Next!=NULL)
        {
            temp=temp->Next;
        }
        temp->Next=newn;
        newn->Perv=temp;
    }
    return TRUE;
}

BOOL Doubly_linkedList::InsertAtPosition(it no,int pos)
{
    if((Head==NULL)||(pos>Count()+1)||(pos<=0))
    {
        return FALSE;
    }
    if(pos==1)
    {
        return(InsertFirst(no));
    }
    else if(pos==(Count())+1)
    {
        //131
    }
}