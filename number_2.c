#include<stdio.h>

int main() {
    int array_1[2][2] = {{2, 5},
                         {2, 2}};

    int array_2[2][2] = {{1, 2},
                         {0, 1}};

    int high_left;
    int high_right;
    int down_left;
    int down_right;

    high_left = (array_1[0][0]) * (array_2[0][0]) + (array_1[0][1]) * (array_2[1][0]);
    high_right = (array_1[0][0]) * (array_2[0][1]) + (array_1[0][1]) * (array_2[1][1]);
    down_left = (array_1[1][0]) * (array_2[0][0]) + (array_1[1][1]) * (array_2[1][0]);
    down_right = (array_1[1][0]) * (array_2[0][1]) + (array_1[1][1]) * (array_2[1][1]);

    printf("resulting matrix:\n");
    printf("%d  %d\n", high_left, high_right);
    printf("%d  %d", down_left, down_right);

    return 0;


}
