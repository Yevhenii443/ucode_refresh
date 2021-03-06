#include <stdio.h>

void mx_printchar(char);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        for (int j = 0; j < argc; j++) {
            if (mx_strcmp(argv[i], argv[j]) < 0) {
                char *temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
        }
    }
    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}
