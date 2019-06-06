#include <windows.h>
#include <string.h>

void mgotoxy(int x, int y) {
    COORD p={x, y};
    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, p);
}

void define_cor(int x) {
    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, x);
}

void window(int alt, int larg) {
    char c_alt[5], c_larg[5], temp[30], code[50];
    itoa (c_alt, alt, 10);
    itoa (c_larg, larg, 10);
    strcpy (code, "MODE con cols=");
}

void hide_cursor() {
    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(hConsole, &info);
}
