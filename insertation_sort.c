#include <stdio.h>

// Function to perform Insertion Sort on an array of cards
void insertionSort(int cards[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = cards[i];
        j = i - 1;

        // Move elements of cards[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && cards[j] > key) {
            cards[j + 1] = cards[j];
            j = j - 1;
        }
        cards[j + 1] = key;
    }
}

int main() {
    int hand[] = {5, 10, 2, 9, 3}; // Example hand of cards (values represented as integers)
    int handSize = sizeof(hand) / sizeof(hand[0]);

    printf("Unsorted hand of cards: ");
    for (int i = 0; i < handSize; i++) {
        printf("%d ", hand[i]);
    }
    printf("\n");

    insertionSort(hand, handSize);

    printf("Sorted hand of cards: ");
    for (int i = 0; i < handSize; i++) {
        printf("%d ", hand[i]);
    }
    printf("\n");

    return 0;
}