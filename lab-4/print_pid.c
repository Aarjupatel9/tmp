#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
int status;
int main(int argc, char *argv[])
{
    pid_t pid=fork();
    if(pid==-1){
        perror("fork failure");
        exit(-1);
    }
    else if(pid==0){
        printf("pid in child = %d and parent = %d\n",getpid(),getppid()); 
    }
    else{
        wait(NULL);
        printf("pid in parent = %d and child_pid = %d\n",getpid(),pid);
    }

    return 0;
}