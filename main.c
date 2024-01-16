#include <stdio.h>

int main() {
    int n;

    // Prompt the user to enter the value of n
    printf("Enter the value of n: ");
    // Read user input and store it in the variable n
    scanf("%d", &n);

    // Print the cubes up to the nth term
    printf("Cubes up to %dth term:\n", n);

    for (int i = 1; i <= n; i++) {
        // Print the cube of the current value of i followed by a newline
        printf("%d\n", i * i * i);
    }

    // Indicate successful execution to the operating system
    return 0;
}
