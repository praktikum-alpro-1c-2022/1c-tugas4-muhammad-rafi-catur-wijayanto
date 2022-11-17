#include <iostream>
using namespace std;

int main (){
    int angka;

    cout<<"Masukkan Bilangan: ";
    cin>>angka;

    if(angka % 2){
    cout<<"Angka yang anda masukkan adalah bilangan ganjil"<<endl;
    }else if(angka == 0){
    cout<<"Angka yang anda masukkan adalah 0"<<endl;
    }else{
    cout<<"Angka yang anda masukkan adalah bilangan genap"<<endl;
    }
    return 0;

}
