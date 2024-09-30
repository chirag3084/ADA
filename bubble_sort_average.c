#include<stdio.h>
#include<time.h>

void bubbleSort(int n, int a[]) {
    int i, j, temp;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("sorted array :");
    for(i = 0; i < n; i++) {
        printf("%d,", a[i]);
    }
}

int main() {
    int n = 700;
    int a[n];
    int i;
    double start, end;

    for(i = 0; i < n; i++) {
        a[i] = rand() % 100;
    }

    start = clock();
    bubbleSort(n, a);
    end = clock();

    double cpu_time = (double)((end - start) / CLOCKS_PER_SEC);

    printf("\n");
    printf("cpu time :%f", cpu_time);
    return 0;
}
