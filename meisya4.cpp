#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    cout <<"aplikasi kehadiran"<<endl;
    cout << "Masukan kehadiran pertama=";
    int jumlah1;
    cin >> jumlah1;
    cout <<"masukan tugas kedua=";
    int jumlah2;
    cin >> jumlah2;
    cout <<"masukan uts ketiga=";
    int jumlah3;
    cin >>jumlah3;
    cout <<"masukan uas keempat=";
    int jumlah4;
    cin >>jumlah4;
    cout <<"masukan nilai bagi kelima=";
    int jumlah5;
    cin >> jumlah5;
    int hasil;
    hasil= (jumlah1+jumlah2+jumlah3+jumlah4) /jumlah5;
    cout <<"hasil="<<hasil;
}