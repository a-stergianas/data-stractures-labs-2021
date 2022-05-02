#ifndef product_h
#define product_h
#include "Date.h"

class Product
{
    private:
        char description[20];
        int weight;
    public:
        Date expireDate;
        Product(char[20],Date,int);
        Date getExpiry();
        char* Getname();
};

#endif
