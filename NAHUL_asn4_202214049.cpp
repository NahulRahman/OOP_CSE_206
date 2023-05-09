#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;

public:
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }
    Rectangle(const Rectangle& r) {
        width = r.width;
        height = r.height;
    }
    int getArea() const {
        return width * height;
    }
};

int main() {
    Rectangle rect1(5, 10);
    Rectangle rect2 = rect1;
    rect2 = Rectangle(rect2.getArea(), 7);
    cout << "Area of rectangle 1: " << rect1.getArea() << endl;
    cout << "Area of rectangle 2: " << rect2.getArea() << endl;
    return 0;
}
