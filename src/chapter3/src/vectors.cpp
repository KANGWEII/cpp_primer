#include <iostream>
#include <vector>

struct Point
{
    int x, y;

    // Constructor to initialize data members to specific values when an object is created
    Point(int x, int y) 
        : x(x), y(y) {
        std::cout << "Point created: (" << x << ", " << y << ")" << std::endl;
    }
    
};

int main()
{
    std::vector<Point> points;

    // Create two points and add them to the vector
    Point p1 = {1, 2};
    Point p2 = {3, 4};
    points.push_back(p1);
    points.push_back(p2);

    // Create two points and add them to the vector
    points.emplace_back(5, 6);
    points.emplace_back(7, 8);
    
    for (const auto& point : points)
    {
        std::cout << "Point: (" << point.x << ", " << point.y << ")" << std::endl;
    }

    return 0;
}