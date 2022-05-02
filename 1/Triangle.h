class Triangle
{
    private:
        

    public:
      float xa,xb,xc,ya,yb,yc;
      Triangle();
      Triangle(float xa1, float ya1, float xb1, float yb1, float xc1, float yc1);
      void SetXA(float xa1),SetXB(float xb1),SetXC(float xc1),SetYA(float ya1),SetYB(float yb1),SetYC(float yc1);
      float GetXA(),GetXB(),GetXC(),GetYA(),GetYB(),GetYC();
      float getAB(),getAC(),getBC();
      float getA(),getB(),getC();
      bool isIsopleurous(),isIsosceles(),isScalino(),isOrthogonio(),isAmvligonio(),isOxygonio();
      float getBase(),getHeight(),getArea();
};
