#include <stdio.h>

int mx_strlen(const char *s) {
    int i = 0;

    while (s[i])
        i++;
    return i;
}

//int main() {
//    printf("%d", mx_strlen("Hello World!"));
//}
