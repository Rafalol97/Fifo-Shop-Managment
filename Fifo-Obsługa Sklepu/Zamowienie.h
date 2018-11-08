#pragma once
using namespace std;
class Zamowienie
{
	
	string ID;
	string Imie_Klienta;
	string Nazwisko_Klienta;
	string Miasto_zamieszkania;
	string Ulica_zamieszkania;
	int numer_domu; 
	
public:
	Zamowienie *next;
	Zamowienie *prev;
	Zamowienie(string, string, string, string, string, int);
	Zamowienie();
	~Zamowienie();
};



Zamowienie::Zamowienie()
{
}
Zamowienie::Zamowienie(string ID, string Imie_Klienta, string Nazwisko_Klienta, string Miasto_zamieszkania, string Ulica_zamieszkania, int numer_mieszkania)
:ID(ID),Imie_Klienta(Imie_Klienta),Nazwisko_Klienta(Nazwisko_Klienta),Miasto_zamieszkania(Miasto_zamieszkania),Ulica_zamieszkania(Ulica_zamieszkania),numer_domu(numer_domu){
}


Zamowienie::~Zamowienie()
{
}

