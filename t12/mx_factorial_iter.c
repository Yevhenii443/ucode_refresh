#include <stdio.h>

int mx_factorial_iter(int n) {
    int result = 1;

    if (n > 12 || n < 0)
        return 0;
    if (n == 0)
        return 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

//int main() {
//    printf("%d", mx_factorial_iter(2));
//}
