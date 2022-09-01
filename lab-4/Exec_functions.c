#include <stdio.h>
#include <unistd.h>

int main(void) {

    char *arg1 = "this is excel output...";
    execl("/usr/bin/echo", "echo", arg1, NULL);

    arg1 = "this is excev output...";
    char *const args[] = {"/usr/bin/echo", arg1, NULL};
    execv("/usr/bin/echo", args);

    arg1 = "/usr/bin/bash";
    // char *arg2 = "abcd";
    char *const args1[] = {"bash","-c","./test_1","echo $arg1","echo $arg2", NULL};
    char *const env1[] = {"arg1=er","arg2=xy", NULL};
    execve( arg1, args1, env1);

    arg1 = "this is excelp output...";
    execlp("echo", "echo", arg1, NULL);

    
    arg1 = "echo";
    char *const args2[] = {"echo", "Hello world!", NULL};
    execvp(arg1, args2);

    arg1 = "/usr/bin/bash";
    char *arg = "-c";
    char *arg2 = "echo $ENV1 $ENV2!";
    char *const env2[] = {"ENV1=Hello", "ENV2=World", NULL};
	
    execle(arg1, arg1,arg, arg2, NULL, env2);

    return 0;
}