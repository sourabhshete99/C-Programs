//Excel Column name to column number(no any method, just going through the name and incrementing col number accordingly)

#include<stdio.h>
#include<string.h>

int check(char ch)
{	if(ch=='A')
		return 1;
	if(ch=='B')
		return 2;
	if(ch=='C')
		return 3;
	if(ch=='D')
		return 4;
	if(ch=='E')
		return 5;
	if(ch=='F')
		return 6;
	if(ch=='G')
		return 7;
	if(ch=='H')
		return 8;
	if(ch=='I')
		return 9;
	if(ch=='J')
		return 10;
	if(ch=='K')
		return 11;
	if(ch=='L')
		return 12;
	if(ch=='M')
		return 13;
	if(ch=='N')
		return 14;
	if(ch=='O')
		return 15;
	if(ch=='P')
		return 16;
	if(ch=='Q')
		return 17;
	if(ch=='R')
		return 18;
	if(ch=='S')
		return 19;
	if(ch=='T')
		return 20;
	if(ch=='U')
		return 21;
	if(ch=='V')
		return 22;
	if(ch=='W')
		return 23;
	if(ch=='X')
		return 24;
	if(ch=='Y')
		return 25;
	if(ch=='Z')
		return 26;
}

int main()
{	char str[26];
	printf("\n\t Enter the Column :  ");
	scanf("%s",&str);
	int i=0;
	int n=strlen(str);
	str[n]=' ';
	int get,sum=0,j,k,mult,count=0;

	for(i=0;i<n;i++)
	{	get=check(str[i]);
		count=0;	

		for(j=i;j<n;j++)
		{	//printf("\n %c \n",str[j]);
			if(str[j+1]!=' ')
				count++;	
		}

		mult=1;
		for(k=1;k<=count;k++)
			mult=mult*26;	
			
		if(count!=0)
		{	sum=sum+(mult*get);
		}

		else
			sum=sum+get;	
	}
	printf("\n\n\t Column number : %d \n\n",sum);
}
