//Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n, i, element, pos;
    int arr[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    for (pos = 0; pos < n; pos++) {
        if (arr[pos] > element)
            break;
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    n++;

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}