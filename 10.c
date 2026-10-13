#include <stdio.h>
#include <locale.h>
#include <wchar.h>
int main(void) {
    setlocale(LC_ALL, "");
    wchar_t c[5] = {0};
    wchar_t r[8] = {0};
    wchar_t i[15] = {0}; 
    wscanf(L"%ls", c);
    wscanf(L"%ls", r);
    wscanf(L"%ls", i);
    wprintf(L"%-15ls|%20ls|%.5ls\n", c, r, i);
    return 0;
}