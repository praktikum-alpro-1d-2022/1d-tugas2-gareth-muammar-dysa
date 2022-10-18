#include <iostream>
using namespace std;
int main () {

float panjang,lebar,sisi,alas,tinggi,d1,d2,a,b,jarijari,luas;

  //luas persegi
  cout << "-----RUMUS LUAS PERSEGI------" << endl;
  cout << "  sisi = ";
  cin >> sisi;

  luas = sisi*sisi;
  cout << "  luas persegi= " << luas << endl;
  cout << endl;

  //luas persegi panjang
  cout << "-----RUMUS LUAS PERSEGI PANJANG-----" << endl;
  cout << "  panjang = ";
  cin >> panjang;

  cout << "  lebar = ";
  cin >> lebar;

  luas = panjang*lebar;
  cout << "  luas persegi panjang = " << luas << endl;
  cout << endl;

  //luas segitiga
  cout << "-----RUMUS LUAS SEGITIGA-----" << endl;
  cout << "  alas = ";
  cin >> alas;

  cout << "  tinggi = ";
  cin >> tinggi;

  luas = 0.5*alas*tinggi;
  cout << "  luas segitiga = " << luas << endl;
  cout << endl;

  //luas trapesium
  cout << "-----RUMUS LUAS TRAPESIUM-----" << endl;
  cout << "  a = ";
  cin >> a;

  cout << "  b = ";
  cin >> b;

  cout << "  tinggi = ";
  cin >> tinggi;

  luas = ((a+b)*tinggi)*0.5;
  cout << "  luas trapesium = " << luas << endl;
  cout << endl;

  //luas jajar genjang
  cout << "-----RUMUS LUAS JAJAR GENJANG-----" << endl;
  cout << "  alas = ";
  cin >> alas;

  cout << "  tinggi = ";
  cin >> tinggi;

  luas = alas*tinggi;
  cout << "  luas jajar genjang = " << luas << endl;
  cout << endl;

  //luas belah ketupat
  cout << "-----RUMUS LUAS BELAH KETUPAT-----" << endl;
  cout << "  d1 = ";
  cin >> d1;

  cout << "  d2 = ";
  cin >> d2;

  luas = 0.5*d1*d2;
  cout << "  luas belah ketupat = " << luas << endl;
  cout << endl;

  //luas layang - layang
  cout << "-----RUMUS LUAS LAYANG-LAYANG-----" << endl;
  cout << "  d1 = ";
  cin >> d1;

  cout << "  d2 = ";
  cin >> d2;

  luas = 0.5*d1*d2;
  cout << "  luas belah ketupat = " << luas << endl;
  cout << endl;

  //luas lingkaran
  cout << "-----RUMUS LUAS LINGKARAN" << endl;
  cout << "  jari-jari = ";
  cin >> jarijari;

  luas = 3.14*((jarijari*jarijari));
  cout << "  luas lingkaran = " << luas << endl;
  cout << endl;


return 0;
}








