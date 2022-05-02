#ifndef BOX_H
#define BOX_H
#include <iostream>

using namespace std;

class Box
{
    public:
        Box();
        Box(float,float,float);
        void setLength(float),setWidth(float),setHeight(float),operator=(Box),operator++(),operator--(),operator+=(float),operator-=(float),operator*=(float),operator/=(float);
        float getLength(),getWidth(),getHeight();
        Box operator*(float),operator/(float),operator+(float),operator-(float),operator+(Box),operator-(Box),operator++(int),operator--(int);
        bool operator==(Box),operator!=(Box);
        friend ostream &operator<<(ostream &mystream, Box &p);
    private:
        float Length,Width,Height;
};

#endif // BOX_H
