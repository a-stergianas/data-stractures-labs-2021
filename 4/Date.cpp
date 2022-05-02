#include "Date.h"
#include <cmath>

Date::Date()
{
    day = 0;
    month = 0;
    year = 0;
}

Date::Date(int d,int m,int y)
{
    day = d;
    month = m;
    year = y;
}

int Date::getDay()
{
    return day;
}

int Date::getMonth()
{
    return month;
}

int Date::getYear()
{
    return year;
}

void Date::setDay(int d)
{
    day = d;
}

void Date::setMonth(int m)
{
    month = m;
}

void Date::setYear(int y)
{
    year = y;
}

int Date::daysInMonth(int m){
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        return 31;
    }
    else{
        if(m==2){
            return 28;}
        else{
            return 30;}
    }
}

void Date::add(int k){
    day+=k;
    if(day>daysInMonth(month)){
        day=day-daysInMonth(month);
        month++;
        if(month>12){
            month=1;
            year++;
        }
    }
}

int Date::diff(Date b){

    int date1=year*365,date2=b.getYear()*365;

    for(int i=1;i<month;i++){
        date1 += daysInMonth(i);
    }
    for(int i=1;i<b.getMonth();i++){
        date2 += daysInMonth(i);
    }

    date1 += day;
    date2 += b.getDay();

    return date2-date1;
}

