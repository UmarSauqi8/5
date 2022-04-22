#include <iostream> 
using namespace std;

void proses(int matkul,int jumlah,int kuliah,int total,int j_matkul,int diskon1,int diskon2,int biaya){
  if(matkul==0){
     diskon1=total*0.10;
     total=total-diskon1;
     diskon2=total*0.05;
     biaya=total-diskon2;
    
     // returnya bisa total - (diskon1 + diskon2)

     return biaya;
     }
  else{
   cout<<"Masukkan Nama Matakuilah :";
   cin>>kuliah;
   cout<<"Masukkan Jumlah SKS :";
   cin>>jumlah; 
   j_matkul=j_matkul+jumlah ;
   total=total+(jumlah*125000);

    // ini ngk perlu return functionya di buat void aja
   rproses((matkul-1),jumlah,kuliah,total,j_matkul,diskon1,diskon2,biaya);
  }
}