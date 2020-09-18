// to create a sparse matrix from given 5*4 matrix

#include<stdio.h>

int main()
{
    int i,j,n=0,arr[5][4];
    
    printf("\n\t Enter elements of matrix (5 * 4):-");
    for(i=0;i<5;i++)
    {   for(j=0;j<4;j++)
        {   scanf("%d",&arr[i][j]);
                if(arr[i][j]!=0)
                    n++;
        }
    }
    printf("\n\tnon zero no are :- %d \n",n);

    int spar[n][3],x=0,y=0,s=-1,num;
    
    for(i=0;i<5;i++)
    {   
        for(j=0;j<4;j++)
        {   if(arr[i][j]!=0)
            {   x=i;
                y=j;
                s++;
                num=arr[i][j];
                spar[s][0]=x;   spar[s][1]=y;   spar[s][2]=num;
            }
        }
   //    s++;
    }

    printf("\n\t Sparse Matrix is :- \n\n\t 5 \t\t 4 \t\t %d ",n);
    for(i=0;i<n;i++)
    {   printf("\n");
           for(j=0;j<3;j++)
        {   printf("\t %d \t",spar[i][j]);

        }   
    }
}
/*
    printf("\n----------\n\n\t Transpose of this Sparse Matrix:- \n");
    for(j=0;j<3;j++)
    {   printf("\n");
           for(i=0;i<n;i++)
        {   printf("\t %d \t",spar[j][i]);

        }   
    }
*/

