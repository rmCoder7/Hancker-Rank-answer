#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 

    // Check if you can buy Punjabi
    if (N >= 1000) {
        printf("I will buy Punjabi\n");
        N -= 1000;
    } else {
        printf("Bad luck!\n");
        return 0;
    }


    if (N >= 500) {
        printf("I will buy new shoes\n");
        printf("Alisa will buy new shoes\n");
    }

    return 0;
}