#include <iostream>
#include <vector>
#include <string>

using namespace std;

class CreateAccount 
{
public:
    string completeName;
    string gmail;
    int document;
    int documentExpedition;
    int dateOfBirth;
    int passwordCreated;  
    int phoneNumber;
    int loginAttempts = 3;

    CreateAccount(string completeName, string gmail, int document, int documentExpedition, int dateOfBirth, int passwordCreated, int phoneNumber) : completeName(completeName), gmail(gmail), document(document), documentExpedition(documentExpedition), dateOfBirth(dateOfBirth), passwordCreated(passwordCreated), phoneNumber(phoneNumber) {}

    bool login() 
    {
        int phoneNumber1;
        int password1;

        cout << "Phone number: ";
        cin >> phoneNumber1;

        if (phoneNumber1 == phoneNumber) 
        {
            cout << "Password: ";
            cin >> password1;

            if (password1 == passwordCreated) 
            {
                cout << "Login successful." << endl;
                return true;
            } 
            else 
            {
                loginAttempts--;
                if (loginAttempts > 0) 
                {
                    cout << "Incorrect password, try again." << endl;
                } 
                else 
                {
                    cout << "You have used the maximum number of attempts. Your account is blocked. Try again later." << endl;
                }
            }
        } 
        else 
        {
            cout << "Incorrect phone number." << endl;
        }

        return false;
    }
};


---------------
class MoneyTransfer {
    private:
        string senderName;
        string receiverName;
        double amount;

    public:
        MoneyTransfer(string sName, string rName, double a) {
            senderName = sName;
            receiverName = rName;
            amount = a;
        }

        void sendMoney() {
            cout << senderName << " sent $" << amount << " to " << receiverName << endl;
        }
};

---------------
class Cushion {
private:
    string ownerName;
    double balance;

public:
    Cushion(string name) : ownerName(name), balance(0.0) {}

    void deposit(double amount) {
        balance += amount;
        cout << ownerName << " deposited $" << amount << ". New balance: $" << balance << endl;
    }

    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << ownerName << " withdrew $" << amount << ". New balance: $" << balance << endl;
            return true;
        } else {
            cout << ownerName << " tried to withdraw $" << amount << ", but the balance is only $" << balance << "." << endl;
            return false;
        }
    }

    double getBalance() const {
        return balance;
    }
};
