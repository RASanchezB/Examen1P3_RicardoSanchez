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
	Color = pColor;
}
string Pieza::getTipo(){
	return Tipo;
}
char Pieza::getColor(){
	return Color;
}
void Pieza::setTipo(string nTipo){
	Tipo = nTipo;
}
void Pieza::setColor(char nColor){
	Color = nColor;
}
Pieza::~Pieza(){
	cout<<"El destructor funciono"<<endl;
}
