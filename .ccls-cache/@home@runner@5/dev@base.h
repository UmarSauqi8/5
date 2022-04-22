#include <iostream>
using namespace std;

class SKS
{
  public :
    void input();
    void output();
    void proses();

  private : 
    string nama;
    int hargasks = 150000;
    int jumlah, nim, matkul;
    int total, diskon, bayar;
};

void SKS::input()
{
  cout <<"Masukkan NIM :";
  cin >>nim;
  cout <<"Masukkan NAMA MAHASISWA :";
  cin >>nama;
  cout <<"Masukkan Jumlah MATA KULIAH :";
  cin >>matkul;
  cout <<"Masukkan JUMLAH SKS :";
  cin >>jumlah;
}

void SKS::output()
{
  cout <<"Total :" <<total<<endl;
  cout <<"Diskon :" <<diskon<<endl;
  cout <<"Total Bayar : " <<bayar<<endl;
}

int SKS::rekursif_matkul(int n)
{
  if (n == 0)
  {
    cout<<"Jumlah harga SKS : "<<total;
    return total;
  }
  else {
    cout<<"Masukkan Jumlah Mata Kuliah : "; cin>>matkul;
    cout<<"Masukkan Jumlah SKS : "; cin>>jumlah;
    total=+jumlah;
    return rekursif_matkul(n-1);
  }
}

void SKS::proses()
{
  total = hargasks * jumlah;
  diskon = total*0.25;
  bayar = total - diskon;
}