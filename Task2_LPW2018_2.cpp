#include <iostream>

/*1. Declare una cadena de caracteres llamada my_string utilizando un puntero */

//std::cout<<"Cadena my_string: ";
//std::cout<< /*Aqui va la cadena my_string */ <<std::endl;

/*2. Declare una estructura global con 6 miembros de distinto tipo y en este orden (con sus miembros inicializados):
* int
* char
* float
* char
* double
 * int
 */

/* Declare otra estructura global con 6 miembros de distinto tipo y en este orden (con sus miembros inicializados):
 * int
 * int
 * float
 * char
 * char
 * double
 */

//Declare punteros a cada una de las estructuras e imprima en pantalla el valor de sus miembros haciendo uso
//del operador ->
//Luego imprima de nuevo el valor de los miembros de la estructura pero esta vez haga uso de "type casting",
//operadores y aritmetica de punteros
//Calcule el tamaño de cada estructura con la funcion sizeof() y explique en un comentario sus observaciones
//acerca del resultado obtenido respecto a los tamanios de las estructuras

/*3.Agregue a la funcion foo_function() un arreglo unidimensional del tipo y del tamanio que ud prefiera.
 * Declare un puntero al arreglo y luego agregue las lineas de codigo necesarias para lograr que cada vez que
 * se haga un llamado a la funcion foo_function() dentro de la funcion main se imprima un elemento del arreglo
 * (en el orden que estan en el arreglo) con ayuda de la aritmetica de punteros.
 */

/* Enlaces de internet utiles:
 * http://c.conclase.net/curso/index.php?cap=011
 * http://c.conclase.net/curso/index.php?cap=011b#STR_sizeof
 * https://stackoverflow.com/questions/8657776/pointer-arithmetic-with-structures
 * https://stackoverflow.com/questions/119123/why-isnt-sizeof-for-a-struct-equal-to-the-sum-of-sizeof-of-each-member
 * http://www.catb.org/esr/structure-packing/
 * https://www.geeksforgeeks.org/structure-member-alignment-padding-and-data-packing/
 */

void foo_function(void); //Esta declaracion dejela tal y como esta

int main()
{
	
	//Agregue su codigo aqui
    

    //Aqui puede agregar mas llamadas a function1.....
    foo_function();
        



    return 0;
}

void foo_function(void)
{
	//Su codigo aqui
    std::cout<<<<std::endl;
    //Su codigo aqui tambien si quiere
}