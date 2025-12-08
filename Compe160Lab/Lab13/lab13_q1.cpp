#include <iostream>
using namespace std;

#define MAKE_VECTOR2D(type) struct Vector2D {type x; type y;};

MAKE_VECTOR2D(double)

int main()
{
    Vector2D v;
    v.x = 4.2;
    v.y = 7.1;

    cout << v.x << " " << v.y << "\n";
}
