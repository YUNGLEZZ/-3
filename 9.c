#include <stdio.h>
#include <locale.h>
#include <wchar.h>
int main(void) {
    setlocale(LC_ALL, "");
    wchar_t a1[4] = {0};
    wscanf(L"%ls", a1);
    wprintf(L"Агент %ls авторизован в системе\n", a1);
    return 0;
}