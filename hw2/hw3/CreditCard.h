#ifndef CREDITCARD_H
#define CREDITCARD_H


class CreditCard
{
    private:
        float limit;
    public:
        CreditCard(char *);
        CreditCard(char *,float,float);
        float getBalance();
};

#endif // CREDITCARD_H
