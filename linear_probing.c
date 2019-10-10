#include<stdio.h>
#include<stdlib.h>
int size;
void insert(int array[])
{
	int position, key,j;
	printf("Enter a number	: ");
	scanf("%d", &key);	
	position= key% size;
	for(j=0;j<size;j++)
	{
		if(array[position]==0 || array[position]==-1)
		{
			array[position] =key;
			printf("insert successful\n") ;
			
			break;
		}
		else if(position==size-1)
		{
			position=0;
		}
		else
		{
			position++;
		} 
	}
}

void delete(int array[])
{
	int position, key,j;
	printf("Enter a number  :");
	scanf("%d", &key);	
	position=key% size;
	for(j=0;j<size;j++)
	{
		if(array[position]==key)
		{
			array[position] =-1;
			printf("delete successful\n") ;
			break;
		}
		
		 else if(position==size-1)
		{
			position=0;
		}
		else
		{
			position++;
		} 
	}	
}

void search(int array[])
{
	int position, key,j;
	printf("Enter a number  :");
	scanf("%d", &key);	
	
	position=key% size;
	for(j=0;j<size;j++)
	{
		if(array[position]==key)
		{
			printf("Searching successful\n") ;
			break;
		}
		else if(position==size-1)
		{
			position=0;
		}
		
		else
		{
			position++;
			if(array[position]==0)
			{
				printf("Value is not found\n");
				break;
			}
		} 
	}		
}



void display(int array[])
{
	int k;
	for(k=0;k<size;k++)
	{
		if(array[k]!=0)
			printf ("%d ---> %d\n",k,array[k]) ;
		else
			printf ("%d ---> \n",k) ;
	}
}

int main()
{
	int i, n;
	printf("hash table size \n") ;
	scanf("%d",&size);

	int array[size]    ;
	for(i=0; i<size;i++)
	{
		array[i]=0;	
	}

		printf("\n---Directory---\n\n");
		printf("1. Insert an element to Hash table\n");
		printf("2. Delete an element from Hash table\n");
		printf("3. Search an element in Hash table\n");
		printf("4. Display Hash table\n");
		printf("5. Exit from here\n");

	while(1)
	{
	
		printf("\nEnter your choice   :")  ;
		scanf("%d",&n)  ;
	
		switch(n)
		{
			case 1: insert(array);
					break;	
	
			case 2: delete(array);
					break;
		
			case 3: search(array);
					break;
			
			case 4: display(array);
					break;
	
			case 5: exit(0);
					break;
			default: 
					printf("Enter valid choice\n");	
					break;
		}	
	}
	
	 

}
