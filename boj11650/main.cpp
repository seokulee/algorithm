#include <iostream>
#include <algorithm>

typedef struct {
    int x;
    int y;
}Point;

bool cmp(Point p1, Point p2) {
    if (p1.x < p2.x)
        return true;
    else if (p1.x == p2.x)
        if (p1.y < p2.y)
            return true;
    return false;
}
int main() {
    int num_of_p;

    std::cin >> num_of_p;
    Point *points = new Point[num_of_p];
    for (int i = 0; i < num_of_p; ++i) {
        std::cin >> points[i].x >> points[i].y;
    }
    std::sort(points, points + num_of_p, cmp);
    for (int i = 0; i < num_of_p; ++i) {
        std::cout << points[i].x << ' ' << points[i].y << "\n";
    }
    delete[] points;
    return 0;
}
