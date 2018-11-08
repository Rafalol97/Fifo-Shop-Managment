#include "Zamowienie.h"
#pragma once
using namespace std;
class FIFO
{
	class Zamowienie *first; 
	class Zamowienie *last; 
	int liczba_zamowien;
public:
	FIFO();
	~FIFO();
	FIFO(string); 
	Zamowienie * pop();
	void push(string,string,string,string,string,int); 
	bool readFromFile(string nazwa_pliku);
	bool writeToFile(string nazwa_pliku);
};

FIFO::FIFO(): liczba_zamowien(0), first(NULL), last(NULL)
{

}
FIFO::FIFO(string nazwa_pliku) : liczba_zamowien(0), first(NULL), last(NULL) {
	readFromFile(nazwa_pliku);
}


FIFO::~FIFO()
{

}

Zamowienie * FIFO::pop() {
	Zamowienie *usuwany;
	usuwany = this->first;
	usuwany->prev->next = NULL;
	this->first = usuwany->prev;
	this->liczba_zamowien--;
	return usuwany;
}

void FIFO::push(string ID,string Imie_Klienta,string Nazwisko_Klienta,string Miasto_zamieszkania,string Ulica_zamieszkania,int numer_mieszkania) {
	Zamowienie *nowy = new Zamowienie(ID, Imie_Klienta, Nazwisko_Klienta, Miasto_zamieszkania, Ulica_zamieszkania, numer_mieszkania);
	this->last->prev = nowy;
	nowy->next = this->last;
	this->last = nowy;
	this->liczba_zamowien++;
}
bool readFromFile(string nazwa_pliku) {

}
bool writeToFile(string nazwa_pliku) {

}
