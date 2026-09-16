#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;
    string address;
public:
    Person(string n, int a, string add)
    {
	this ->name = n;
    this-> age = a;
    this-> address = add;
    }

    void getdata()
    {
        cout << "Name : " << this->name << endl;
        cout << "Age : " << this->age << endl;
        cout << "Address : " << this-> address << endl << endl;
    }
};
int main()
{
    Person p1("Darshan", 20, "Ahmedabad");
    Person p2("Rahul", 21, "Surat");

    p1.getdata();
    p2.getdata();

    return 0;
}
