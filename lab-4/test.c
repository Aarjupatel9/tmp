// #include <stdio.h>
// #include <sys/types.h>
// #include <unistd.h>
// #include <stdlib.h>
// int main()
// {
//     fork();
//     fork();
//     printf("hello\n");

//     return 0;
// }















// int main(int argc, char *argv[])
// {
//     pid_t pid;
//     pid=fork();
//     if(pid==-1){
//         perror("fork failure");
//         exit(EXIT_FAILURE);
//     }
//     else if(pid==0){
//         printf("pid in child=%d and parent=%d\n",getpid(),getppid()); 
//     }
//     else{
//         printf("pid in parent=%d and child_pid=%d\n",getpid(),pid);
//     }

//     // sleep(5);
//     int status;
//     // waitpid(pid, &status, 1);

//     printf("The child exited with return code %d\n", waitpid(pid, &status, 1));
//     exit(EXIT_SUCCESS);
// }




// #include <sys/wait.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <stdio.h>


// int main(int argc, char *argv[])
// {
//     pid_t cpid, w;
//     int status;


//     cpid = fork();
//     if (cpid == -1) { perror("fork"); exit(EXIT_FAILURE); }


//     if (cpid == 0) {            /* Code executed by child */
//         printf("Child PID is %ld\n", (long) getpid());
//         sleep(50);
//         if (argc == 1)
//             pause();                    /* Wait for signals */
//         _exit(atoi(argv[1]));


//     } else {             
//         // sleep(80);      /* Code executed by parent */
//         // do {
//         //     w = waitpid(cpid, &status, WUNTRACED | WCONTINUED);
//         //     if (w == -1) { perror("waitpid"); exit(EXIT_FAILURE); }


//         //     if (WIFEXITED(status)) {
//         //         printf("exited, status=%d\n", WEXITSTATUS(status));
//         //     } else if (WIFSIGNALED(status)) {
//         //         printf("killed by signal %d\n", WTERMSIG(status));
//         //     } else if (WIFSTOPPED(status)) {
//         //         printf("stopped by signal %d\n", WSTOPSIG(status));
//         //     } else if (WIFCONTINUED(status)) {
//         //         printf("continued\n");
//         //     }
//         // } while (!WIFEXITED(status) && !WIFSIGNALED(status));
//         // exit(EXIT_SUCCESS);
//         printf("this is parent.....");
//     }
// }






// #include<stdio.h>

// int main(){

//     printf("\n\nThis is test.c process......\n\n");
//     return 0;
// }