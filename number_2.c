#include<stdio.h>

int main() {
    int a1[2][2] = {2, 5, 2, 2};
    int a2[2][2] = {1, 2, 0, 1};
    int a3[2][2] = {0};

    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 2; j++) {

            for (int k = 0; k < 2; k++) {

                a3[i][j] += a1[i][k] * a2[k][j];
            }

        }
    }

    for (int i = 0; i < 2; i++) {

        for (int k = 0; k < 2; k++) {
            
            printf("%d", a3[i][k]);
        }
        printf("\n");
    }

    return 0;
}
