#include <fstream>
#include <iostream>
using namespace std;

void getMatkul(int n){
    struct Data {
    string matkul;
    int sks;
    };
    string Matkul;
    int SKS;
    int Index = 0;
    Data data[256];
    if (n != 0) {
      cout << "Masukan matakuliah : ";
      cin >> Matkul;
      cout << "Masukan SKS : ";
      cin >> SKS;
      cout <<endl;
  
      data[Index].matkul = Matkul;
      data[Index].sks = SKS;
  
      Index++;
      
      getMatkul(n - 1);
    }
  }

  int Harga() {
    struct Data {
    string matkul;
    int sks;
    };
    int Index = 0;
    Data data[256];
    int TotalSKS = 0 ;
    int TotalHarga = 0;
  
    for(int i = 0; i < Index + 1; i++ ) {
      TotalSKS += data[i].sks;
    }
  
    cout << TotalSKS;
    TotalHarga = TotalSKS * 125000;
    TotalHarga = TotalHarga - (TotalHarga * 0.10);
    TotalHarga = TotalHarga - (TotalHarga * 0.05);  
      
    return TotalHarga;
  }

int main() {
  struct Data {
    string matkul;
    int sks;
  };
  int Index = 0;
  Data data[256];
  string name;
  int nim;
  int totalMatkul;
  
    cout << "Masukan nama mahasiswa : ";
    cin >> name;
    cout << "Masukan NIM : ";
    cin >> nim;
    cout << "Banyak Matkul : ";
    cin >> totalMatkul;
    getMatkul(totalMatkul);

  
    ofstream txt("hasil.txt");
    txt << "Nama : " << name << endl;
    txt << "NIM  : " << nim << endl;
    txt << "Daftar Matkul\t\t\t\tSKS \n";
    for(int i = 0; i < Index; i++ ) {
      txt << data[i].matkul << "\t\t\t\t\t\t\t\t" << data[i].sks << endl;
    } 
    txt << "Total pembayaran  = Rp." << Harga();
    txt.close();
}