// pp6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
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
   string tekst = "2026 - 11 - 10";
   cout << tekst << endl;
   int pozycja= tekst.find("2026", 0);
   string rok = tekst.substr(pozycja, 4);
   cout << "rok: " << rok << endl;
   int pozycja2 = tekst.find("11", 0);
   string miesiac = tekst.substr(pozycja2, 2);
   cout << "miesiac: " << miesiac << endl;
   int pozycja3 = tekst.find("10", 0);
   string dzien = tekst.substr(pozycja3, 2);
   cout << "dzien: " << dzien << endl;*/

}

