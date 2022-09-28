#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int nilai;
  cout << "Masukkan Nilai"; cin >> nilai;
  if (nilai > 92){
      cout  << "A";
    }else if (nilai > 87){
      cout << "AB";
    }else if (nilai >83){
      cout << "B";
    }else if (nilai > 79){
      cout << "C";
    }else if (nilai <= 87){
      cout << "D" ;
      }
}