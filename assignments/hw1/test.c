#include <stdio.h>

int main() {
    char *a = "abcd";
    const char *b;
    b = a;
    *a = 'd';
    printf("%s %c", a, *b);
}
