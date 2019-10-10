#include<stdio.h>
#include<stdlib.h>
int size,size2;
void insert(int array[])
{
	int position,position1,position2, key,j;
	printf("Enter a number	: ");
	scanf("%d", &key);	
	position1= key%size;
	position2=size2-(key%size2);
	position=(position1 +0*position2) % size;
	
	for(j=0;j<size;j++)
	{
		if(array[position]==0 || array[position]==-1)
		{
			array[position] =key;
			printf("insert successful\n") ;
			printf("%d",(position1 +(j+1)*position2) );
			break;
		}
		
		else
		{
			position= (position1 +(j+1)*position2) % size;
			printf("%d",(position1 +(j+1)*position2) );
		} 
	}
}

void delet(int array[])
{
	int position,position1,position2, key,j;
	printf("Enter a number  :");
	scanf("%d", &key);	
	position1= key%size;
	position2=size2-(key%size2);
	position=(position1 +0*position2) % size;
	for(j=0;j<size;j++)
	{
		if(array[position]==key)
		{
			array[position] =-1;
			printf("delete successful\n") ;
			break;
		}
		else
		{
			position= (position1 +(j+1)*position2) % size;
		} 
	}	
}

void search(int array[])
{
	int position, position1,position2,key,j;
	printf("Enter a number  :");
	scanf("%d", &key);	
	position1= key%size;
	position2=size2-(key%size2);
	position=(position1 +0*position2) % size;
	
	for(j=0;j<size;j++)
	{
		if(array[position]==key)
		{
			printf("Searching successful\n") ;
			break;
		}
		
		else
		{
			position= (position1 +(j)*position2) % size;
			if(array[position]==0)
			{
				printf("Searching unsuccessful\n");
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
	printf("hash table 1 size :") ;
	scanf("%d",&size);
	printf("hash table 2 size :") ;
	scanf("%d",&size2);

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
	
			case 2: delet(array);
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
