//Write a C program to count total number of notes in given amount.
#include <stdio.h>
int main() {
    int amount, originalAmount;
    int notes2000, notes500, notes200, notes100, notes50, notes20, notes10, notes5, notes2, notes1;

    // Initialize note counters to 0
    notes2000 = notes500 = notes200 = notes100 = notes50 = notes20 = notes10 = notes5 = notes2 = notes1 = 0;

    printf("Enter the amount: ");
    scanf("%d", &amount);
    originalAmount = amount;

    // Calculate number of 2000 rupee notes
    if (amount >= 2000) {
        notes2000 = amount / 2000;
        amount %= 2000;
    }

    // Calculate number of 500 rupee notes
    if (amount >= 500) {
        notes500 = amount / 500;
        amount %= 500;
    }

    // Calculate number of 200 rupee notes
    if (amount >= 200) {
        notes200 = amount / 200;
        amount %= 200;
    }

    // Calculate number of 100 rupee notes
    if (amount >= 100) {
        notes100 = amount / 100;
        amount %= 100;
    }

    // Calculate number of 50 rupee notes
    if (amount >= 50) {
        notes50 = amount / 50;
        amount %= 50;
    }

    // Calculate number of 20 rupee notes
    if (amount >= 20) {
        notes20 = amount / 20;
        amount %= 20;
    }

    // Calculate number of 10 rupee notes
    if (amount >= 10) {
        notes10 = amount / 10;
        amount %= 10;
    }

    // Calculate number of 5 rupee notes
    if (amount >= 5) {
        notes5 = amount / 5;
        amount %= 5;
    }

    // Calculate number of 2 rupee coins
    if (amount >= 2) {
        notes2 = amount / 2;
        amount %= 2;
    }

    // Calculate number of 1 rupee coins
    if (amount >= 1) {
        notes1 = amount / 1;
        amount %= 1;
    }

    // Print the results
    printf("Total number of notes/coins in %d:\n", originalAmount);
    printf("2000 rupee notes: %d\n", notes2000);
    printf("500 rupee notes: %d\n", notes500);
    printf("200 rupee notes: %d\n", notes200); 
    printf("100 rupee notes: %d\n", notes100);
    printf("50 rupee notes: %d\n", notes50);
    printf("20 rupee notes: %d\n", notes20);
    printf("10 rupee notes: %d\n", notes10);
    printf("5 rupee notes: %d\n", notes5);
    printf("2 rupee coins: %d\n", notes2);
    printf("1 rupee coins: %d\n", notes1);
    return 0;
}
