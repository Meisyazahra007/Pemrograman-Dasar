#include <iostream>
using namespace std;

void say_hello (string nama){
cout <<"Halo,"<<nama<<endl;
}
 void tambah (int angka1, int angka2){
   printf ("Penjumlahan %d + %d %d = %d",
         angka1, angka2, angka1 + angka2);
         }
         
int main(){
  say_hello("Algis");
  tambah (10,5);
  tambah (20,10);
  tambah (25,25);
}