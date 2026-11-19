//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int main() {
    int n, k, i;
    int arr[100];
    int windowSum = 0, maxSum;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    maxSum = windowSum;

    for (i = k; i < n; i++) {
        windowSum = windowSum - arr[i - k] + arr[i];

        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    printf("%d", maxSum);

    return 0;
}
