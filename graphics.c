void arvore(int x, int y) {
    int cont, cont2, z=1, w=0, x_temp, y_temp, base;
    base=15;
    x_temp=x;
    y_temp=y;
    define_cor (10);
    for (cont2=0; cont2<(base/2)+1; cont2++) {
        mgotoxy (x_temp, y_temp+(base/2));
        for (cont=0; cont<z; cont++) {
            printf (" ");
        }
        for (cont=0; cont<base-w; cont++) {
            printf ("%c", 178);
        }
        z++;
        w+=2;
        y_temp--;
    }
    define_cor (102);

    x_temp=x+(base/2);
    y_temp=y+(base/2)+1;
    for (cont2=0; cont2<2; cont2++) {
        for (cont=0; cont<(base/5); cont++) {
            mgotoxy (x_temp, y_temp);
            printf (" ", 219);
            x_temp++;
        }
        y_temp++;
        x_temp=x+(base/2);
    }
    define_cor (7);
}

void chao(int window_larg) {
    mgotoxy (0, 12);
    int cont;
    define_cor (15);
    for (cont=0; cont<12; cont++) {
        printf ("%c", 220);
    }
    mgotoxy (15, 12);
    for (cont=0; cont<window_larg-15; cont++) {
        printf ("%c", 220);
    }
    define_cor (255);
    mgotoxy (0, 13);
    for (cont=0; cont<window_larg; cont++)
        printf (" ");
    define_cor (7);
}


void feliz_natal() {
    define_cor (12);
    mgotoxy (40, 3);
        printf ("%c%c%c%c%c %c%c%c%c%c %c%c    %c%c %c%c%c%c%c     %c%c%c   %c%c%c  %c%c%c%c%c%c  %c%c%c  %c%c" ,219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
    mgotoxy (40, 4);
        printf ("%c%c%c%c%c %c%c%c%c%c %c%c    %c%c %c%c%c%c%c     %c%c%c   %c%c%c  %c%c%c%c%c%c  %c%c%c  %c%c" ,219);
    mgotoxy (40, 5);
        printf ("%c%c    %c%c    %c%c    %c%c   %c%c%c    %c%c %c%c %c%c %c%c   %c%c   %c%c %c%c %c%c" ,219);
    mgotoxy (40, 6);
        printf ("%c%c%c   %c%c%c   %c%c    %c%c  %c%c%c     %c%c %c%c %c%c %c%c   %c%c   %c%c %c%c %c%c" ,219);
    mgotoxy (40, 7);
        printf ("%c%c%c   %c%c    %c%c    %c%c %c%c%c      %c%c %c%c %c%c%c%c%c   %c%c   %c%c%c%c%c %c%c" ,219);
    mgotoxy (40, 8);
        printf ("%c%c    %c%c%c%c%c %c%c%c%c%c %c%c %c%c%c%c%c    %c%c %c%c %c%c%c%c%c   %c%c   %c%c%c%c%c %c%c%c%c%c"  ,219);
    mgotoxy (40, 9);
        printf ("%c%c    %c%c%c%c%c %c%c%c%c%c %c%c %c%c%c%c%c    %c%c %c%c %c%c %c%c   %c%c   %c%c %c%c %c%c%c%c%c" ,219);
    define_cor (7);
}
