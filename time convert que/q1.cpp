#include<iostream>
#include<conio.h>
using namespace std;

class timeconvert{
    public:
        void convertToformat(){
            int totalseconds;
            cout<<"Enter total seconds: ";
            cin>>totalseconds;

            int hours = totalseconds / 3600;
            int remainingseconds = totalseconds % 3600;
            int minutes = remainingseconds / 60;
            int seconds = remainingseconds % 60;

            cout<<"Time in HH:MM:SS format: "<<hours<<":"<<minutes<<":"<<seconds<<endl;
        }

        void convertTosecond(){
            int hours,minutes,seconds;
            cout<<"Enter hours: ";
            cin>>hours;
            cout<<"Enter minutes: ";
            cin>>minutes;
            cout<<"Enter seconds: ";
            cin>>seconds;
            int totalSecond = (hours*3600) + (minutes*60) + seconds;
            cout<<"Total seconds: "<<totalSecond<<endl;
        }
};

int main(){
    timeconvert tc;
    tc.convertToformat();
    tc.convertTosecond();
    return 0;
};