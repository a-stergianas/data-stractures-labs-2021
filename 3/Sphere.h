class Sphere
{
    private:
        float x;
        float y;
        float z;
        float r;
    public:
        Sphere();
        Sphere(float,float,float,float);
        void Setx(float);
        void Sety(float);
        void Setz(float);
        void Setr(float);
        float Getx();
        float Gety();
        float Getz();
        float Getr();
        float Diameter();
        bool inSphere(float,float,float);
        float Area();
        float Volume();
};
