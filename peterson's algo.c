#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
int turn;
int flag[2];
int main(void)
{

        int pid =fork();
        int x =7;
        while(x--)
        {
                if(pid==0)
                {

                     flag[0]=1;
                     turn=1;
                     while(flag[1]==1&&turn==1);
                     printf("critical section:child process\n");
                     flag[0]=0;
                }
                else
                {


                        flag[1]=1;
                        turn=0;
                        while(flag[0]&&turn==0);
                        printf("critical section:parent process  \n");
                        flag[1]=0;
                }
        }
        return 0;

}
