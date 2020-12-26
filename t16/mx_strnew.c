#include <stdio.h>
#include <stdlib.h>

char *mx_strnew(const int size) {
    int i = 0;
    char *res = NULL;

    if (size < 0)
        return NULL;

    res = (char*)malloc(size * sizeof(char));
    for (i = 0; i <= size; i++)
        res[i] = '\0';
    res[i] = '\0';
    return res;
}

//int main() {
//    char *res = mx_strnew(10);
//    for (int i = 0; res[i] != '\0'; i++) {
//        printf("%c", res[i]);
//    }
//}
