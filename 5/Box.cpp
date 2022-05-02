#include "Box.h"

Box::Box()
{
    Length=0;
    Width=0;
    Height=0;
}

Box::Box(float l, float w, float h)
{
    Length=l;
    Width=w;
    Height=h;
}

void Box::setLength(float l)
{
    Length=l;
}
void Box::setWidth(float w)
{
    Width=w;
}
void Box::setHeight(float h)
{
    Height=h;
}

float Box::getLength()
{
    return Length;
}
float Box::getWidth()
{
    return Width;
}
float Box::getHeight()
{
    return Height;
}

Box Box::operator*(float a)
{
    Box newBox(Length*a, Width*a, Height*a);
    return newBox;
}
Box Box::operator/(float a)
{
    Box newBox(Length/a, Width/a, Height/a);
    return newBox;
}

Box Box::operator+(Box a)
{
    Box newBox(Length+a.getLength(), Width+a.getWidth(), Height+a.getHeight());
    return newBox;
}
Box Box::operator-(Box a)
{
    Box newBox(Length-a.getLength(), Width-a.getWidth(), Height-a.getHeight());
    return newBox;
}

void Box::operator=(Box a)
{
    Length=a.getLength();
    Width=a.getWidth();
    Height=a.getHeight();
}
bool Box::operator==(Box a)
{
    bool flag=true;
    if(a.getHeight()!=Height)
        flag=false;
    if(a.getLength()!=Length)
        flag=false;
    if(a.getWidth()!=Width)
        flag=false;
    return flag;
}

bool Box::operator!=(Box a)
{
    bool flag=false;
    if(a.getHeight()!=Height)
        flag=true;
    if(a.getLength()!=Length)
        flag=true;
    if(a.getWidth()!=Width)
        flag=true;
    return flag;
}

void Box::operator++()
{
    Length = Length + 1;
    Height = Height + 1;
    Width = Width + 1;
}
void Box::operator--()
{
    Length = Length - 1;
    Height = Height - 1;
    Width = Width - 1;
}

Box Box::operator++(int dummy)
{
    Box r = *this;
    Length = Length + 1;
    Height = Height + 1;
    Width = Width + 1;
    return r;
}
Box Box::operator--(int dummy)
{
    Box r = *this;
    Length = Length - 1;
    Height = Height - 1;
    Width = Width - 1;
    return r;
}

void Box::operator+=(float a)
{
    Length += a;
    Height += a;
    Width += a;
}

void Box::operator-=(float a)
{
    Length -= a;
    Height -= a;
    Width -= a;
}

void Box::operator*=(float a)
{
    Length *= a;
    Height *= a;
    Width *= a;
}

void Box::operator/=(float a)
{
    Length /= a;
    Height /= a;
    Width /= a;
}

ostream &operator<<(ostream &mystream, Box &p)
{
    mystream<<"length: "<<p.getLength()<<", width: "<<p.getWidth()<<", height: "<<p.getHeight()<<endl;
    return mystream;
}
