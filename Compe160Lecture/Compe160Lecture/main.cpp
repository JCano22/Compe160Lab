#include <iostream>
using namespace std;

void ReversePath(char path[]) {
    int n;
    
    for (n = 0; path[n] != '\0'; n++);
    
    cout << n << endl;
    
    for (int j = 0; j < n / 2; j++) {
        char temp = path[j];
        path[j] = path[n - j - 1];
        path[n - j - 1] = temp;
    }

    int start = 0;
    while (start < n) {

        int end = start;
        while (end < n && path[end] != '/') {
            end++;
        }

        int left = start;
        int right = end - 1;

        while (left < right) {
            char temp = path[left];
            path[left] = path[right];
            path[right] = temp;
            left++;
            right--;
        }

        start = end + 1;
    }
}

int main() {
    char somepath[128] = "/usr/local/bin/env/";
    ReversePath(somepath);
    cout << somepath << endl;
    return 0;
}
