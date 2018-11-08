#pragma once
class Pozycja
{
	string  nazwa_produktu; 
	string ID_produktu; 
	int liczba_produktow;
	double cena; 
	Pozycja *nast; 

public:
	Pozycja();
	~Pozycja();
};



Pozycja::Pozycja()
{
}


Pozycja::~Pozycja()
{
}
