#include <stdio.h>
#include <unistd.h>

int neo;
int num;
int one;
int pin;

void evenorodd() {
    printf("Type a number to check if it is Even or Odd: ");
    if (scanf("%d", &neo) != 1) {  // ইনপুট চেক করা
        printf("Failed to read integer.\n");
        return;
    }
    if (neo % 2 == 0) {  // শর্ত ঠিক করা হয়েছে
        printf("You entered an even number.\n");
    } else {
        printf("You entered an odd number.\n");
    }
}

void namota() {
    printf("Enter a number for namota: ");  // সেমিকোলন যুক্ত করা হয়েছে
    if (scanf("%d", &num) != 1) {  // ইনপুট চেক করা
        printf("Failed to read integer.\n");
        return;
    }
    for (int i = 1; i <= 10; i++) {  // লুপ ব্যবহার করে গুণফল দেখানো হয়েছে
        printf("%d x %d = %d\n", num, i, num * i);
        sleep(1);
    }
}

void enterface() {
    printf("Enter Your Password To Open This Tools: ");
    if (scanf("%d", &pin) != 1) {  // ইনপুট চেক করা
        printf("Failed to read integer.\n");
        return;
    }
    if (pin == 54627) {
        printf("Your Password Is Correct!\n");
        printf(" __________________________________ \n");
        printf("#        Welcome To My Tools        #\n");
        printf("#__________________________________ #\n");
        printf("1. Even or Odd number checker.\n");
        printf("2. Namota maker.\n");
        printf("Choose an option (1 or 2): ");
        if (scanf("%d", &one) != 1) {  // ইনপুট চেক করা
            printf("Failed to read integer.\n");
            return;
        }
        if (one == 1) {
            evenorodd();
        } else if (one == 2) {
            namota();
        } else {
            printf("Invalid option selected.\n");
        }
    } else {
        printf("Your PIN Is Wrong.\n");  // else if থেকে else করা হয়েছে
    }
}

int main() {
    enterface();
    return 0;
}
