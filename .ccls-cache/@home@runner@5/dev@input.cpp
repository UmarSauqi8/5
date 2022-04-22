#include "../base.h"
using namespace std;

void SKS::input(){
  cout <<"Masukkan NIM :";
  cin >>nim;
  cout <<"Masukkan NAMA MAHASISWA :";
  cin >>nama;
  cout <<"Masukkan Jumlah MATA KULIAH :";
  cin >>matkul;
  cout <<"Masukkan JUMLAH SKS :";
  cin >>jumlah;
  }

int main(){
  SKS sks;
  sks.input();
}