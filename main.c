#include<stdio.h>
int main()
{
    int num,rows,cols,count=0;
    scanf("%d",&num);
    for (rows=1;rows<=num;rows++) 
    {
        for(cols=1;cols<=num;cols++)
        {
            count++;
            if(cols==num)
            {
                printf("%d",count);
            }
            else
            {
                printf("%d*",count);
            }
        }
        printf("\n");
    }
}