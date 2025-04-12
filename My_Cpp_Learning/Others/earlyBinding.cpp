#include<iostream>
using namespace std;
class Shape {
public:
    void draw() {
    }
};

class Rectangle : public Shape {
public:
    void draw() {
    }
};

int main() {
    Shape* shapePtr;
    Rectangle rect;

    shapePtr = &rect;
    shapePtr->draw();       // calls Shape::draw()   (early binding)

    return 0;
}