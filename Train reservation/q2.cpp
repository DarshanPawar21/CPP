#include <iostream>
#include <string>
using namespace std;

class Train {
private:
    int train_number;
    string train_name;
    string source;
    string destination;
    string train_time;

    static int trainCount;

public:
    void train() {

        cout << "Enter Train Number: ";
        cin >> train_number;

        cout << "Enter Train Name: ";
        cin >> train_name;

        cout << "Enter Source: ";
        cin >> source;

        cout << "Enter Destination: ";
        cin >> destination;

        cout << "Enter Train Time: ";
        cin >> train_time;

        trainCount++;
    }
    void getdatatrain() {

        cout << "\nTrain Number : " << train_number << endl;
        cout << "Train Name : " << train_name << endl;
        cout << "Source : " << source << endl;
        cout << "Destination : " << destination << endl;
        cout << "Train Time : " << train_time << endl;
    }
    
    int gettrainnumber(){
    	return train_number;
	}
	
    static int getTrainCount() {
        return trainCount;
    }
};


int Train::trainCount = 0;

int main() {

    Train t[100];
    int count = 0;
    int choice;
    
    do{
    	cout << "\n\n====Train System !====\n";
    	cout << "\n1. Add Train";
    	cout << "\n2. Show All Train";
    	cout << "\n3.Search Train";
    	cout << "\n4. Exit";
    	cin >> choice;
    	
    	if(choice == 1){
    		t[count].train();
    		count++;
    		
    		cout <<"\n Train Add Successfuly !";
		}
		else if(choice == 2){
			for(int i = 0; i<count;i++){
				t[i].getdatatrain();
			}
		}
		else if(choice == 3){
			int Train_number = 0;
			cout << "\nEnter the Search train Number :";
			cin >> Train_number;
			for(int i = 0; i < count; i++){
				
				if(t[i].gettrainnumber() == Train_number){
					t[i].getdatatrain();
					break;
				}
			}
		}
		else if(choice == 4){
			cout << "Thank You !";
		}
	}while(choice != 4);
    cout << "\nTotal Train : "<< Train::getTrainCount();

    return 0;
}
