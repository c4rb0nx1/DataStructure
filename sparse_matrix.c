//Sparse Matrix:
#include <stdio.h>
#include<stdlib.h>

struct node
{
    int r;
    int c;
    int data;
    struct node *nxt;
}*h,*t,*new,*t1;

int main()
{
    int a=1,n,row,col,i,j,sum1,sum2,value;
    while(a)
    {
        printf("enter 1 to create node\n");
        printf("enter 2 to add row\n");
        printf("enter 3 to add column\n");
        printf("enter 4 to display\n");
        printf("enter 5 to exit\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
               new = (struct node*)malloc(sizeof(struct node));
               printf("enter the row\n");
               scanf("%d",&row);
               new->r = row;
               printf("enter the column\n");
               scanf("%d",&col);
               new->c = col;
               printf("enter the value for matrix\n");
               scanf("%d",&value);
               new->data = value;
               new->nxt=NULL;
               
               if(h==NULL)
               {
                   h=new;
                   t=new;
               }
               else
               {
                      t->nxt = new;
                      t=new;
                  
              }
              break;
              case 2:
              i=0;
              while(i<3)
              {
                sum1 = 0;
                t = h;
                while(t!=NULL)
                {
                    if(t->r==i)
                    {
                        sum1 = sum1 + t->data;
                    }
                    t = t->nxt;
                }
                printf("sum1 = %d\n",sum1);
                i++;
              }
              break;
            case 3:
              j=0;
              while(j<3)
              {
                  
                  sum2 = 0;
                t1 = h;
                while(t1!=NULL)
                {
                    if(t1->c==j)
                    {
                        sum2 = sum2 + t1->data;
                    }
                    t1 = t1->nxt;
                }
                printf("sum2 = %d\n",sum2);
                j++;
              }
              break;
            case 4:
              if(h==NULL)
              {
                  printf("List is empty\n");
              }
              else
              {
                  t=h;
                  while(t!=NULL)
                  {
                      printf("%d -->",t->data);
                      t=t->nxt;
                  }
                  printf("\n");
              }
              break;
            case 5:
              a = 0;
              break;
            default :
              printf("enter rght choice\n");
              break;
        }
        
    }
}
