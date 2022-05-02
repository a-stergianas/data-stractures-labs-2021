#include "CreditCard.h"

CreditCard::CreditCard():public Account(*d){

}
CreditCard::CreditCard(char *d, float b, float limit): public Account(*d, b){
    this->limit=limit;
}

bool Account::withdraw(float amount)
{
    if (balance>=amount+limit)
    {
        balance-=amount;
        return true;
    }
    return false;
}
