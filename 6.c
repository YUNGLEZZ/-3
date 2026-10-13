#include <stdio.h>
int main(void) {
    int width;
    char a[5];
    scanf("%s %d", a, &width);
    printf("%*s\n", width, a);
    printf("%-*s\n", width + 5, a);
    return 0;
}
    