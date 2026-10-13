#include <string.h>
#include <stdio.h>
int main(void) {
    char a1[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64";
    printf("%s\n", a1);
    printf("STRLEN: %d\n", strlen(a1));
    printf("SIZEOF: %d\n", sizeof(a1));
    return 0;
}