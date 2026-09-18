#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
private:
    int vehicleID;
    string manufacturer, model;
    int year;

public:
    static int totalVehicles;

    Vehicle()
    {
        vehicleID = 0;
        manufacturer = "";
        model = "";
        year = 0;
    }

    Vehicle(int id, string m, string mo, int y)
    {
        this ->vehicleID = id;
        this ->manufacturer = m;
        this ->model = mo;
        this ->year = y;
        this ->totalVehicles++;
    }

    virtual ~Vehicle() {}

    // Setters
    void setVehicleID(int id)
    {
        this ->vehicleID = id;
    }

    void setManufacturer(string m)
    {
        this ->manufacturer = m;
    }

    void setModel(string mo)
    {
        this ->model = mo;
    }

    void setYear(int y)
    {
        this ->year = y;
    }

    int getVehicleID()
    {
        return vehicleID;
    }

    string getManufacturer()
    {
        return manufacturer;
    }

    string getModel()
    {
        return model;
    }

    int getYear()
    {
        return year;
    }

    virtual void input()
    {
        cout << "Enter Vehicle ID: ";
        cin >> vehicleID;

        cout << "Enter Manufacturer: ";
        cin >> manufacturer;

        cout << "Enter Model: ";
        cin >> model;

        cout << "Enter Year: ";
        cin >> year;
    }

    virtual void display()
    {
        cout << "ID: " << vehicleID << endl;
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int Vehicle::totalVehicles = 0;

class Car : public Vehicle
{
protected:
    string fuelType;

public:
    void input()
    {
        Vehicle::input();

        cout << "Enter Fuel Type: ";
        cin >> fuelType;
    }

    void display()
    {
        Vehicle::display();

        cout << "Fuel Type: " << fuelType << endl;
    }
};

class ElectricCar : public Car
{
protected:
    float batteryCapacity;

public:
    void input()
    {
        Car::input();

        cout << "Enter Battery Capacity: ";
        cin >> batteryCapacity;
    }

    void display()
    {
        Car::display();

        cout << "Battery Capacity: "
             << batteryCapacity << " kWh" << endl;
    }
};


class SportsCar : public ElectricCar
{
private:
    int topSpeed;

public:
    void input()
    {
        ElectricCar::input();

        cout << "Enter Top Speed: ";
        cin >> topSpeed;
    }

    void display()
    {
        ElectricCar::display();

        cout << "Top Speed: "
             << topSpeed << " km/h" << endl;
    }
};

class Aircraft
{
protected:
    int flightRange;

public:
    Aircraft()
    {
        flightRange = 0;
    }

    void inputAircraft()
    {
        cout << "Enter Flight Range: ";
        cin >> flightRange;
    }

    void displayAircraft()
    {
        cout << "Flight Range: "
             << flightRange << " km" << endl;
    }
};


class FlyingCar : public Car, public Aircraft
{
public:
    void input()
    {
        Car::input();
        inputAircraft();
    }

    void display()
    {
        Car::display();
        displayAircraft();
    }
};


class Sedan : public Car
{
public:
    void input()
    {
        Car::input();
    }

    void display()
    {
        Car::display();
    }
};


class SUV : public Car
{
public:
    void input()
    {
        Car::input();
    }

    void display()
    {
        Car::display();
    }
};


class VehicleRegistry
{
private:
    Vehicle* vehicles[50];
    int count;

public:
    VehicleRegistry()
    {
        count = 0;
    }

    void addVehicle()
    {
        int choice;

        cout << "\n1. Car";
        cout << "\n2. Electric Car";
        cout << "\n3. Sports Car";
        cout << "\n4. Flying Car";
        cout << "\n5. Sedan";
        cout << "\n6. SUV";
        cout << "\nEnter Vehicle Type: ";
        cin >> choice;


        if (choice == 1)
            vehicles[count] = new Car();

        else if (choice == 2)
            vehicles[count] = new ElectricCar();

        else if (choice == 3)
            vehicles[count] = new SportsCar();

        else if (choice == 4)
            vehicles[count] = new FlyingCar();

        else if (choice == 5)
            vehicles[count] = new Sedan();

        else if (choice == 6)
            vehicles[count] = new SUV();

        else
        {
            cout << "Invalid Choice!\n";
            return;
        }

        vehicles[count]->input();

        count++;

        cout << "Vehicle Added Successfully!\n";
    }

    void displayAll()
    {
        if (count == 0)
        {
            cout << "No Vehicles Available!\n";
            return;
        }

        cout << "\n===== ALL VEHICLES =====\n";

        for (int i = 0; i < count; i++)
        {
            cout << "\nVehicle " << i + 1 << endl;

            vehicles[i]->display();
        }
    }

    void searchVehicle()
    {
        int id;

        cout << "Enter Vehicle ID: ";
        cin >> id;

        for (int i = 0; i < count; i++)
        {
            if (vehicles[i]->getVehicleID() == id)
            {
                cout << "\nVehicle Found!\n" << endl;

                vehicles[i]->display();

                return;
            }
        }

        cout << "Vehicle Not Found!\n";
    }

    ~VehicleRegistry()
    {
        for (int i = 0; i < count; i++)
        {
            delete vehicles[i];
        }
    }
};

int main()
{
VehicleRegistry registry;

    int choice;

    do
    {
        cout << "\n\n===== VEHICLE REGISTRY SYSTEM =====";
        cout << "\n1. Add Vehicle";
        cout << "\n2. View All Vehicles";
        cout << "\n3. Search Vehicle by ID";
        cout << "\n4. Show Total Vehicles";
        cout << "\n5. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            registry.addVehicle();
            break;

        case 2:
            registry.displayAll();
            break;

        case 3:
            registry.searchVehicle();
            break;

        case 4:
            cout << "Total Vehicles: "
                 << Vehicle::totalVehicles << endl;
            break;

        case 5:
            cout << "Thank You!";
            break;

        default:
            cout << "Invalid Choice!";
        }

    } while (choice != 5);

    return 0;
}
