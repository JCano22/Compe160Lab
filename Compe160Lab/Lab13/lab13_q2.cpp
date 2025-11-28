#include <iostream>
using namespace std;

#define SWAP_EDGES(arr, n, type){type temp = arr[0]; arr[0] = arr[n - 1]; arr[n - 1] = temp; };

int main()
{
    int a[6] = {10, 20, 30, 40, 50, 60};

    SWAP_EDGES(a, 6, int)

    for(int i = 0; i < 6; i ++)
    {
        cout << a[i] << " ";
    }
    return 0;
}