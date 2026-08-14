#include<iostream>
using namespace std;
// Wap to find of first and last digit , all digit , palindrom number ,arnstong number magic number:

int main(){
    int i=1,first_num,last_num,num;
    cin >> num;
    last_num = num % 10;
    while (first_num >=10)
    {
        first_num = first_num / 10;
    }
    cout << "First Number :" << first_num << endl;
    cout << "Last Number :" << last_num << endl;
}