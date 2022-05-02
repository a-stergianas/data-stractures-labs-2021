#include "Savings.h"


Savings::Savings():public Account(*d){

}
Savings::Savings(char *d, float b):public Account(*d, b){
    a=0;
}

bool Account::withdraw(float amount)
{
    if (balance>=amount && a<=3)
    {
        balance-=amount;
        a++;
        return true;
    }
    return false;
}
