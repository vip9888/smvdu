#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,j,k,n;
printf("enter the number of rows you want");
scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(k=0;k<n+1-i;++k)
            {
                printf(" ");
            }


            for(j=0;j<2*i-1;j++)
            {
                printf("*");
            }

             printf("\n");

        }

return 0;
}
