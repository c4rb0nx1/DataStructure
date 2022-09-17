#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *nxt;
}*h,*n,*t;

void main(void)
{
    int a=1,b,flag=0,loc;
    while(a==1)
    {
        printf("Press 1 to create a node \nPress 2 to view the node \nPres s 3 to add a node at the at beginning \npress 4 to add the node at middle \npress 5 to add the node at the end\npress 0 to exit\n");
        scanf("%d",&b);
        switch(b)
        {
            case 1:
            {
                n=(struct node*)malloc(sizeof(struct node));
                printf("Enter the value\n");
                scanf("%d",&n->data);
                n->nxt=NULL;

                if(flag==0)
                {
                    h=n;
                    t=n;
                    flag=1;

                }
                else{
                    while(t->nxt!=NULL)
                    {
                        t=t->nxt;
                    }
                    t->nxt=n;
                }
                break;
                case 2:
                {
                    t=h;
                    while(t->nxt!=NULL)
                    {
                        printf("| %d |",t->data);
                        t=t->nxt;
                    }
                    printf("| %d |",t->data);
                    break;
                }
                case 3:
                {
                    n=(struct node*)malloc(sizeof(struct node));
                    printf("\nEnter the value\n");
                    scanf("%d",&n->data);
                    n->nxt=NULL;
                    t=n;
                    t->nxt=h;
                    h=t;
                    break;
                }
                case 4:
                {
                  n=(struct node*)malloc(sizeof(struct node));
                  printf("\nEnter the value\n");
                  scanf("%d",&n->data);
                  printf("\nEnter the previous value of your new value: \n");
                  scanf("%d",&loc);
                  n->nxt=NULL;
                  t=h;
                  while(t->data!=loc)
                  {
                    t=t->nxt;
                  }
                  n->nxt=t->nxt;
                  t->nxt=n;
                  break;

                }
                case 5:
                {
                  n=(struct node*)malloc(sizeof(struct node));
                  printf("\nEnter the value\n");
                  scanf("%d",&n->data);
                  n->nxt=NULL;
                  t=h;
                  while (t->nxt!=NULL) {
                    t=t->nxt;
                  }
                    t->nxt=n;

                  break;
                }
                case 0:
                    printf("exiting to main menu :)");
                    break;
            }
        }
        printf("\nPress 1 to continue / any other number to confirm exit! \n");
        scanf("%d",&a);
    }
    printf("exit code success!");
}
