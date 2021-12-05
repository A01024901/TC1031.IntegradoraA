## TC1031.Integradora A

# Calculadora de precio en envios usando CP o coordenadas. 

Se basa en el calculo de distancia usando coordenadas/CP del punto de envio a su destino (en esta version el punto de envio es fijo), este programa esta pensado para negocios que van a enviar algun producto a algun lugar de la ciudad. 

>Ejemplo de Producto: 
>
>ID = 1
>
>Volumen: 950 cm^3
>
>Fecha: 19/01
>     Día: 19
>     Mes: Enero
>
>Ejemplo Ubicacion:
>
>CP: 52786
>   latitud: 19.361111111111
>   longitud: -99.350833333333

Utilizando esta informacion se hara el calculo. 
Usando las coordenadas de una planta de distribucion como referencia con la formula que se presenta a continuacion

    R = radio de la Tierra
    Δlat = lat2− lat1
    Δlong = long2− long1
    a = sin²(Δlat/2) + cos(lat1) · cos(lat2) · sin²(Δlong/2)
    c = 2 · atan2(√a, √(1−a))
    d = R · c

    

## SICT0302B: Toma decisiones 

### Selecciona y usa una estructura lineal adecuada al problema

    Para darle una estructura lineal voy a hacer una lista ligada unilateral porque van a estar organizadas mediante la fecha, por lo tanto un recorrido de ambas direcciones no es necesario al acomodar los datos de mayor a menor. 

    Analisis de complejidad (Lista ligada): Linear O(n) 
    
    Declarado como lista en la linea 22 y llenada en readLocal de la linea 60 a 77 del documento organiza.h


### Selecciona un algoritmo de ordenamiento adecuado al problema

    Ya que voy a utilizar los volumenes como referencia de organizacion, la mejor forma de tener la informacion/reporte es de mayor a menor. Para lograr esto voy a utilizar ordenamiento burbuja por su simplicidad y la poca cantidad de los datos que se maneja. En el caso de manejar un mayor volumen de datos seria recomendable el merge sort por su comportamiento logaritmico, sin embargo no es necesario en este caso.  

    Analisis de complejidad (Buble sort): Cuadrada O(n^2)

    Las funciones swap y bubleVol estan en la linea 160 a la 174 y su funcion para visualizar en main esta en la linea 176 del documento organiza.h


### Usa un árbol adecuado para resolver un problema

    Aplicare un arbol BST para organizar los codigos postales que se tengan y se agreguen para reducir el recorrido que se tenga por cada uno de CP, ya que en ningun caso se repite un codigo postal. (De ser así se tiene la opcion de modificar las coordenadas de referencia)

    Analisis de complejidad (BST): Linear O(n)

    Los nodos estan en la linea 129 y el arbol y sus funciones ba de la linea 209 a 258

## SICT0303B: Implementa acciones científicas

### Implementa mecanismos para consultar información de las estructras correctos

    Para organizar y consultar informacion se usaron distintas estructuras con la intencion de que se mostraran las competencias y fuera un programa eficiente. 
    
    En el caso de los productos te permite organizarlos mediante el volumen usando un buble sort en la lista ligada que se genera usando los volumenes, permitiendo que se tenga la informacion organizada en la opcion 6. 
>       Buble sort (opcion 5) 
    
    Por el otro lado para los codigos postales use un arbol binario para organizar la informacion de forma no lineal y usar una busqueda binaria y no tener que recorrer el arbol completo para encontrar un dato, la consulta de la informacion en el arbol se puede ver en el caso o opcion 2 con la busqueda del CP
>       Binary tree (Ubicaciones/CP) 
>       Binary Tree Search (opcion 2) 

### Implementa mecanismos de lectura de archivos correctos
    Se tienen dos archivos "csv" que permiten guardar y leer los codigos postales y coordenadas en un archivo y los productos con su ID, fecha y volumen. 

    Las funciones de lectura se encuentran en organiza.h (linea 40-78)

### Implementa mecanismos de escritura de archivos correctos
    Al agregar cada uno de las opciones a su respectiva estructura como el arbol o lista se agrega de forma automatica a su respectivo csv para tener la lista más amplia posible 

    Linea 81 a 112

## SICT0301B: Evalúa los componentes

### Presenta Casos de Prueba correctos y completos para todas las funciones y procedimientos del programa,

(Llena texto)

### Hace un análisis de complejidad correcto y completo para todo el programa y sus compenetes,




