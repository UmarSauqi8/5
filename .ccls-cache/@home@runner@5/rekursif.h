#include <iostream> 
using namespace std;

  int proses(int matkul,int jumlah,int kuliah,int total,int j_matkul,int diskon1,int diskon2,int biaya){
  if(matkul==0){
     diskon1=total*10/100;
     total=total-diskon1;
     diskon2=total*5/100;
     biaya=total-diskon2;
     return (biaya,j_matkul );
     }
  else{
   cout<<"Masukkan Nama Matakuilah :";
   cin>>kuliah;
   cout<<"Masukkan Jumlah SKS :";
   cin>>jumlah; 
   j_matkul=j_matkul+jumlah ;
   total=total+(jumlah*125000);
   return proses((matkul-1),jumlah,kuliah,total,j_matkul,diskon1,diskon2,biaya);
  }
}