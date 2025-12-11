#include <cstdio>

int main() {

    // Open file for read/write (in-place modification)
    FILE* fp = fopen("text.txt", "r+");
    if (!fp) {
        printf("Error: cannot open text.txt\n");
        return 1;
    }

    int ch;
    while ((ch = fgetc(fp)) != EOF) {

        // Check if vowel
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {

            // Move pointer back 1 byte
            fseek(fp, -1, SEEK_CUR);

            // Overwrite with '*'
            fputc('*', fp);
        }
    }

    fclose(fp);
    return 0;
}
