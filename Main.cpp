#include "Pieza.h"
#include <iostream>
#include <string>

using namespace std;
Pieza*** crearTablero();
void llenarTablero(Pieza***);
void eliminiarTablero(Pieza***);

int main(){
  	int ContadorDeNegros = 12;
	int ContadorDeBlancos = 12;
	string Jugador2 = "";
	string Jugador1 = "";
	cout<<"Examen 1 de programacion 3"<<endl;
	cout << "CraftStar: XCOM" << endl;
	Pieza*** Tablero;
	Tablero = crearTablero();
	//Ingresar los nombre de los jugadores

	//Empieza el juego
	bool continua = true;
	while(continua){

	}
	//fin del juego
	eliminiarTablero(Tablero);
	//imprimir ganador

	return 0;
}

Pieza*** crearTablero(){
	Pieza*** tablero = new Pieza**[8];
	for (int i = 0; i < 8; i++) {
		tablero[i] = new Pieza*[8];
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			tablero[i][j] = NULL;
		}
	}
	return tablero;
}
void llenarTablero(Pieza*** tablero){
	Pieza* PBlanca = new Pieza("Marine",'B');
	Pieza* PNegra =  new Pieza("Marine",'N');
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i == 0 || i == 2) {
				if(!j%2 == 0){
					tablero[i][j] = PNegra;
				}
			} else if(i == 1){
				if(j%2 == 0){
					tablero[i][j] = PNegra;
				}
			}else if(i == 5 || i == 7){
				if(j%2 == 0){
					tablero[i][j] = PBlanca;
				}
			}else if(i == 6){
				if(!j%2==0){
					tablero[i][j] = PBlanca;
				}
			}
		}
	}
	delete PBlanca;
	delete PNegra;
}
void eliminiarTablero(Pieza*** tablero){
	for (int i = 0; i < 8; i++) {
		delete[] tablero[i];
	}
	delete[] tablero;
}
