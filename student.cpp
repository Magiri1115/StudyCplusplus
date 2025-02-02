#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point p1 = {10, 20};
    std::cout << "p1.x = " << p1.x << ", p1.y = " << p1.y << std::endl;
    return 0;
}
