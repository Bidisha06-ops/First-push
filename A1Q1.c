#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 
#include <sys/types.h>
#include <sys/wait.h> // Added for wait()

int main() {
    int num;

    printf("Enter a number: "); // Input prompt
    scanf("%d", &num);

    pid_t pid = fork(); // Creation of child process

    if (pid < 0) { // Error handling for fork failure
        fprintf(stderr, "Fork failed\n");
        return 1;
    } 
    else if (pid == 0) { // Child process
        if (num % 2 == 0) {
            printf("Child process (PID: %d): Next even number is %d\n", getpid(), num + 2);
        } else {
            printf("Child process (PID: %d): Next even number is %d\n", getpid(), num + 1);
        }
    } else { // Parent process
        wait(NULL); // Parent waits for child to complete
        if (num % 2 == 0) {
            printf("Parent process (PID: %d): Next odd number is %d\n", getpid(), num + 1);
        } else {
            printf("Parent process (PID: %d): Next odd number is %d\n", getpid(), num + 2);
        }
    }

    return 0;
}
