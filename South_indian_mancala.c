//just trying to build a game named "south indian mancala"  in c.
//CAUTION: This code might look stupid....pls bare with me untill i become pro. 
#include <stdio.h>

//  sip - seeds in pit --------> int
// lsp - left side pit -------->array
// right side pit      -------->array

struct board
{
    int sip;
}lsp[5],rsp[5];

int setdefault()
{
    //setting default pit value to 5
    for(int i=0;i<5;i++)
    {
        lsp[i].sip=5;
        rsp[i].sip=5;
    }
}

int display()
{
    int i;
    printf("|----A-----|\n");
    for(i=0;i<2;i++)
    {
        if(i==1){printf("|----------|\n");}
        for(int j=0;j<5;j++)
        {
            if(i==0)
            {
                if(j==0){printf("|");}
                printf("%d ",lsp[j].sip);
                if(j==4){printf("|");}
            }
            else
            {
                if(j==0){printf("|");}
                printf("%d ",rsp[j].sip);
                if(j==4){printf("|");}
            }
        }
        printf("\n");
    }
    printf("|----B-----|\n");
}


int main()
{
    int i;
    setdefault();
    display();
    return 0;
}
