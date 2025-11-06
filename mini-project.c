#include <stdio.h>

int main() {
    int age;
    char citizen;

    printf("=== Voting Eligibility Checker ===\n\n");

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you an Indian citizen? (Y/N): ");
    scanf(" %c", &citizen);

    if (age >= 18 && (citizen == 'Y' || citizen == 'y')) {
        printf("\n You are eligible to vote in India.\n");
    } else if (age < 18 && (citizen == 'Y' || citizen == 'y')) {
        printf("\n You are not eligible to vote. You must be 18 or older.\n");
    } else {
        printf("\n You are not eligible to vote in India (citizenship required).\n");
    }

    printf("\nThank you for using the Voting Eligibility Checker!\n");
    return 0;
}

