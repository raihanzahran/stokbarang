#include <iostream>
#include <stdlib.h>

using namespace std;

class penambahanData {
private:
int stock;

public :
void pensil ();
void buku();
void penghapus();
};

void penambahanData::pensil(){
int stock = 8, stokPensil, total;
cout <<"masukan jumlah stock barang = "; cin>>stokPensil;
total = stock + stokPensil;
cout <<"total stok pensil adalah "<<total<<endl; 
}

void penambahanData::buku(){
int stock = 10, stokBuku, total;
cout <<"masukan jumlah stock barang = "; cin>>stokBuku;
total = stock + stokBuku;
cout << "total stok buku adalah " << total<<endl;
}
void penambahanData::penghapus(){
int stock = 28, stokPenghapus, total;
cout <<"masukan jumlah stock barang = "; cin>> stokPenghapus;
total = stock + stokPenghapus;
cout<<"total stok penghapus adalah " <<total<<endl;
}

int main (int argc, char** argv){
int pilih ;
cout<<"No. \t nama barang \t stock "<<endl;
cout<<"1. \t pensil \t 8"<<endl;
cout<<"2. \t buku \t\t 10"<<endl;
cout<<"3. \t penghapus \t  28 "<<endl;

cout <<"pilih barang yang akan ditambah stocknya [1,2,3] = "; cin>>pilih;

if (pilih == 1){
penambahanData pensil;
pensil.pensil();
cout<<"terima kasih"<<endl;
}
if (pilih == 2){
penambahanData buku;
buku.buku();
cout<<"terima kasih"<<endl;
}
if (pilih == 3){
penambahanData penghapus;
penghapus.penghapus();
cout<<"terima kasih"<<endl;	
}

return 0;
system("PAUSE");

}
























