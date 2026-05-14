#include <iostream>

struct point {
    int x;
    int y;
};

// Оператор виведення
std::ostream& operator<<(std::ostream& out, const point& p)
{
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}

// Оператор введення
std::istream& operator>>(std::istream& in, point& p)
{
    in >> p.x >> p.y;
    return in;
}
