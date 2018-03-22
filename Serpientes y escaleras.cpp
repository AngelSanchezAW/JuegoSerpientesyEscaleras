// Angel de Jesús Sánchez Espinoza, Matricula: 188787, Materia: Sistemas de Sistemas.

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h> 

using namespace std;

int main(){
	//Declaramos las variables.
	int jugador1 = 0, jugador2 = 0, turno = 0, dado1 = 0, dado2 = 0, lanzamiento = 0, condicion = 0, n = 100;
	
	//Inicializar los números aleatorios.
	srand(time(NULL));
	
	cout<<"Juego Serpientes y Escaleras"<<endl<<endl;
	
	//Guardamos el numero aleatorio para el turno (1 o 2).
	turno = 1 + rand() % (3-1);
	
	if(turno==1){
		cout<<"Volado, el jugador 1 inicia."<<endl<<endl;
	} else {
		cout<<"Volado, el jugador 2 inicia."<<endl<<endl;
	}
	
	getch();
	
	do{
		switch(turno){
			case 1:
				cout<<"Turno del Jugador 1"<<endl<<endl;
				//Lanzamos dados.
				dado1 = 1 + rand() % (7-1);
				cout<<"Dado 1: "<<dado1<<endl;	
				dado2 = 1 + rand() % (7-1);
				cout<<"Dado 2: "<<dado2<<endl; 
				//Calculamos total de movimientos (suma de dados).
				lanzamiento = dado1 + dado2;
				cout<<"Total de movimientos: "<<lanzamiento<<endl;
				//Nueva posición del jugador 1.
				jugador1 += lanzamiento;
				//Verificamos si sobrepasó los 100.
				if(jugador1 > n){
					cout<<"Has sobrepasado las 100 celdas por "<<(jugador1 - n)<<endl; 
					jugador1 = n - (jugador1 - n);
					cout<<"Tu posicion ahora es: "<<jugador1<<endl<<endl;
				}
				//Varificar condiciones.
				switch(jugador1){
					case 100:
						//Gana el juego.
						cout<<"El jugador 1 ha ganado el juego."<<endl<<endl;
					break;
					case 39: 
						jugador1 = 42;
						cout<<"Genial, has caido en una escalera, avanzas hasta el 42"<<endl<<endl;
					break;
					case 60: 
						jugador1 = 79;
						cout<<"Genial, has caido en una escalera, avanzas hasta el 79"<<endl<<endl;
					break;
					case 80: 
						jugador1 = 20;
						cout<<"Noo, has caido en la cabeza de una serpierte, retrocedes hasta el 20"<<endl<<endl;
					break;
					case 82: 
						jugador1 = 1;
						cout<<"Noo, has caido en la cabeza de una serpierte, retrocedes hasta el 1 (Como mi calificacion en simulacion)"<<endl<<endl;
					break;
					default: 
						cout<<"Posicion actual del jugador: "<<jugador1<<endl<<endl;
					break;
				}
				//Cambiamos de jugador.
				turno = 2;
				
				//Posición visual de jugadores.
				cout<<"Jugador 1: ";
				for(int i = 1; i <= jugador1; i++){
					cout<<"("<<i<<")";
				}
				cout<<endl;
				cout<<"Jugador 2: ";
				for(int i = 1; i <= jugador2; i++){
					cout<<"["<<i<<"]";
				}
				cout<<endl<<endl;
				//Pausa (Dar enter)
				getch(); 
			break;
			case 2:
				cout<<"Turno del Jugador 2"<<endl<<endl;
				//Lanzamos dados.
				dado1 = 1 + rand() % (7-1);
				cout<<"Dado 1: "<<dado1<<endl;	
				dado2 = 1 + rand() % (7-1);
				cout<<"Dado 2: "<<dado2<<endl; 
				//Calculamos total de movimientos (suma de dados).
				lanzamiento = dado1 + dado2;
				cout<<"Total de movimientos: "<<lanzamiento<<endl;
				//Nueva posición del jugador 1.
				jugador2 += lanzamiento;
				//Verificamos si sobrepasó los 100.
				if(jugador2 > n){
					cout<<"Has sobrepasado las 100 celdas por "<<(jugador2 - n)<<endl; 
					jugador2 = n - (jugador2 - n);
					cout<<"Tu posicion ahora es: "<<jugador2<<endl<<endl;
				}
				//Varificar condiciones.
				switch(jugador2){
					case 100:
						//Gana el juego.
						cout<<"El jugador 1 ha ganado el juego."<<endl<<endl;
					break;
					case 39: 
						jugador2 = 42;
						cout<<"Genial, has caido en una escalera, avanzas hasta el 42"<<endl<<endl;
					break;
					case 60: 
						jugador2 = 79;
						cout<<"Genial, has caido en una escalera, avanzas hasta el 79"<<endl<<endl;
					break;
					case 80: 
						jugador2 = 20;
						cout<<"Noo, has caido en la cabeza de una serpierte, retrocedes hasta el 20"<<endl<<endl;
					break;
					case 82: 
						jugador2 = 1;
						cout<<"Noo, has caido en la cabeza de una serpierte, retrocedes hasta el 1 (Como mi calificacion en simulacion)"<<endl<<endl;
					break;
					default: 
						cout<<"Posicion actual del jugador: "<<jugador2<<endl<<endl;
					break;
				}
				//Cambiamos de jugador.
				turno = 1;
				//Posición visual de jugadores.
				cout<<"Jugador 1: ";
				for(int i = 1; i <= jugador1; i++){
					cout<<"("<<i<<")";
				}
				cout<<endl;
				cout<<"Jugador 2: ";
				for(int i = 1; i <= jugador2; i++){
					cout<<"["<<i<<"]";
				}
				cout<<endl<<endl;
				//Pausa (Dar enter)
				getch(); 
			break;
		}	
	}while(jugador1!=100 && jugador2!=100);
	
	cout<<"El juego ha finalizado";
	
	return 0;
}
