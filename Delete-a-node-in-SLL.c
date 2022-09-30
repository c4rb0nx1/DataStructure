//Write a program to delete a node in the singly linked list ( Data Structure using C_Week 1_Challenge Yourself_Singly linked list )
#include "stdio.h"
#include "stdlib.h"

struct node
{
  int data;
  struct node *next;
  struct node *pre;
}*t,*h,*n,*p;

int c=0,a,m,f=0,get;


void prejoin()
{
    int ele=0;
    scanf("%d",&ele);
    t=h;
    while(t->next!=NULL)
    {
        p=t->next;
        p->pre=t;
        t=t->next;
    }
    if(p->next==NULL)     
    {
        while(p->pre!=NULL)
        {
            if(ele!=p->data)
            {
                printf("%d ",p->data);     // here is where ele is printed
                p=p->pre;
            }
            else
            {
                p=p->pre;
            }
        }
        printf("%d",p->data);
    }
    
}
int main()
{
  scanf("%d",&get);
  while(c!=get)
  {
      c++;
      n=(struct node*)malloc(sizeof(struct node));
      scanf("%d",&n->data);
      n->next=NULL;
      n->pre=NULL;
      if(f==0)
      {
        h=n;
        t=n;
        f=1;
      }
      else
      {
        while (t->next!=NULL)
        {
          t=t->next;
        }
        t->next=n;
      }
    }
    prejoin();
  }
