#include <stdio.h>

int main()
{
    int T, size;
    char S[100];
    scanf("%d",&T);
    for(int i=1; i<=T ; i++)
    {
    int count =0;
    scanf("%s",&S);
    int size = sizeof(S);
    printf("%d",size);
    
    /*
   
        if(S[0]==1)
        {
        
        for(int j=0; j<=size; j++)
        {
        if(S[j]==0)
        {
        S[j]=1;
        }
        }
        }
        else if(S[0]==0)
        {
        int size = sizeof(S);
        for(int j=0; j<=size; j++)
        {
        if(S[j]==1)
        {
        S[j]=0;
        }
        }
        }
        printf("%s\n",S); */
    }
    return 0;
}
