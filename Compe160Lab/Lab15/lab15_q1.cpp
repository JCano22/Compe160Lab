#include <cstdio>

int main() {
    // Open source file for reading
    FILE* fin = fopen("numbers.txt", "r");
    if (!fin) {
        printf("Error: cannot open numbers.txt\n");
        return 1;
    }

    // Create output file for writing
    FILE* fout = fopen("inverted.txt", "w");
    if (!fout) {
        printf("Error: cannot create inverted.txt\n");
        fclose(fin);
        return 1;
    }

    int ch;
    while ((ch = fgetc(fin)) != EOF) {

        if (ch >= '0' && ch <= '9') {
            int digit = ch - '0';
            int inverted = 9 - digit;
            fputc(inverted + '0', fout);
        } else {
            fputc(ch, fout);
        }
    }

    fclose(fin);
    fclose(fout);

    return 0;
}
