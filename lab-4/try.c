#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

    int pid = fork();
    if (pid > 0)
    {
        printf("in parent process...%d\n", getpid());
    }
    else if (pid == 0)
    {
        sleep(30);
        printf("in child process....%d\n", getpid());
    }

    return 0;
}