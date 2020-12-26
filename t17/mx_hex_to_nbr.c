#include <stdio.h>

static int str_len(const char *s) {
    int i = 0;

    while (s[i])
        i++;
    return i;
}

unsigned long mx_hex_to_nbr(const char *hex) {
    int len = str_len(hex);
    unsigned long val = 0;
    unsigned long base = 1;

    for (int i = len; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            val += (hex[i] - 48) * base;
            base = base * 16;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'Z') {
            val += (hex[i] - 55) * base;
            base = base * 16;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'z') {
            val += (hex[i] - 87) * base;
            base = base * 16;
        }
    }
    return val;
}

//int main() {
//    printf("%lu\n", mx_hex_to_nbr("C4"));
//    printf("%lu\n", mx_hex_to_nbr("FADE"));
//    printf("%lu", mx_hex_to_nbr("ffffffffffff"));
//}
