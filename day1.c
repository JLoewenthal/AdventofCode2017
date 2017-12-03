#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (int argc, char* argv[]) {
    char* input;
    int currentNumber = 0;
    long numA = 0;
    long numB = 0;
    int inputLength = 0;
    int sum = 0;
    char* err;

    input = argv[1];
    currentNumber = 0;
    inputLength = strlen(input);

    for (int i = 0; i < inputLength; i++) {
        numA = input[i] - '0';
        numB = input[i + 1] - '0';
        if (numA == numB) {
            sum = sum + numA;
        }
              
    }
    if ((input[0] - '0') == (input[inputLength - 1] - '0')) {
        sum = sum + (input[0] - '0');
    }
    printf("Total: %i\n", sum);
    return 0;
}
