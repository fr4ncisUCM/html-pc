#include<iostream>
#include<string>
#include<fstream>
#include"descuentos.h"
#include"clientes.h"
#include "main.h"

using namespace std;

int main() {

	mainf();

	return 0;
}

void mainf()
{
	tDescuentos tabla;
	string nombrearchivo = "descuentos.txt";
	cargarClientes(nombrearchivo, tabla);
	ifstream archivo;

	archivo.open("clientes.txt", ios::in);
	if (archivo.fail()) {
		cout << "faaaa";
	}
	tListaClientes listac = cargarClientes(archivo);

	registrarImportes(listac, tabla);

	ordenarClientes(listac);

	imprimirClientes(listac, listac.conntclient);

	seleccionarPremiados(listac, 3, "premiados.txt");
}

//float tListaCompra[8]
//