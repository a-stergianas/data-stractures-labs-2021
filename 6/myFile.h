#ifndef MYFILE_H
#define MYFILE_H


class myFile
{
    public:
        myFile();
        myFile(char*);
        void setName(char*),operator=(myFile),operator+=(myFile);
        char* getName();
        bool exists(),operator==(myFile);
        int countLines(),countChars();
    private:
        char* name;
};

#endif // MYFILE_H
