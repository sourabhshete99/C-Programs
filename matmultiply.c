// c program to multiply two given matrices

#include<stdio.h>
#include<stdlib.h>

int main()
{   int a,b,c,d,i,j;
    printf("\n\t Enter rows and columns for matrix 1 \n");
    scanf("%d %d",&a,&b);
    printf("\n\t Enter rows and columns for matrix 2 \n");
    scanf("%d %d",&c,&d);

    if(b!=c)
    {   printf("\n\t Cannot multiply such matrix\n\n");
        exit(0);
    }
    else
    {   
		// get matrices and their elements
		int a1[a][b],a2[c][d];
        printf("\n\t Enter elements for matrix 1\n");
        for(i=0;i<a;i++)
        {   for(j=0;j<b;j++)
            {   scanf("%d",&a1[i][j]);
            }
        }
        printf("\n\t Enter elements for matrix 2\n");
        for(i=0;i<c;i++)
        {   for(j=0;j<d;j++)
            {   scanf("%d",&a2[i][j]);
            }
        }
 
		// multiplying both matrices 
        int sum=0,ans[a][d],k;
        for(i=0;i<a;i++)
        {   
        	for(j=0;j<d;j++)
            {   
            	for(k=0;k<c;k++)
            	{	sum+= a1[i][k] * a2[k][j];
            	}
               	ans[i][j]=sum;
               	sum=0;
            }
        }

		// displaying output
        for(i=0;i<a;i++)
        {   for(j=0;j<d;j++)
            {   printf("\t %d",ans[i][j]);
            }
            printf("\n");
        }

    }
}
