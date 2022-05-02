#include "myFile.h"
#include <fstream>
#include <string>
using namespace std;

myFile::myFile()
{
    name=NULL;
}
myFile::myFile(char* s1)
{
    name=s1;
}

void myFile::setName(char* s1)
{
    name=s1;
}

char* myFile::getName()
{
    return name;
}

bool myFile::exists()
{
    ifstream f;
    f.open(name);
    if(f.is_open())
    {
        f.close();
        return true;
    }
    else
        return false;
}

int myFile::countLines()
{
    int lines=0;
    string line;
    ifstream f;
    f.open(name,ios::binary);
    if(f.is_open())
    {
        while (getline(f, line))
            lines++;
        f.close();
        return lines;
    }
    else
        return 0;
}

int myFile::countChars()
{
    int chars=0;
    string line;
    ifstream f;
    f.open(name,ios::binary);
    if(f.is_open())
    {
        while(getline(f, line))
            chars+=line.length();
        f.close();
        return chars;
    }
    else
        return 0;
}

bool myFile::operator==(myFile a)
{
    if(countLines()!=a.countLines())
        return false;
    if(countChars()!=a.countChars())
        return false;

    string line1,line2;
    ifstream f1,f2;
    f1.open(name,ios::in);
    f2.open(a.getName(),ios::in);
    if(f1.is_open() && f2.is_open())
    {
        while(getline(f1, line1))
        {
            getline(f2, line2);
            if(line1.compare(line2)!=0)
                return false;
        }
        f1.close();
        f2.close();
    }
    else
        return false;

    return true;
}

void myFile::operator=(myFile a)
{
    string line;
    ifstream f1,f2;
    ofstream f;
    f1.open(name,ios::trunc);
    f1.close();
    f.open(name,ios::out);
    f2.open(a.getName(),ios::in);
    if(f.is_open() && f2.is_open())
    {
        while(getline(f2, line))
            f<<line;
        f2.close();
        f.close();
    }
}

void myFile::operator+=(myFile a)
{
    string line;
    ifstream f2;
    ofstream f1;
    f1.open(name,ios::ate);
    f2.open(a.getName(),ios::in);
    if(f1.is_open() && f2.is_open())
    {
        while(getline(f2, line))
            f1<<line;
        f2.close();
        f1.close();
    }
}
