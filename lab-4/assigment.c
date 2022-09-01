#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int RunBinaryFile(char *bi){
    int status;
    pid_t w;
    int pid = fork();

    if (pid == 0){
        printf("\nOutput of binary file %s\n\n",bi);
        execlp(bi,bi,NULL);
    }else if (pid > 0)
    {
        w = waitpid(pid, &status, WUNTRACED | WCONTINUED);
        if (w == -1) { 
            perror("waitpid"); exit(EXIT_FAILURE);
        }
        else{
            printf("\n\nchild succesfully finshed....\n\n");
        }
    }
    return pid;
}

int main()
{
    char *s="ps";

    int status = RunBinaryFile(s);

    printf("status : %d\n",status);
  
    return 0;
}