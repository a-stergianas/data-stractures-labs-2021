#include <cmath>
#include <iostream>
#include "Circle.h"

#define PI 3.14159

using namespace std;

Circle::Circle(){
    x = 0;
    y = 0;
    r = 0;
}
Circle::Circle(float x,float y,float r){
    this->x = x;
    this->y = y;
    this->r = r;
}
void Circle::Setx(float x){
    this->x = x;
}
void Circle::Sety(float y){
    this->y = y;
}
void Circle::Setr(float r){
    this->r = r;
}
float Circle::Getx(){
    return x;
}
float Circle::Gety(){
    return y;
}
float Circle::Getr(){
    return r;
}
float Circle::Diameter(){
    return 2*r;
}
bool Circle::inCircle(float xa,float ya){
    if(sqrt(pow(xa-x,2)+pow(ya-y,2))<=r)
        return true;
    else
        return false;
}
float Circle::Area(){
    return PI*pow(r,2);
}
float Circle::Perimeter(){
    return 2*PI*r;
}
