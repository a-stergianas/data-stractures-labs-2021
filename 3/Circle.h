class Circle
{
    private:
        float x;
        float y;
        float r;
    public:
        Circle();
        Circle(float,float,float);
        void Setx(float);
        void Sety(float);
        void Setr(float);
        float Getx();
        float Gety();
        float Getr();
        float getX();
        float getY();
        float getR();
        float Diameter();
        bool inCircle(float,float);
        float Area();
        float Perimeter();
};
