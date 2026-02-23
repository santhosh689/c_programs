#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    scanf("%s", str);

    int str1[10] = {0};  // initialize counts to 0

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            str1[str[i] - '0']++;
        }
    }

    for (int j = 0; j < 10; j++) {
        printf("%d ", str1[j]);
    }

    return 0;
}
