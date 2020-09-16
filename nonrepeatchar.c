// from given string find out first non repeating element in c

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main()
{   char s[50];	
	printf(" \n\t Enter a string : \n\t");
	scanf("%s", &s);
    int n=strlen(s);
    int count,i,j;

    for(i=0;i<n;i++)
    {   count=0;
        for(j=0;j<n;j++)
        {   if(s[j]==s[i])
            {   count++;    
            }
        }
        if(count==1)
        {    printf("\n\t First non repeating element is :  %c  \n\n",s[i]);
            exit(0);
        }
    }
    printf("\n\t No repeating element found \n\n");
}
