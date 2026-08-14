#include <iostream>
using namespace std;

class employee
{
public:
    string e_name;
    int e_no;
    string e_dep;
    int e_phone_no;

    void input(string name, int number, string department, int phone)
    {
        e_name = name;
        e_no = number;
        e_dep = department;
        e_phone_no = phone;
    }
};

int main()
{
   employee e;
    e.input("Darshan Pawar",1,"full stack",123467890);
}



class student
{
public:
    string s_name;
    int s_no;
    int s_std;
    string s_div;

    void input(string name,int roll,int std,string div)
    {
        s_name = name;
        s_no = roll;
        s_std = std;
        s_div = div;
    }
};

int main()
{
   student s;
    s.input("Darshan Pawar",1,3,"A");
}
