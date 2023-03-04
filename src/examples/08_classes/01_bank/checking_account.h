//checking_account.h
#include <stdlib.h>//for rand() function

class CheckingAccount
{

public:
    CheckingAccount(){get_balance_from_db();}                           //constructor
    CheckingAccount(int b) : balance(b){/*empty function code block*/}  //constructor
    int get_balance() const {return balance;}
    void deposit(int amount);
private:
    int balance{0};//explicitily initialize to zero
    void get_balance_from_db();
};