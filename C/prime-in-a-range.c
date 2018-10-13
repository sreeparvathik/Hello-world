#include <stdio.h>

int main()
{
    int i,j,lowerbound,upperbound,flag;
    printf("Enter range");
    scanf("%d %d",&lowerbound,&upperbound);
    for(j=lowerbound;j<=upperbound;j++)
    {   flag=1;
        for(i=2;i<j;i++)
        {
            if(j%i==0)
            {
             flag=0;break;   
            }
        }
        if(flag==1)
        printf("%d ",j);
        
    }
    return 0;
}
