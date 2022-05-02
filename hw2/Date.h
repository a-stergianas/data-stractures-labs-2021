#ifndef DATE_H
#define DATE_H


class Date
{
    private:
        int day,month,year,dw;
    public:
        Date();
        Date(int,int,int);
        int getDay(),getMonth(),getYear(),daysInMonth(int);
        bool setDate(int,int,int),leapYear();
        void dayOfWeek(int&);
};

#endif
