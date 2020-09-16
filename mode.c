// to find mode of given array with int elements
// there are various diff solutions over this, but I've done the solution which can be understood by anybody out there.

#include<stdio.h>

main()
{   int a[10],n,i,k,j,f1,f2=0,max,mod;

    printf("\n\t Random numbers are :- \t\n\n");
    for(i=0;i<10;i++)
    {
    a[i]=rand()%100;
    printf("\n\t %d ",a[i]);    
    }    
    printf("\n\n",n);


    //here I've made another array 'b' without duplicate elements
    int b[10];
    for(i=0;i<10;i++)
    {   f1=0;

       for(j=0;j<10;j++)
        {   if(a[i]==b[j])
                f1++;
        }

        if(f1==0)
        {   b[f2]=a[i];
            f2++;
        }
    }

    //here I've checked that each element of b ocurs for how many times in array 'a'
    //count is set for the same, the element for which the count is max - is the mode 
    for(i=0;i<10;i++)
    {  f1=0;
       max=1;
       //mod=b[i];
       for(j=0;j<10;j++)
        {   if(b[i]==a[j])
            f1++;    
        }

        if(max<f1)
        {   max=f1;
            mod=b[i];
        }     
            
        if(f1==0)
        {   printf("\n\t Mode is : \t %d \n\n",mod);
            exit(0);    
        }
    }
}
