#include <cmath>
#include <iostream>
#include "Sphere.h"

#define PI 3.14159

using namespace std;

Sphere::Sphere(){
    x = 0;
    y = 0;
    z = 0;
    r = 0;
}
Sphere::Sphere(float x,float y,float z,float r){
    this->x = x;
    this->y = y;
    this->z = z;
    this->r = r;
}
void Sphere::Setx(float x){
    this->x = x;
}
void Sphere::Sety(float y){
    this->y = y;
}
void Sphere::Setz(float z){
    this->z = z;
}
void Sphere::Setr(float r){
    this->r = r;
}
float Sphere::Getx(){
    return x;
}
float Sphere::Gety(){
    return y;
}
float Sphere::Getz(){
    return z;
}
float Sphere::Getr(){
    return r;
}
float Sphere::Diameter(){
    return 2*r;
}
bool Sphere::inSphere(float xa,float ya,float za){
    if(sqrt(pow(xa-x,2)+pow(ya-y,2)+pow(za-z,2))<=r)
        return true;
    else
        return false;
}
float Sphere::Area(){
    return 4*PI*pow(r,2);
}
float Sphere::Volume(){
    return 4.0/3.0*PI*pow(r,3);
}
