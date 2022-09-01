#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
  
int main(){

    pid_t cpid = fork();
  
    if (cpid > 0){
        cpid = wait(NULL);
        printf("in parent process...%d\n",getpid());
    }else if (cpid == 0){
        printf("in child process....%d\n",getpid());
        sleep(10);
    }

    return 0;
}