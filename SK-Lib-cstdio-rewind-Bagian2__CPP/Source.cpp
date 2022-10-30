#pragma warning(disable:4996)

#include <cstdio>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    int c;
    FILE* fp;
    fp = fopen("file.txt", "r");

    if (fp) {
        while ((c = getc(fp)) != EOF) {
            putchar(c);
        }
            
        rewind(fp);
        putchar('\n');

        while ((c = getc(fp)) != EOF) {
            putchar(c);
        }
    }

    fclose(fp);
    return 0;
}