#include<stdio.h>

int main() {
    int array[] = {99, 88, 77, 66, 55, 44, 33, 22, 11};

    printf("array values : ");
    for (int n = 0; n <= 8; n++) {
        printf(" %d ", array[n]);
    }

    return 0;
}
