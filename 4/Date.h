#ifndef date_h
#define date_h

class Date
{
    private:
        int day,month,year;
    public:
        Date();
        Date(int,int,int);
        int getDay(),getMonth(),getYear();
        void setDay(int),setMonth(int),setYear(int);
        int daysInMonth(int);
        void add(int);
        int diff(Date);
};

#endif
