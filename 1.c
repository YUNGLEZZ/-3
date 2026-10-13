#include <string.h>
#include <stdio.h>
int main(void) {
    char a[20] = "SibSUTIS";
    printf("SIZEOF: %d\n", sizeof(a));
    printf("STRLEN: %d\n", strlen(a));
    printf("FREE_BYTES: %d\n", sizeof(a)-strlen(a)-1);
    return 0;
}