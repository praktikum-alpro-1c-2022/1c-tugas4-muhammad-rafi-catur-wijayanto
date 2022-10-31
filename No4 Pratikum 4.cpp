#include<iostream>
using namespace std;

int main() {
    char menu;

 cout <<"Menu Restaurant Mc'Yahud"<<endl;
 cout <<"=========================================="<<endl;
 cout <<"1.Nasi Goreng Informaitka \t: Rp.5.000"<<endl;
 cout <<"2.Nasi Soto Ayam Internet \t: Rp.7.000"<<endl;
 cout <<"3.Gado Gado Disket        \t: Rp.4.500"<<endl;
 cout <<"4.Bubur Ayam LAN        \t: Rp.4.000"<<endl;
 cout <<"=========================================="<<endl;

 cout << "Masukan Nomor Menu (1, 2, 3, 4): ";
 cin >> menu;

switch (menu) {
 case '1':
 cout <<"Anda Memesan Nasi Soto Ayam Internet Rp.5000"<<endl;
 break;
 case '2':
 cout <<"Anda Memesan Nasi Goreng Informaitka Rp.7000"<<endl;
 break;
 case '3':
 cout <<"Anda Memesan Gado-Gado Disket Rp.4500"<<endl;
 break;
 case '4':
cout <<"Anda Memesan Bubur Ayam LAN Rp.4000"<<endl;
 break;
 default:
 cout <<"Error! Menu Tidak Ada"<<endl;
 break;
 }


cout<<"TERIMAKASIH TELAH MENJADI PELANGGAN KAMI :)"<<endl;




return 0;

}

