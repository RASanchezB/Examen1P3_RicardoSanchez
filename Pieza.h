#ifndef PIEZA_H
#define PIEZA_H

#include <string>
using namespace std;

class Pieza{
	private:
		string Tipo;
		char Color;
	public:
		Pieza(string,char);
		Pieza();
		//getters
		string getTipo();
		char getColor();
		//setters
		void setTipo(string);
		void setColor(char);
		//destructor
		~Pieza();
};
#endif
