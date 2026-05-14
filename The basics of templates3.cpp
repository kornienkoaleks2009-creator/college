#include <iostream>

struct point {
    int x;
    int y;
};

std::ostream& operator<<(std::ostream& out, const point& p)
{
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}
