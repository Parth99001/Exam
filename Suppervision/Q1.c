#include <stdio.h>

void main() {
 
    FILE *EVEN;
    FILE *ODD;
    EVEN = fopen("Even.txt", "w");
    ODD = fopen("Odd.txt", "w");
    for (int i = 50; i <= 70; i++) {
        if (i % 2 == 0)
            fprintf(EVEN, "%d\n", i);
        else
            fprintf(ODD, "%d\n", i);
    }
    fclose(EVEN);
    fclose(ODD);
}