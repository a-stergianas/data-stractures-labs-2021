class Cylinder
{
    private:
        float x;
        float y;
        float z;
        float r;
        float l;
    public:
        Cylinder();
        Cylinder(float,float,float,float,float);
        void Setx(float);
        void Sety(float);
        void Setz(float);
        void SetR(float);
        void SetL(float);
        float Getx();
        float Gety();
        float Getz();
        float GetR();
        float GetL();
        float Diameter();
        bool inCylinder(float,float,float);
        float Area();
        float Volume();
};
