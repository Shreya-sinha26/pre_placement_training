#include <stdio.h>
int main() {
    int n, i, first, second;
    scanf("%d", &n);
    if (n < 2) return 1;
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    first = second = -2147483648;
    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    if (second == -2147483648) printf("No second largest\n");
    else printf("%d\n", second);
    return 0;
}
