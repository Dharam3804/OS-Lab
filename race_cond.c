#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int i=1;
    int pid=fork();
    if(pid==0)
    {
        for(;i<=5;i++)
         printf("Child Process i = %d\n", i);
         exit(0);
    }
    else
    {
        for(;i<=5;i++)
         printf("Parent process i = %d\n", i);

    }
   return 0;
}

