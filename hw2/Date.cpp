#include "Date.h"

Date::Date(){
    day=1;
    month=1;
    year=1900;
}

Date::Date(int day,int month,int year){
    this->day=0;
    this->month=0;
    this->year=0;
    setDate(day,month,year);
}

bool Date::setDate(int day,int month,int year){
    if(year>1899){
            if(month<1 || month>12)
                return false;
            else{
                if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
                    if(day>31)
                        return false;
                }
                else{
                    if(month==2){
                        if(year%4==0){
                            if(year%100==0){
                                if(year%400==0){
                                    if(day>29)
                                        return false;
                                }
                                else{
                                    if(day>28)
                                        return false;
                                }
                            }
                            else{
                                if(day>29)
                                    return false;
                            }
                        }
                    }
                    else{
                        if(day>30)
                            return false;
                    }
                }
            }
    }
    else
        return false;

    this->day=day;
    this->month=month;
    this->year=year;
    return true;
}

int Date::getDay(){
    return day;
}
int Date::getMonth(){
    return month;
}
int Date::getYear(){
    return year;
}

bool Date::leapYear(){
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return true;
        }
    }
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

void Date::dayOfWeek(int &dw){
    dw=1;
    for(int i=1900;i<year;i++){
        if(year%4==0){
            if(year%100==0){
                if(year%400){
                    dw+=366;
                }
                else{
                    dw+=365;
                }
            }
            else{
                dw+=366;
            }
        }
    }
    for(int i=1;i<month;i++){
        dw+=daysInMonth(i);
    }
    dw+=day;
    dw=dw%7;
}
