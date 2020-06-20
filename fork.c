#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
int pid1=fork();
	if (pid1>0)
	{
		int pid2=fork()
		
	 	if(pid2>0	)
	 	{
	 		print("parent");
	 	elseif(pid2=0)
		 {
		 	printf("child 1");
		 	
			 }
		else
			printf("error");	
		 }
	 	
	elseif(pid1=0)
	{
	
		printf("child 2");
	}
	else
	{
		printf("error");
	}
}
