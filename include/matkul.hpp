#ifndef __MATKUL_
#define __MATKUL_

#include <iostream>
#include <string>

using namespace std;

class Matkul{
    private:
        string namaMatkul;
        int sksMatkul;
        string scoreMatkul;

    public:
        Matkul(string,int);

        //setter
        void setNamaMatkul(const char*);
        void setSKSMatkul(int);
        void setScoreMatkul(const char*);

        //getter
        string getNamaMatkul();
        int getSKSMatkul();
        string getScoreMatkul();

};

#endif