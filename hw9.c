#include <stdio.h>
#include <ctype.h>

int main() {
    char input[100];
    char output[100];
    int i = 0;

    printf("Input> ");
    fgets(input, sizeof(input), stdin);

    while (input[i] != '\0' && input[i] != '\n') {
        if (islower(input[i])) {
            output[i] = toupper(input[i]);
        }
        else if (isupper(input[i])) {
            output[i] = tolower(input[i]);
        }
        else {
            output[i] = input[i];
        }
        i++;
    }
    output[i] = '\0';

    printf("Output> %s\n", output);
}