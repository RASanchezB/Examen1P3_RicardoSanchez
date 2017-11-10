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
	int CuentaTurnos = 0;
	cout<<"Hatsa arreglar el metodo de victoria la prueba se repetira solo 3 veces"<<endl;
	while(CuentaTurnos < 3){
		if(CuentaTurnos%2 == 0){
			//El turno del primer jugador----------------------------------------------------------
			cout<<"Es tu turno: "<<Jugador1<<endl;
			cout<<"Ingrese las cordenadas de inicio y final del movimiento (Ejemplo: A6-B7):"<<endl;
			string MovementB = "";
			cin>>MovementB;
			int ColumnaIni = -1;
			int FilaIni = -1;
			int ColumnaFin = -1;
			int FilaFin = -1;
			//Para conseguir la columna inicial
			if(MovementB.at(0) == 'A' || MovementB.at(0) == 'a'){
				ColumnaIni = 0;
			}else if(MovementB.at(0) == 'B' || MovementB.at(0) == 'b'){
				ColumnaIni = 1;
			}else if(MovementB.at(0) == 'C' || MovementB.at(0) == 'c'){
				ColumnaIni = 2;
			}else if(MovementB.at(0) == 'D' || MovementB.at(0) == 'd'){
				ColumnaIni = 3;
			}else if(MovementB.at(0) == 'E' || MovementB.at(0) == 'e'){
				ColumnaIni = 4;
			}else if(MovementB.at(0) == 'F' || MovementB.at(0) == 'f'){
				ColumnaIni = 5;
			}else if(MovementB.at(0) == 'G' || MovementB.at(0) == 'g'){
				ColumnaIni = 6;
			}else if(MovementB.at(0) == 'H' || MovementB.at(0) == 'h'){
				ColumnaIni = 7;
			}
			//Para conseguir la fila inicial
			if(MovementB.at(1) == '1'){
				FilaIni = 0;
			}else if(MovementB.at(1) == '2'){
				FilaIni = 1;
			}else if(MovementB.at(1) == '3'){
				FilaIni = 2;
			}else if(MovementB.at(1) == '4'){
				FilaIni = 3;
			}else if(MovementB.at(1) == '5'){
				FilaIni = 4;
			}else if(MovementB.at(1) == '6'){
				FilaIni = 5;
			}else if(MovementB.at(1) == '7'){
				FilaIni = 6;
			}else if(MovementB.at(1) == '8'){
				FilaIni = 7;
			}
			//Para conseguir la columna final
			if(MovementB.at(3) == 'A' || MovementB.at(3) == 'a'){
				ColumnaFin = 0;
			}else if(MovementB.at(3) == 'B' || MovementB.at(3) == 'b'){
				ColumnaFin = 1;
			}else if(MovementB.at(3) == 'C' || MovementB.at(3) == 'c'){
				ColumnaFin = 2;
			}else if(MovementB.at(3) == 'D' || MovementB.at(3) == 'd'){
				ColumnaFin = 3;
			}else if(MovementB.at(3) == 'E' || MovementB.at(3) == 'e'){
				ColumnaFin = 4;
			}else if(MovementB.at(3) == 'F' || MovementB.at(3) == 'f'){
				ColumnaFin = 5;
			}else if(MovementB.at(3) == 'G' || MovementB.at(3) == 'g'){
				ColumnaFin = 6;
			}else if(MovementB.at(3) == 'H' || MovementB.at(3) == 'h'){
				ColumnaFin = 7;
			}
			//Para conseguir la fila final
			if(MovementB.at(4) == '1'){
				FilaFin = 0;
			}else if(MovementB.at(4) == '2'){
				FilaFin = 1;
			}else if(MovementB.at(4) == '3'){
				FilaFin = 2;
			}else if(MovementB.at(4) == '4'){
				FilaFin = 3;
			}else if(MovementB.at(4) == '5'){
				FilaFin = 4;
			}else if(MovementB.at(4) == '6'){
				FilaFin = 5;
			}else if(MovementB.at(4) == '7'){
				FilaFin = 6;
			}else if(MovementB.at(4) == '8'){
				FilaFin = 7;
			}
			//Hacer el movimiento
			if(ColumnaIni < 0 || ColumnaIni > 7 || FilaIni < 0 || FilaIni > 7 || FilaFin < 0 || FilaFin > 7){
				cout<<"Su movimiento es invalido. Pierde si turno"<<endl;
			}else{

			}
			//Validar si el juego continua
			if(ContadorDeNegros == 0){
				continua = false;
			}
			CuentaTurnos++;
			imprimirTablero(Tablero);

		}else{
			//El turno del psegundo jugador------------------------------------------------------------
			cout<<"Es tu turno: "<<Jugador2<<endl;
			cout<<"Ingrese las cordenadas de inicio y final del movimiento (Ejemplo: A6-B7):"<<endl;
			string MovementN = "";
			cin>>MovementN;
			int ColumnaIni = -1;
			int FilaIni = -1;
			int ColumnaFin = -1;
			int FilaFin = -1;
			//Para conseguir la columna inicial
			if(MovementN.at(0) == 'A' || MovementN.at(0) == 'a'){
				ColumnaIni = 0;
			}else if(MovementN.at(1) == 'B' || MovementN.at(1) == 'b'){
				ColumnaIni = 1;
			}else if(MovementN.at(1) == 'C' || MovementN.at(1) == 'c'){
				ColumnaIni = 2;
			}else if(MovementN.at(1) == 'D' || MovementN.at(1) == 'd'){
				ColumnaIni = 3;
			}else if(MovementN.at(1) == 'E' || MovementN.at(1) == 'e'){
				ColumnaIni = 4;
			}else if(MovementN.at(1) == 'F' || MovementN.at(1) == 'f'){
				ColumnaIni = 5;
			}else if(MovementN.at(1) == 'G' || MovementN.at(1) == 'g'){
				ColumnaIni = 6;
			}else if(MovementN.at(1) == 'H' || MovementN.at(1) == 'h'){
				ColumnaIni = 7;
			}
			//Para conseguir la fila inicial
			if(MovementN.at(1) == '1'){
				FilaIni = 0;
			}else if(MovementN.at(1) == '2'){
				FilaIni = 1;
			}else if(MovementN.at(1) == '3'){
				FilaIni = 2;
			}else if(MovementN.at(1) == '4'){
				FilaIni = 3;
			}else if(MovementN.at(1) == '5'){
				FilaIni = 4;
			}else if(MovementN.at(1) == '6'){
				FilaIni = 5;
			}else if(MovementN.at(1) == '7'){
				FilaIni = 6;
			}else if(MovementN.at(1) == '8'){
				FilaIni = 7;
			}
			//Para conseguir la columna final
			if(MovementN.at(3) == 'A' || MovementN.at(3) == 'a'){
				ColumnaFin = 0;
			}else if(MovementN.at(3) == 'B' || MovementN.at(3) == 'b'){
				ColumnaFin = 1;
			}else if(MovementN.at(3) == 'C' || MovementN.at(3) == 'c'){
				ColumnaFin = 2;
			}else if(MovementN.at(3) == 'D' || MovementN.at(3) == 'd'){
				ColumnaFin = 3;
			}else if(MovementN.at(3) == 'E' || MovementN.at(3) == 'e'){
				ColumnaFin = 4;
			}else if(MovementN.at(3) == 'F' || MovementN.at(3) == 'f'){
				ColumnaFin = 5;
			}else if(MovementN.at(3) == 'G' || MovementN.at(3) == 'g'){
				ColumnaFin = 6;
			}else if(MovementN.at(3) == 'H' || MovementN.at(3) == 'h'){
				ColumnaFin = 7;
			}
			//Para conseguir la fila final
			if(MovementN.at(4) == '1' || MovementN.at(4) == 'a'){
				FilaFin = 0;
			}else if(MovementN.at(4) == '2'){
				FilaFin = 1;
			}else if(MovementN.at(4) == '3'){
				FilaFin = 2;
			}else if(MovementN.at(4) == '4'){
				FilaFin = 3;
			}else if(MovementN.at(4) == '5'){
				FilaFin = 4;
			}else if(MovementN.at(4) == '6'){
				FilaFin = 5;
			}else if(MovementN.at(4) == '7'){
				FilaFin = 6;
			}else if(MovementN.at(4) == '8'){
				FilaFin = 7;
			}
			//Hacer el movimiento
			if(ColumnaIni < 0 || ColumnaIni > 7 || FilaIni < 0 || FilaIni > 7 || FilaFin < 0 || FilaFin > 7){
				cout<<"Su movimiento es invalido. Pierde si turno"<<endl;
			}else{

			}
			//Validar si el juego continua
			if(ContadorDeBlancos == 0){
				continua = false;
			}
			CuentaTurnos++;
			imprimirTablero(Tablero);
		}
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
