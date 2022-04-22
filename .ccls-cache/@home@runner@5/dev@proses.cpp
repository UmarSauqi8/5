#include "../base.h"
using namespace std;

int SKS::proses(){
  int proses(int matkul,int jumlah,int kuliah,int total);
  if(matkul==0){
    diskon1=total*10/100;
    total=total-diskon1;
    diskon2=total*5/100;
    biaya=total-diskon2;
    return biaya;
  }
  else{
    cout<<"Masukkan Nama Matakuilah :";
    cin>>kuliah;
    cout<<"Masukkan Jumlah SKS :";
    cin>>jumlah;
    total=total+(jumlah*125000);
    return proses((matkul-1),jumlah,kuliah,total);
  }
}