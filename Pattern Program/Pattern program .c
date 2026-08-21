#include <stdio.h>
int main()
{
    int i, j, n;

    printf("Enter no. of rows: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++) //D
        {
            if (j == 1 || i == 1 || i == n && j < n || j == n && i != 1 && i != n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf(" ");
        
        for(j = 1; j <= n; j++)  //A
        {
            if( j==3 && i == 1 ||  j==2 && i == 2 ||  j==4 && i == 2 ||  j==1 && i == 3 || j==5 && i ==3 ||  j<=5 && i==4 || j==1 && i == 5 ||  j==5 && i == 5 )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        
        printf(" ");
        
        for(j =1; j <= n; j++)  //K
        {
            if(j==1 || i == 1 && j== 5 || j == 4 && i == 2 || j == 3 && i == 3 || j == 4 && i == 4 || j == 5 && i == 5)
            {
                  printf("*");
            }
            else
            {
                  printf(" ");
            }
        }
        
         printf(" ");
         
        for(j = 1; j <= n; j++)   //S
        {
            if(i == 1 || i == 3 || i == 5 || (j == 1 && i < 3) || (j == 5 && i > 3))
            {
                printf("*");
            } 
            else 
            {
                printf(" ");
            }
        }
    
        printf(" ");
        
        for(j =1;j <= n; j++ )  //H
        {
            if(j == 1 || j == 5 || i == 3) 
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        
        printf(" ");
        
        for(j = 1; j <= n; j++)
        {
            if( j==3 && i == 1 ||  j==2 && i == 2 ||  j==4 && i == 2 ||  j==1 && i == 3 || j==5 && i ==3 ||  j<=5 && i==4 || j==1 && i == 5 ||  j==5 && i == 5 )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        
        printf(" ");
        
        for(j = 1; j <= n; j++)
        {
            if( i == 1 || j == 3 )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        
        printf(" ");
        
        for(j = 1; j <= n; j++)
        {
            if( j==3 && i == 1 ||  j==2 && i == 2 ||  j==4 && i == 2 ||  j==1 && i == 3 || j==5 && i ==3 ||  j<=5 && i==4 || j==1 && i == 5 ||  j==5 && i == 5 )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}