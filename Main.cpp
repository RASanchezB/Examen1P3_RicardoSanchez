#include "Pieza.h"
#include <iostream>
#include <string>

using namespace std;
Pieza*** crearTablero();
Pieza*** llenarTablero(Pieza***);
void imprimirTablero(Pieza***);
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
	cout<<"Ingrese el nombre del Jugador1:"<<endl;
	cin>>Jugador1;
	cout<<"Ingrese el nombre del Jugador2"<<endl;
	cin>>Jugador2;
	//llenar el tablero
	Tablero = llenarTablero(Tablero);
	//Primera impresion del tablero
	imprimirTablero(Tablero);

	//Empieza el juego
	cout << "Empieza el juego" << endl;
	bool continua = true;
	cout<<"Tu turno de: "<<Jugador1<<endl;
	while(false){
		cout<<"Turno de: "<<Jugador1<<endl;
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
Pieza*** llenarTablero(Pieza*** tablero){
	Pieza* PBlanca = new Pieza("Marine",'B');
	Pieza* PNegra =  new Pieza("Marine",'N');
	Pieza* Vacia = new Pieza("Ninguna",' ');
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i == 0 || i == 2) {
				if(j%2 == 0){
					tablero[i][j] = Vacia;
				}else{
					tablero[i][j] = PNegra;
				}
			} else if(i == 1){
				if(j%2 == 0){
					tablero[i][j] = PNegra;
				}else{
					tablero[i][j] = Vacia;
				}
			}else if(i == 5 || i == 7){
				if(j%2 == 0){
					tablero[i][j] = PBlanca;
				}else{
					tablero[i][j] = Vacia;
				}
			}else if(i == 6){
				if(j%2==0){
					tablero[i][j] = Vacia;
				}else{
					tablero[i][j] = PBlanca;
				}
			}else{
				tablero[i][j] = Vacia;
			}
		}
	}
	delete PBlanca;
	delete PNegra;
	return tablero;
}
void imprimirTablero(Pieza*** tablero){
	cout << "   (a) (b) (c) (d) (e) (f) (g) (h)" << endl;
	for (int i = 0; i < 8; i++) {
		cout<<"("<<i<<")";
		for (int j = 0; j < 8; j++) {
			cout << "[" << tablero[i][j] -> getColor()<<"] ";
		}
		cout<<endl;
	}
}
void eliminiarTablero(Pieza*** tablero){
	for (int i = 0; i < 8; i++) {
		delete[] tablero[i];
	}
	delete[] tablero;
}
