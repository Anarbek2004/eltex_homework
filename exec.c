#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
    printf("PID: %d\n", getpid());
    sleep(1);
    if (argc > 1) { // Proverka na peredachu argv
        // Podgotovka argv dlay execvp
        char *new_argv[3];
        new_argv[0] = argv[0]; // Name progi
        new_argv[1] = argv[1]; // Transmitted message
        new_argv[2] = NULL;
        execvp(argv[0], new_argv);
        perror("error execvp");
        return 1;
    } else {
        char *new_argv[2];
        new_argv[0] = argv[0];
        new_argv[1] ="hello world";
        new_argv[2] = NULL;
        execvp(argv[0], new_argv);
        perror("error execvp");
        return 1;
    }
    return 0;
}
