#include <cstdio>

int main() {

    FILE* fp = fopen("text.txt", "r+");
    if (!fp) {
        printf("Error: cannot open text.txt\n");
        return 1;
    }

    char buffer[10000]; 
    int len = 0;
    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        buffer[len++] = ch;
    }

    
    fclose(fp);
    fp = fopen("text.txt", "w");   

    
    for (int i = 0; i < len; i++) {
        char c = buffer[i];

        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
            fputc('*', fp);
        } else {
            fputc(c, fp);
        }
    }

    fclose(fp);
    return 0;
}
