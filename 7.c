#include <string.h>
#include <stdio.h>
#define A "LinuxDistro"
const char A1[] = "2026";
int main(void) {
    printf("DISTRO: %s\n", A);
    printf("RDATE: %s\n", A1);
    printf("STRLEN: %d\n", strlen(A));
    printf("SIZEOF: %d\n", sizeof(A));
    return 0;
}