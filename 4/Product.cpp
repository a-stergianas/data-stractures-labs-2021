#include "Product.h"
#include <string.h>

Product::Product(char description[20],Date expireDate,int weight){
    strcpy(this->description,description);
    this->weight = weight;
    this->expireDate = expireDate;
}

Date Product::getExpiry(){
    return expireDate;
}

char* Product::Getname(){
    return description;
}
