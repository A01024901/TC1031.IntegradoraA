# TC1031.Proyecto
# Calculadora de tiempo/costo de transito de productos ordenados en linea 
Se basa en el calculo que se hace para la construccion aproximado de algun producto usando informacion como la fecha, la cantidad de unidades y el producto. Para dar una fecha y precio aproximado del producto 

>Datos/ejemplo: 
>
>Producto: Telefono (Tipo de articulo, en base a esto se genera el costo de envio)
>
>Fecha: 19/01/21(Fecha desglozada)
>     Día: 19
>     Mes: Enero
>     Año: 2021
>
>Unidades: 15 (Se le da un porcentaje de aplazamiento en base a la cantidad)
>
>

Utilizando esta informacion sera dividadia en casos. 
Si algun producto tiene un pedido menor a 30 unidades es una orden de prioridad baja, por lo tanto se le tiene que poner algo de demora para reservar las maquinas para pedidos mas importantes. Dando una demora aproximada del 50% más de lo que cuesta construir alguno de estos productos. 

    Tiempo (20 unidades) = TiempoEstandar * 0.5 + TiempoEstandar 
    Este concepto se debe de aplicar a la fecha para tener un display correcto

Si el mismo producto tiene un pedido entre 30 y 100 unidades es de prioridad media y tiene un menor demora en el tiempo de produccion ya que es más conveniente a la fabrica sin embargo no es de la prioridad más alta ya que siguen sin ser demasiados para usar todos los equipos de la fabrica. 

    Tiempo (50 unidades) = TiempoEstandar * 0.2 + TiempoEstandar 
    Este concepto se debe de aplicar a la fecha para tener un display correcto
    
En el caso de que el pedido sea mayor a 100 unidades y menor a 200 el producto tendra el menor tiempo posible el cual seria el tiempo estandar

    Tiempo (150 unidades) = TiempoEstandar
    
El cuarto caso seria un cobro extra por ser un envio de emergencia, el cual a cambio de usar más herramienta para producir un lote pequeño se hace un cobro adicional.
    Tiempo express (50 unidades) = Tiempo estandar - Tiempo estandar * 0.2
    Tiempo express (150 unidades) = Tiempo estandar

## SICT0302B: Toma decisiones 

### Selecciona y usa una estructura lineal adecuada al problema

(Llena texto)


### Selecciona un algoritmo de ordenamiento adecuado al problema
Ya que voy a utilizar las fechas como metodo de organizacion voy a usar por el momento el metodo de la burbuja debido a que es simple, al separar la informacion de la fecha y tener más filtros para hacer que una fecha sea intercambiada y tener organizada la informacion por la fecha. En cambio tengo pensado usar un mergesort 

### Usa un árbol adecuado para resolver un problema

(Llena texto)

## SICT0301B: Evalúa los componentes

### Presenta Casos de Prueba correctos y completos para todas las funciones y procedimientos del programa,

(Llena texto)

### Hace un análisis de complejidad correcto y completo para todo el programa y sus compenetes,

#### lista de paquetes

(Llena texto)

#### ordenamiento de paquetes

(Llena texto)

#### uso de árbol

(Llena texto)

## SICT0303B: Implementa acciones científicas 

### Implementa mecanismos para consultar información de las estructuras correctos y útiles dentro de un programa.

(Llena texto)

### Implementa mecanismos de lectura de archivos correctos y útiles dentro de un programa. Usar de manera

(Llena texto)

### Implementa mecanismos de escritura de archivos correctos y útiles dentro de un programa. Usar de manera

(Llena texto)
