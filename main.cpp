#include <iostream>
#include <cstring>
#include "organiza.h"

//Edgar Alexander Carrizalez Lerín A01024901

using namespace std;

int main (){
    list <Producto>tiendas;
    Ubicacion ubi;
    Producto pro;
    string cp1 , lat1 , lon1;
    string ID, vol , dia , mes;
    Ordenamiento tienda;
    tiendas = tienda.readLocal();

    int opc, exit = 0;
    do{
        cout << "Bienvenido a envios Carrizalez \nLe presentamos un numero de funciones a las que puede acceder para cotizar su envio" << endl;
        cout << "------------------------------------\n";
        cout << "1.- Agregar codigo postal \n2.- Buscar codigo postal " << endl;            
        cout << "3.- Modificar ubicacion \n4.- Mostrar todos los CP y coordenadas \n5.- Mostrar lista de productos enviados" << endl;
        cout << "6.- Mostrar productos por volumen \n7.- Agregar producto \n8.- Salir \nIntrodusca opcion: ";

        cin >> opc; 

        switch (opc){
            case 1: //Funciona 
            {
                cout << "<<<<<<<<<<<< Agrega CP >>>>>>>>>>>>" << endl;
                cout << "Introduzca el codigo postal: ";
                cin >> cp1;
                cout << "Introduzca la latitud: ";
                cin >> lat1;
                cout << "Introduzca la longitud: ";
                cin >> lon1;
                Ubicacion ejemplo(cp1 , lat1 , lon1);
                tienda.addCP (ejemplo);
                cout << "------------------------------------\n";
                break;
            }
            case 2: //Funciona 
                cout << "<<<<<<<<<<<< Buscar CP >>>>>>>>>>>>" << endl;
                cout << "Que codigo postal buscas: ";
                cin >> cp1;
                tienda.searchCP(cp1);
                cout << "------------------------------------\n";
                break;
            case 3:
                cout << "<<<<<<<<<<<< Modificar coordenadas CP >>>>>>>>>>>>" << endl;
                cout << "------------------------------------\n";
                break;
            case 4: //Funciona
                cout << "<<<<<<<<<<<< Mostrar todos los CP y coordenadas >>>>>>>>>>>>" << endl;
                tienda.showCPList();
                cout << "------------------------------------\n";
                break;
            case 5: //Funciona
                cout << "<<<<<<<<<<<< Mostrar lista de productos >>>>>>>>>>>>" << endl;
                tienda.showP_list();
                cout << "------------------------------------\n";
                break;
            case 6:
                cout << "<<<<<<<<<<<< Mostrar  por volumen >>>>>>>>>>>>" << endl;
                cout << "------------------------------------\n";
                break;
            case 7: //Funciona
            {
                cout << "<<<<<<<<<<<< Agregar producto >>>>>>>>>>>>" << endl;
                cout << "Introduzca el volumen: ";
                cin >> vol;
                cout << "Introduzca el día: ";
                cin >> dia;
                cout << "Introduzca la mes: ";
                cin >> mes;
                cout << "Introduzca la ID: ";
                cin >> ID;
                Producto ejemploP (ID , dia , mes , vol);
                tienda.addPro(ejemploP);
                cout << "------------------------------------\n";
                break;
            }

            case 8: //Funciona
                cout << "<<<<<<<<<<<< Gracias por participar >>>>>>>>>>>>" << endl;
                exit = 1;
                cout << "------------------------------------\n";
                break;
            
            cout << "------------------------------------\n\n";
        } 
    } while (exit == 0);
return 0;
}
