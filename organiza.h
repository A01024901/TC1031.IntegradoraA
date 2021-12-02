#ifndef organiza_h
#define organiza_h

//Edgar Alexander Carrizalez Lerín
//A01024901

#include <string> 
#include <iostream> 
#include <vector>
#include <list>
#include <sstream>   
#include <fstream>
#include <iomanip>

#include "objetos.h"

using namespace std;

class Ordenamiento {
    private:
        vector <string> datos;
        list <Producto> productos;
        BST arbolCP;

    public: 
        Ordenamiento (){datos = {};}
        list<Producto>readLocal ();
        void addPro (Producto);
        void addCP (Ubicacion);
        void searchCP (string);
        void modCoor ();
        void showCPList ();
        void showP_vol ();
        void showP_list ();
};

list<Producto> Ordenamiento :: readLocal(){
    ifstream archivo("CodigosPostales.csv");
    string linea;
    char del = ',';
    vector <string> datos;

    getline(archivo,linea);

    while(getline(archivo , linea)){
        stringstream stre(linea);
        string cp , lat, lon;

        getline(stre, cp, del);
        getline(stre , lat , del);
        getline(stre, lon , del);

        Ubicacion aux(cp, lat , lon);
        arbolCP.add(aux);
    }
    archivo.close();
    ifstream archivo1("Productos.csv");
    string linea1;
    vector <string> datos1;
    getline(archivo1,linea1);
    while (getline(archivo1 , linea1)){
        stringstream stre(linea1);
        string id , dia, mes , vol;

        getline(stre, id, del);
        getline(stre , dia , del);
        getline(stre, mes , del);
        getline(stre, vol , del);

        Producto aux(id , dia , mes , vol);
        productos.push_front(aux);
    }
    archivo1.close();
    return productos;
}


void Ordenamiento :: addPro (Producto new1){
	list<Producto>::iterator it = productos.begin();
	while( it != productos.end()){
	   it ++;}
	if(it == productos.end()){
		productos.push_front(new1);
		it = productos.begin();

		ofstream addProducts;
		addProducts.open("Productos.csv", ios :: app);
		addProducts<<new1.getID()<<","<<new1.getDia()<<",";
		addProducts<<new1.getMes()<< "," << new1.getVol() << endl;
		addProducts.close();
        cout << new1.showP();}	
}

void Ordenamiento :: addCP (Ubicacion new1){
	if (new1.getCP() == arbolCP.BSTcp(new1.getCP())){
        cout << "El elemento ya existe" << endl;
    }
    else {
        ofstream addUbi;
        addUbi.open("CodigosPostales.csv", ios :: app);
        addUbi<<new1.getCP()<<","<<new1.getLat()<<","<<new1.getLon()<< endl;
        addUbi.close();
        arbolCP.add(new1);
        cout<<new1.mostrarDatos();

    }
}

void Ordenamiento :: searchCP (string new1){
    cout << arbolCP.BSTcp(new1);
}

void Ordenamiento :: showCPList (){
    ifstream archivo("CodigosPostales.csv");
    string linea;
    char del = ',';
    vector <string> datos;

    getline(archivo,linea);

    while(getline(archivo , linea)){
        stringstream stre(linea);
        string cp , lat, lon;

        getline(stre, cp, del);
        getline(stre , lat , del);
        getline(stre, lon , del);

        Ubicacion aux(cp, lat , lon);
        cout << aux.mostrarDatos();
    }
}
/*
void Ordenamiento :: showP_vol (){
    
}*/

void Ordenamiento :: showP_list (){
    ifstream archivo1("Productos.csv");
    string linea1;
    char del = ',';
    vector <string> datos1;
    getline(archivo1,linea1);
    while (getline(archivo1 , linea1)){
        stringstream stre(linea1);
        string id , dia, mes , vol;

        getline(stre, id, del);
        getline(stre , dia , del);
        getline(stre, mes , del);
        getline(stre, vol , del);

        Producto aux(id , dia , mes , vol);
        cout << aux.showP();
    }
    archivo1.close();
}


/*
void Ordenamiento :: modCoor (){

}


*/
#endif