#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
    private:
        double x,y;
    public:
        Vector();
        Vector(double,double);
        void Setx(double),Sety(double),print(),multiply(double f);
        double getX(),getY(),magnitude(),angle(),angleD();
        Vector add(Vector v);
};

#endif
