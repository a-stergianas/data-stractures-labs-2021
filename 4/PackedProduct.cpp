#ifndef productpacked_h
#define productpacked_h
#include "PackedProduct.h"
#include "Product.h"

PackedProduct::PackedProduct(char description[20],Date expireDate,int weight,bool isOpen,int daysOfLife,Date openDay):Product(description,expireDate,weight){
    this->isOpen=isOpen;
    this->daysOfLife=daysOfLife;
    this->openDay=openDay;

    if(isOpen){
        openDay.add(daysOfLife);
        this->expireDate=openDay;
    }
};

#endif
