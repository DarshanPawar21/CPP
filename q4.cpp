#include<iostream>
using namespace std;

// Wap to find sum of 1 to using all loop:
int main(){
    int i=1,num,sum=0;
    cin >> num;
    // while Loop
    while (i<=num)
    {
        sum = sum + i;
        i++;
    }
    cout << sum;
    return 0;

    //Do...while Loop
    do
    {
        sum = sum + i;
        i++;
    } while (i<=num);
      
    //For Loop
    for(i;i<=num;i++){
        sum = sum + i;
    }
    
};