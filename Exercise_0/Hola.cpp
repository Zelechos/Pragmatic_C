#include <stdio.h>//importamos libreria stdio.h
#include <windows.h>//importamos libreria windows.h


using namespace std;

int main(){
	
	//Mensaje
	
	/*                                                                                                                            
	 int x = 10;
	 string color = "red";
	 
	DADO objeto;
	objeto.TIRAR(x,color)
	*/
	//objeto HANDLE
	
	
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	
	//objeto CORD
	
	COORD Coordenadas;
	Coordenadas.X = 50;
	Coordenadas.Y = 100;
	
	
	SetConsoleCursorPosition(hCon, Coordenadas);
	printf("{[*]}");
	
	return 0;
}
