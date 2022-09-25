//Reversng a queue:
#include <stdio.h>
#include<stdlib.h>
#define size 5
int a[size];
int f = -1,r = -1,t=-1;
int enqueue(int x)
{
    if(r == size -1){
    printf("list is overflow\n");}
    else if(f==-1 && r==-1)
    {
        f=r=0;
        a[r] = x;
    }
    else{
    r++;
    a[r]=x;}
}
int dequeue()
{
    if(f==-1&&r==-1)
    printf("list is empty\n");
    else if(f==r)
    {
    return a[f];
    f=r=-1;
    }
    else
    {
    return a[f++];
    }
}
int push(int x)
{
    if(t== size-1)
    printf("list is overflow\n");
    else
    a[++t] = x;
}
int pop()
{
    if(t==-1)
    printf("list is empty\n");
    else
    return a[t--];
    
}
int main()
{
    int i,j,m,k,o;
    for(i=0;i<size;i++)
    {
        printf("\nenter the value add in queue: ");
        scanf("%d",&a[i]);
        enqueue(a[i]);
    }
    for(j=0;j<size;j++)
    {
        m = dequeue(a[j]);
        push(m);
    }
    for(k=0;k<size;k++)
    {
        o = pop(a[k]);
        printf("%d ",o);
    }
    
    
}
