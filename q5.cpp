#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
    virtual void draw() = 0;
};

class Circle : public Shape
{
public:
    void area()
    {
        cout << "Circle Area" << endl;
    }

    void draw()
    {
        cout << "Circle Draw" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void area()
    {
        cout << "Rectangle Area" << endl;
    }

    void draw()
    {
        cout << "Rectangle Draw" << endl;
    }
};

int main()
{
    Circle c;
    Rectangle r;

    Shape *a = &c;
    Shape *b = &r;

    a->area();
    a->draw();

    b->area();
    b->draw();

    return 0;
}
