#include "Product.h"

class PackedProduct:public Product
{
    private:
        bool isOpen;
        int daysOfLife;
        Date openDay;
    public:
        PackedProduct(char[20],Date,int,bool,int,Date);
};
