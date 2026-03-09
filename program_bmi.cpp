#include <iostream>
using namespace std;

float berat, tinggi; 
void inputData()
 {

    cout << "Masukkan Berat Badan (kg): ";
    cin >> berat;
    cout << "Masukkan Tinggi Badan (m): ";
    cin >> tinggi;

}

float hitungBMI (float a, float b)
{
    return a / (b * b);

}
