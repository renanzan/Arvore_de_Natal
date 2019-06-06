#include <stdio.h>

#include "header.h"

int main() {
    system ("MODE con cols=120 lines=14");
    system ("title FELIZ NATAL :D");
    hide_cursor();
    arvore (5, 3);
    chao (120);
    feliz_natal();
    pisca_pisca ();
    mgotoxy (0, 25);
    getch();
}
