#include "isOdd.h"
#include "isEven.h"

#include <stdio.h>

int main(void) {
    int num;
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    if (isOdd(num)) {
        printf("%d is odd.\n", num);
    } else {
        isEven(num);
    }
    return 0;
}
