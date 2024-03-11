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

--------------
class Transaction {
private:
    int sender;
    int receiver;
    int amount;
    std::string message;

public:
    Transaction(int sender, int receiver, int amount, string message)
        : sender(sender), receiver(receiver), amount(amount), message(message) {}

    void displayTransaction() {
        cout << "You are going to send $" << amount << " to cell phone number: " << receiver << " with the message: \"" << message << "\"" << endl;
    }

    bool confirmTransaction() {
        char sendOrno;
        cout << "Confirm the data is correct (S/N): ";
        cin >> sendOrno;

        if (sendOrno == 'S' || sendOrno == 's') {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    int option;
    do {
        cout << "Choose an option: " << endl;
        cout << "1. Send money through Nequi" << endl;
        cout << "2. Send money through Transfiya" << endl;
        cout << "3. Send money through Bancos" << endl;
        cout << "4. Exit" << endl;
        cin >> option;

        switch (option) {
            case 1:
            {
                int nequiOption1;
                cout << "Cell phone: ";
                cin >> nequiOption1;

                int nequiOption2;
                cout << "How much? ";
                cin >> nequiOption2;

                string nequiOption3;
                cout << "Message: ";
                cin.ignore();
                getline(cin, nequiOption3);

                Transaction nequiTransaction(0, nequiOption1, nequiOption2, nequiOption3);
                nequiTransaction.displayTransaction();

                if (nequiTransaction.confirmTransaction()) {
                    cout << "Money sent" << endl;
                } else {
                    cout << "Start again" << endl;
                }
                break;
            }

            case 2:
            {
                int transfiyaOption1;
                cout << "Cell phone: ";
                cin >> transfiyaOption1;

                int transfiyaOption2;
                cout << "How much? ";
                cin >> transfiyaOption2;

                string transfiyaOption3;
                cout << "Message: ";
                cin.ignore();
                getline(cin, transfiyaOption3);

                Transaction transfiyaTransaction(0, transfiyaOption1, transfiyaOption2, transfiyaOption3);
                transfiyaTransaction.displayTransaction();

                if (transfiyaTransaction.confirmTransaction()) {
                    cout << "Money sent" << endl;
                } else {
                    cout << "Start again" << endl;
                }
                break;
            }

            case 3:
            {
                string bancosOption1;
                cout << "Name of recipient: ";
                cin.ignore();
                getline(cin, bancosOption1);

                int bancosOption2;
                cout << "Number of the document: ";
                cin >> bancosOption2;

                string bancosOption3;
                cout << "Bank name: ";
                cin.ignore();
                getline(cin, bancosOption3);

                string bancosOption4;
                cout << "Type of account: ";
                cin >> bancosOption4;

                int bancosOption5;
                cout << "Number of account: ";
                cin >> bancosOption5;

                Transaction bancosTransaction(0, bancosOption5, bancosOption2, bancosOption1);
                bancosTransaction.displayTransaction();

                if (bancosTransaction.confirmTransaction()) {
                    cout << "Money sent" << endl;
                } else {
                    cout << "Start again" << endl;
                }
                break;
            }

            case 4:
{
                cout << "Exit" << endl;
                break;
            }

            default:
            {
                cout << "You have entered an incorrect option" << endl;
                break;
            }
        }
    } while (option != 4);

    return 0;
}
