#include <stdio.h>

int main() {
    int length, breadth;

    printf("Enter length: ");
    scanf_s("%d", &length);
    printf("Enter breadth: ");
    scanf_s("%d", &breadth);

    // 輸出長方形
    for (int i = 1; i <= length; ++i) {
        for (int j = 1; j <= breadth; ++j) {
            // 
            if (i == 1 || i == length || j == 1 || j == breadth) {
                printf("+");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}