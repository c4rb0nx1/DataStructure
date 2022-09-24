#include<stdio.h>
#include<string.h>
#define size 20
int top = -1;
char stack[size];

char push(char ch)
{
    if(top == (size - 1))
    {
      printf ("Stack status Overflow");
    }
    else
    {
      stack[++top] = ch;
    }
}
char pop()
{
  if(top == -1)
  {
    printf ("\nStack status: underflow");
  }
  else
  {
    return stack[top--];
  }
}
int main()
{
  char c[20];
  int i, j, l;
  printf ("\nEnter the string tobe reversed: ");
  gets (c);
  l = strlen (c);
  for(i = 0; i < l; i++)
  {
    push(c[i]);
  }
  for(j = 0; j < l; j++)
  {
    c[j] = pop();
  }
  printf ("\nString after reversing: ");
  puts (c);
}
