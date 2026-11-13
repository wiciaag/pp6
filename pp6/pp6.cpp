// pp6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    /*zadanie1
    int a, b;
    a = 7;
    b = 2;
    cout << a / b << endl;
    cout << static_cast<double>(a) / b << endl;
    cout << static_cast<double>(a / b) << endl;*/
    /*zadanie2
    double a = -3.99;
    cout << a << endl;
    cout << (int)a << endl;
    cout << static_cast<int>(a) << endl;//podczas konwersji czêœæ u³amkowa jest ca³kowicie usuwana*/
    /*zadanie3
    char a = 'A';
    cout << a << endl;
    cout << (int)a << endl;
    cout << static_cast<int>(a) << endl;
    int b = 65;
    cout << b << endl;
    cout << (char)b << endl;
    cout << static_cast<char>(b) << endl;*/
    /*zadanie4
    int a, b, suma, ilosc;
    cout << "podaj a: ", cin >> a;
    cout << "podaj b: ", cin >> b;
    suma = a + b;
    ilosc = 2;
    cout << "srednia arytmetyczna z sumy i ilosci: " << (suma + ilosc) / 2 << endl;
    cout << "srednia arytmetyczna z sumy i ilosci bez zaokraglenia: " << static_cast<double>(suma + ilosc) / 2 << endl;*/
    /*zadanie5
    int wykonane, niewykonane;
    cout << "ile zadan juz wykonalas: ", cin >> wykonane;
    cout << "ile zadan ci pozostalo: ", cin >> niewykonane;
    if(wykonane+niewykonane!=0){
    cout << "wykonalas juz " << static_cast<double>(wykonane) / (wykonane + niewykonane) * 100 << " procent zadan" << endl;
    }
    else{
    cout<<"nie mozna dzielic przez 0";*/

    /*zadanie6
    cout << "wprowadz tekst: ";
    string tekst;
    getline(cin, tekst);
    cout << tekst << endl;
    cout << "dlugosc twojego tekstu to: " << tekst.length() << endl;//spacje sa uwzglednione w dlugosci*/
    /*zadanie7
    int a, b;
    cout << "podaj jakis tekst: " << endl;
    string tekst;
    getline(cin, tekst);
    cout << "podaj indeks poczatkowy: ", cin >> a;
    cout << "podaj dlugosc wycinanego fragmentu: ", cin >> b;
    string fragment = tekst.substr(a, b);
    cout << fragment;*/
    /*zadanie8
    cout << "podaj date w formacie RRRR-MM_DD: ";
    string tekst;
    getline(cin, tekst);
   cout << tekst << endl;
   string rok = tekst.substr(0, 4);
   cout << "rok: " << rok << endl;
   string miesiac = tekst.substr(5, 2);
   cout << "miesiac: " << miesiac << endl;
   string dzien = tekst.substr(8, 2);
   cout << "dzien: " << dzien << endl;*/
   /*zadanie9
   cout << "podaj jakikolwiek tekst: ";
   string tekst;
   getline(cin, tekst);
   cout << "podaj szukana fraze: ";
   string fraza;
   getline(cin, fraza);
   int pozycja = tekst.find(fraza, 0);
   if (pozycja != -1) {
       cout << "znaleziono szukana fraze na pozycji: " << pozycja<<endl;
   }
   else {
       cout << "nie znaleziono szukanej frazy:(";
   }*/
   /*zadanie10
   cout << "podaj adres email: ";
   string email;
   getline(cin, email);
   int malpa = email.find("@", 0);
   string domena = email.substr(malpa+1);
   string poczatek = email.substr(0, malpa);
   cout << "nazwa uzytkownika: " << poczatek << endl;
   cout << "domena: " << domena << endl;*/
   /*zadanie11
      cout << "podaj imie: ";
      string imie;
      getline(cin, imie);
      cout << "podaj nazwisko: ";
      string nazwisko;
      getline(cin, nazwisko);
      string nazwa;
      nazwa = imie + " " + nazwisko;
      cout << "imie i nazwisko: " << nazwa << "\n";
      int dlugosc = nazwa.length();
      cout << "dlugosc twojego imienia i nazwiska (bez spacji): " << dlugosc - 1;*/
      /*zadanie12
     string liczba;
     cout << "podaj liczbe: ", cin >> liczba;
     int niechar = stoi(liczba);
     cout << niechar << " " << 2 * niechar << " " << niechar + 10;*/
     /*zadanie13
     int nowy;
     for (int i = 0;i < 5;i++) {

         cout << "podaj cene produktu: ";
         string cena;
         getline(cin, cena);
         double wartosc = stod(cena);
         cout << "cena to: " << wartosc << endl;
         nowy = (int)wartosc;
     }
     cout << "ostatnia cena w incie: " << nowy << endl;*/
     /*zadanie14
    string napis = "12.5";
    int liczba = stoi(napis);
    cout << liczba;*/
/*zadanie15
cout << "podaj liczbe: ";
string tekst;
getline(cin,tekst);
try {
    int liczba = stoi(tekst);
    cout << liczba;
}
catch (...) {
    cout << "nieprawidlowy zapis";
}*/
/*zadanie16
cout << "podaj wiek: ";
string wiek;
getline(cin, wiek);
try {
    int lata = stoi(wiek);
    if (lata > 150 || lata < 0) {
        cout << "tacy ludzie nie istnieja:(";
    }
    else {
        cout << "prawidlowy wiek:)";
    }
}
catch (...) {
    cout << "nieprawidlowy zapis liczby";
}*/
/*zadanie17
cout << "podaj imie nazwisko i wiek w podanym formacie: imie nazwisko;wiek :" << endl;
string dane;
getline(cin, dane);
int srednik = dane.find(";", 0);
string nazwa = dane.substr(0, srednik);
string wiek = dane.substr(srednik + 1);
int wiekint = stoi(wiek);
if (wiekint < 150 && wiekint > 0) {
    cout << "imie i nazwisko: " << nazwa << " wiek: " << wiekint;
}
else {
    cout << "be for real:|";
}*/
/*zadanie18*/
string zmienna = "10 20 30";
stringstream liczby(zmienna);
int a, b, c;
liczby>> a >> b >> c;
cout << a + b + c << endl;
cout <<static_cast<double> (a + b + c) / 3 << endl;
}


