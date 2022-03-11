#include<iostream>
using namespace std;
class node
{ public:

    int data;
    node* next;

};
int main()
{
    node *p,*q,*r;
    p->data=1;
    p->next=q;
    q->data=2;
    q->next=NULL;
    r=p;
    while(r!=NULL)
          {
              cout<<r->data;
                r=r->next;
          }

}
