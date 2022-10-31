#include <iostream>
using namespace std;

int main() {
    string username, password;

    cout<<"username \t: ";
    cin>>username;
    cout<<"password \t: ";
    cin>>password;

if (username== "raficatur" && password== "raficatur123"){
    cout<<"Login Berhasil";}
    else if (username=="raficatur" && password !="raficatur123"){
    cout<<"Maaf Password yang anda masukkan salah"<<endl;}
    else if (username !="raficatur" && password=="raficatur123"){
    cout<<"Maaf username yang anda masukkan salah"<<endl;}
    else if (username !="raficatur" && password !="raficatur123"){
    cout<<"Maaf username dan password yang anda masukkan salah"<<endl;}

return 0;

}


 cout << "Quantity: " << endl;
 cin >> jumlahpembelian;
