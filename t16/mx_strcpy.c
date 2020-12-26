#include <stdio.h>

char *mx_strcpy(char *dst, const char *src) {
    for (int i = 0; src[i] != '\0'; i++)
        dst[i] = src[i];
    return dst;
}

//int main() {
//    char dst[20];
//    char *src = "Hello World!";
//    printf("%s\n", mx_strcpy(dst, src));
//}
