/*
 * In this example, the ... (range operator) is used to create ranges within case statements. However, note that this syntax is available in C99 and later versions. If you are using an older C version, you might need to use individual case statements for each value in the range.
 */

#include <stdio.h>

int main() {
    int score;

    printf("Enter your score: ");
    scanf("%d", &score);

    switch(score) {
        case 90 ... 100:
            printf("Excellent!\n");
            break;
        case 80 ... 89:
            printf("Good job!\n");
            break;
        case 70 ... 79:
            printf("Average.\n");
            break;
        case 60 ... 69:
            printf("Needs improvement.\n");
            break;
        case 0 ... 59:
            printf("Failed. Work harder.\n");
            break;
        default:
            printf("Invalid score. Please enter a valid score.\n");
    }

    return 0;
}
