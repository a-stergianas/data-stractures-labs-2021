#include "Triangle.h"
#include <cmath>

Triangle::Triangle(){
    xa = 0;
    xb = 0;
    xc = 0;
    ya = 0;
    yb = 0;
    yc = 0;
}

Triangle::Triangle(float xa1, float ya1, float xb1, float yb1, float xc1, float yc1){
    xa = xa1;
    xb = xb1;
    xc = xc1;
    ya = ya1;
    yb = yb1;
    yc = yc1;
}

void Triangle::SetXA(float xa1){
    xa = xa1;
};
void Triangle::SetXB(float xb1){
    xb = xb1;
};
void Triangle::SetXC(float xc1){
    xc = xc1;
};
void Triangle::SetYA(float ya1){
    ya = ya1;
};
void Triangle::SetYB(float yb1){
    yb = yb1;
};
void Triangle::SetYC(float yc1){
    yc = yc1;
};

float Triangle::GetXA(){
    return xa;
};
float Triangle::GetXB(){
    return xb;
};
float Triangle::GetXC(){
    return xc;
};
float Triangle::GetYA(){
    return ya;
};
float Triangle::GetYB(){
    return yb;
};
float Triangle::GetYC(){
    return yc;
};

float Triangle::getAB(){
    return sqrt(pow(xa-xb,2)+pow(ya-yb,2));
};
float Triangle::getAC(){
    return sqrt(pow(xa-xc,2)+pow(ya-yc,2));
};
float Triangle::getBC(){
    return sqrt(pow(xb-xc,2)+pow(yb-yc,2));
};

float Triangle::getA(){
    return acos((pow(getAC(),2)+pow(getAB(),2)-pow(getBC(),2))/(2*getAC()*getAB()));
};
float Triangle::getB(){
    return acos((pow(getBC(),2)+pow(getAB(),2)-pow(getAC(),2))/(2*getBC()*getAB()));
};
float Triangle::getC(){
    return acos((pow(getAC(),2)+pow(getBC(),2)-pow(getAB(),2))/(2*getAC()*getBC()));
};

bool Triangle::isIsopleurous(){
    if(getAB()==getBC() && getAC()==getBC())
        return true;
    else
        return false;
};
bool Triangle::isIsosceles(){
    if(getA()==getB() || getA()==getC() || getB()==getC())
        return true;
    else
        return false;
};
bool Triangle::isScalino(){
    if((getA()==getB() && getB()==getC())||(getA()==getB() || getA()==getC() || getB()==getC()))
        return false;
    else
        return true;
};
bool Triangle::isOrthogonio(){
    if(round((getA()*180/3.14159265)*10)/10==90 || round((getB()*180/3.14159265)*10)/10==90 || round((getC()*180/3.14159265)*10)/10==90)
        return true;
    else
        return false;
};
bool Triangle::isAmvligonio(){
    if(round((getA()*180/3.14159265)*10)/10>90 || round((getB()*180/3.14159265)*10)/10>90 || round((getC()*180/3.14159265)*10)/10>90)
        return true;
    else
        return false;
};
bool Triangle::isOxygonio(){
    if(round((getA()*180/3.14159265)*10)/10<90 && round((getB()*180/3.14159265)*10)/10<90 && round((getC()*180/3.14159265)*10)/10<90)
        return true;
    else
        return false;
};

float Triangle::getBase(){
    return getAB();
};
float Triangle::getHeight(){
    return sin(getA())*getAC();
};
float Triangle::getArea(){
    return getBase()*getHeight()/2;
};
