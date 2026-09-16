#include <iostream>
#include<conio.h>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
    virtual void draw() = 0;
};

class Circle : public Shape
{
    float radius;
public:
    Circle(float r)
    {
        this->radius = r;
    }

    void area()
    {
        cout << "Circle Area = " << 3.14 * radius * radius << endl;
    }

    void draw()
    {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape
{
private:
    float length, width;

public:
    Rectangle(float l, float w)
    {
        this->length = l;
       this->width = w;
    }

    void area()
    {
        cout << "Rectangle Area = " << length * width << endl;
    }

    void draw()
    {
        cout << "Drawing Rectangle" << endl;
    }
};

int main()
{
    Circle c(5);
    Rectangle r(10, 4);

    Shape *s[2];

    s[0] = &c;
    s[1] = &r;

    for(int i = 0; i < 2; i++)
    {
        s[i]->area();
        s[i]->draw();
    }

    return 0;
}
