#include <windows.h>

void pisca_pisca() {
    int x=9, cont, temp1;
    temp1=30;
    for (cont=1; cont<100; cont++) {
        if (cont==1) temp1=0;
        else temp1=50;
        define_cor (x);
        mgotoxy (12, 5);
            printf ("%c", 254);
            Sleep (temp1);
        mgotoxy (15, 6);
            printf ("%c", 254);
            Sleep (temp1);
        mgotoxy (10, 7);
            printf ("%c", 254);
            Sleep (temp1);
        mgotoxy (13, 7);
            printf ("%c", 254);
            Sleep (temp1);
        mgotoxy (16, 8);
            printf ("%c", 254);
            Sleep (temp1);
        mgotoxy (8, 9);
            printf ("%c", 254);
            Sleep (temp1);
        mgotoxy (12, 9);
            printf ("%c", 254);
            Sleep (temp1);
        mgotoxy (18, 9);
            printf ("%c", 254);
            Sleep (temp1);
        Sleep (700);
        if (x==15) x=9;
        else if (x==9) x=14;
        else if (x==14) x=15;
    }
}
