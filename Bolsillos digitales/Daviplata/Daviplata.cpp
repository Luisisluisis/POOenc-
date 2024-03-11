// create account


-----------
// principal page where appears ammount of money, owner,accoun number
class Account {
private:
    int accountNumber;
    string ownerName;
    double balance;

public:
    Account(int accountNumber, const string& ownerName, double initialBalance)
        : accountNumber(accountNumber), ownerName(ownerName), balance(initialBalance) {}

    int getAccountNumber() const { return accountNumber; }
    const string& getOwnerName() const { return ownerName; }
    double getBalance() const { return balance; }

    void setAccountNumber(int accountNumber) { this->accountNumber = accountNumber; }
    void setOwnerName(const std::string& ownerName) { this->ownerName = ownerName; }
    void setBalance(double balance) { this->balance = balance; }

    void deposit(double amount) { balance += amount; }
    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            return true;
        }
        return false;
    }
};
----------
// send money 
class PaymentRequest {
private:
    string merchantID;
    string shopID;
    string merchantTransactionID;
    string userID;
    string userData;
    string userIP;
    string specificPaymentData;
   
    int paymentMethodID;
    int creationTypeID;

    double amount;

public:
    PaymentRequest(const string& merchantID, const string& shopID, const string& merchantTransactionID, int paymentMethodID, double amount, const string& userID, const string& userData, const string& userIP, int creationTypeID, const string& specificPaymentData)
        : merchantID(merchantID), shopID(shopID), merchantTransactionID(merchantTransactionID), paymentMethodID(paymentMethodID), amount(amount), userID(userID), userData(userData), userIP(userIP), creationTypeID(creationTypeID), specificPaymentData(specificPaymentData) {}

    string getMerchantID() const { return merchantID; }
    string getShopID() const { return shopID; }
    string getMerchantTransactionID() const { return merchantTransactionID; }
    int getPaymentMethodID() const { return paymentMethodID; }
    double getAmount() const { return amount; }
    string getUserID() const { return userID; }
    string getUserData() const { return userData; }
    string getUserIP() const { return userIP; }
    int getCreationTypeID() const { return creationTypeID; }
    string getSpecificPaymentData() const { return specificPaymentData; }
};
