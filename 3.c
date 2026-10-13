#include <stdio.h>
int main(void) {
    char i1[8];
    scanf("%s", i1);
    printf("\"%s\"\n", i1);
    printf("\"%20s\"\n", i1);
    printf("\"%-20s\"\n", i1);
    printf("\"     %s     \"\n", i1);
    return 0;
}