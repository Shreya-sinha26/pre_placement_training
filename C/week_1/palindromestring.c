#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len;
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            printf("Not Palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
    return 0;
}
