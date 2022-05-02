#include <cmath>
#include <iostream>
#include "Cylinder.h"

#define PI 3.14159

using namespace std;

Cylinder::Cylinder(){
    x = 0;
    y = 0;
    z = 0;
    r = 0;
}
Cylinder::Cylinder(float x,float y,float z,float r,float l){
    this->x = x;
    this->y = y;
    this->z = z;
    this->r = r;
}
void Cylinder::Setx(float x){
    this->x = x;
}
void Cylinder::Sety(float y){
    this->y = y;
}
void Cylinder::Setz(float z){
    this->z = z;
}
void Cylinder::SetR(float r){
    this->r = r;
}
void Cylinder::SetL(float l){
    this->l = l;
}
float Cylinder::Getx(){
    return x;
}
float Cylinder::Gety(){
    return y;
}
float Cylinder::Getz(){
    return z;
}
float Cylinder::GetR(){
    return r;
}
float Cylinder::GetL(){
    return l;
}
float Cylinder::Diameter(){
    return 2*r;
}
bool Cylinder::inCylinder(float xa,float ya,float za){
    if(sqrt(pow(xa-x,2)+pow(ya-y,2))<=r && z-(l/2)<=za && za<=z+(l/2))
        return true;
    else
        return false;
}
float Cylinder::Area(){
    return 2*PI*r*(r+l);
}
float Cylinder::Volume(){
    return l*PI*pow(r,2);
}
