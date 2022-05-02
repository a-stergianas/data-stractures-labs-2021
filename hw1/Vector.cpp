#include "Vector.h"
#include <cmath>
#include <iostream>

using namespace std;

Vector::Vector()
{
    x=0;
    y=0;
}

Vector::Vector(double x,double y)
{
    this->x=x;
    this->y=y;
}

void Vector::Setx(double x){
    this->x=x;
}
void Vector::Sety(double y){
    this->y=y;
}
double Vector::getX(){
    return x;
}
double Vector::getY(){
    return y;
}

double Vector::magnitude(){
    return sqrt(pow(x,2)+pow(y,2));
}

double Vector::angle(){
    if(x==0)
        return 90;
    else
        return atan(y/x);
}

double Vector::angleD(){
    if(x==0)
        return 90*(180.0/3.141592653589793238463);
    else
        return atan(y/x)*(180.0/3.141592653589793238463);
}

void Vector::print(){
    cout<<"("<<x<<","<<y<<")"<<endl;
    cout<<magnitude()<<endl;
    cout<<angleD()<<endl;
}

void Vector::multiply(double f){
    x=f*x;
    y=f*y;
}

Vector Vector::add(Vector v){
    Vector b;
    b.Setx(x+v.getX());
    b.Sety(y+v.getY());
    return b;
}
