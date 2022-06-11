#include <iostream>
#include <string>

#include "../include/matkul.hpp"

Matkul::Matkul(string nama,int sks){
    this->namaMatkul = nama;
    this->sksMatkul = sks;
    this->scoreMatkul = "n";
}

//setter
void Matkul::setNamaMatkul(const char* nama){
    this->namaMatkul = nama;
}

void Matkul::setSKSMatkul(int sks){
    this->sksMatkul = sks;
}

void Matkul::setScoreMatkul(const char* score){
    this->scoreMatkul = score;
}

//getter
string Matkul::getNamaMatkul(){
    return this->namaMatkul;
}

int Matkul::getSKSMatkul(){
    return this->sksMatkul;
}

string Matkul::getScoreMatkul(){
    return this->scoreMatkul;
}