#include <stdio.h>
#include <wchar.h>
#include <string.h>
#include <locale.h>
const char A[] = "Сбой матрицы";
const wchar_t A1[] = L"Сбой матрицы";
int main(void) {
    setlocale(LC_ALL, "");
    printf("char -> sizeof: %d bytes, strlen: %d chars\n", sizeof(A), strlen(A));
    printf("wchar -> sizeof: %d bytes, strlen: %d chars\n", sizeof(A1), wcslen(A1));
    return 0;
}