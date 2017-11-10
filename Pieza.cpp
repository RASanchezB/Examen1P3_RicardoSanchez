#include "Pieza.h"
#include <iostream>
#include <string>

using namespace std;

Pieza::Pieza(){
	this->Tipo = "N/A";
	this->Color = ' ';
}
Pieza::Pieza(string pTipo, char pColor){
	Tipo = pTipo;
	Colo = pColor;
}
string Pieza::getTipo(){
	return Tipo;
}
char Pieza::getColor(){
	return Color;
}
void Pieza::setTipo(string pTipo){
	Tipo = pTipo;
}
void Pieza::setColor(char pColor){
	Color = pColor;
}
Pieza::~Pieza(){
	cout<<"El destructor funciono"<<endl;
}
