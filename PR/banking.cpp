#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;

private:
    double balance;

public:
    BankAccount()
    {
        balance = 0;
    }

    void createAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Account Holder Name: ";
        cin >> accountHolderName;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(double amount)
    {
        balance = balance + amount;
        cout << "Amount Deposited Successfully.\n";
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount Withdrawn Successfully.\n";
        }
        else
        {
            cout << "Insufficient Balance.\n";
        }
    }

    double getBalance()
    {
        return balance;
    }

    void displayAccountInfo()
    {
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nAccount Holder: " << accountHolderName;
        cout << "\nBalance: " << balance << endl;
    }

    virtual void calculateInterest()
    {
        cout << "Interest not available.\n";
    }
};


// Savings Account
class SavingsAccount : public BankAccount
{
private:
    double interestRate;

public:
    void createSavings()
    {
        createAccount();

        cout << "Enter Interest Rate: ";
        cin >> interestRate;
    }

    void calculateInterest()
    {
        double interest = getBalance() * interestRate / 100;

        cout << "Savings Interest: " << interest << endl;
    }
};


class CheckingAccount : public BankAccount
{
private:
    double overdraftLimit;

public:
    void createChecking()
    {
        createAccount();

        cout << "Enter Overdraft Limit: ";
        cin >> overdraftLimit;
    }

    void withdraw(double amount)
    {
        if (amount <= getBalance() + overdraftLimit)
        {
            cout << "Withdrawal Allowed.\n";
        }
        else
        {
            cout << "Overdraft Limit Exceeded.\n";
        }
    }

    void checkOverdraft()
    {
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};


// Fixed Deposit Account
class FixedDepositAccount : public BankAccount
{
private:
    int term;

public:
    void createFixedDeposit()
    {
        createAccount();

        cout << "Enter Term (months): ";
        cin >> term;
    }

    void calculateInterest()
    {
        double interest = getBalance() * 6 * term / 1200;

        cout << "Fixed Deposit Interest: " << interest << endl;
    }
};


// Main
int main()
{
    BankAccount *account[10];

    int count = 0;
    int choice;

    do
    {
        cout << "\n===== BANKING SYSTEM =====";
        cout << "\n1. Create Savings Account";
        cout << "\n2. Create Checking Account";
        cout << "\n3. Create Fixed Deposit Account";
        cout << "\n4. Deposit";
        cout << "\n5. Withdraw";
        cout << "\n6. Display All Accounts";
        cout << "\n7. Calculate Interest";
        cout << "\n8. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;


        if (choice == 1)
        {
            account[count] = new SavingsAccount;

            SavingsAccount *s;
            s = (SavingsAccount*)account[count];

            s->createSavings();

            count++;
        }


        else if (choice == 2)
        {
            account[count] = new CheckingAccount;

            CheckingAccount *c;
            c = (CheckingAccount*)account[count];

            c->createChecking();

            count++;
        }

        else if (choice == 3)
        {
            account[count] = new FixedDepositAccount;

            FixedDepositAccount *f;
            f = (FixedDepositAccount*)account[count];

            f->createFixedDeposit();

            count++;
        }

        else if (choice == 4)
        {
            int no;
            double amount;

            cout << "Enter Account Number: ";
            cin >> no;

            for (int i = 0; i < count; i++)
            {
                if (account[i]->accountNumber == no)
                {
                    cout << "Enter Amount: ";
                    cin >> amount;

                    account[i]->deposit(amount);
                }
            }
        }

        else if (choice == 5)
        {
            int no;
            double amount;

            cout << "Enter Account Number: ";
            cin >> no;

            for (int i = 0; i < count; i++)
            {
                if (account[i]->accountNumber == no)
                {
                    cout << "Enter Amount: ";
                    cin >> amount;

                    account[i]->withdraw(amount);
                }
            }
        }


        else if (choice == 6)
        {
            for (int i = 0; i < count; i++)
            {
                account[i]->displayAccountInfo();
            }
        }


        else if (choice == 7)
        {
            for (int i = 0; i < count; i++)
            {
                account[i]->calculateInterest();
            }
        }

    } while (choice != 8);


    return 0;
}
