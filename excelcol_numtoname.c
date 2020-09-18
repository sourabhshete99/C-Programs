//Excel Column number to column name (no any method, just going through the number and incrementing col name accordingly)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{	printf("\n\t\t Enter the column number to find the column name: \t");
	char str[26]={};
	int num,n,i=0,j=0,t,flag=0,count=0;
	scanf("%d",&num);
	
	if(num>0)
	{
		str[0]='A';
	
		for(n=2;n<=num;n++)
		{	if(str[i]<'Z')
				str[i]++;
				
			else if(str[i]=='Z' && flag==0)
			{	t=i;
				count=0;

				while(t>-1 && flag==0 )
				{						
					if(str[t]=='Z' && t!=0)
					{	t--;
						count++;
					}
					else if(str[t]=='Z' && t==0)
					{	if(count==0)
						{	if(str[i]=='Z')	
							{	str[i]='A';
								i++;
								str[i]='A';
								flag=1;
							}
						}
						else if(count>0)
						{	i=count+1;
							str[i]='A';					
							while(count>=0)
							{	str[count]='A';
								count--;
							}
							flag=1;
						}
					}					
					else if(str[t]<'Z' )
					{	str[t]++;					
						str[i]='A';
						while(t!=i)
						{	t++;
							str[t]='A';						
						}
						flag=1;	
					}
				}			
			}
			flag=0;
		}		
			printf("\n\t Column name is : %s \n\n",str);
	}

	else
		printf("\n\t Cannot process the number.\n\n");
		exit(0);
}
