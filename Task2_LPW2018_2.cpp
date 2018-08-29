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
 
 /*4. Diseñe una estructura de datos tipo memoria FIFO (First In First Out). La estructura FIFO es una pila de datos
     * cuya utilidad es poder reutilizar constantemente un bloque de memoria de un tamaño arbitrario. La pila FIFO permite
     * que la lectura de los datos sea de forma que el dato que se lee en un instante dado es el primero que ha sido ingresado
     * previamente en la pila. Ejm: Se ingresan los siguientes datos en ese estricto orden A, B, C, D. Al ejecutar una lectura
     * de la FIFO el dato que se lee es A, en una posterior lectura B y así sucesivamente. Cada que se lee un dato del FIFO se 
	 * libera la posicion de memoria para ser reescrita. Dado que la pila FIFO tiene un tamaño finito, en ocasiones estara vacia
     * y en otras estara llena, de modo que cuando la FIFO esta vacia no se puede ejecutar una lectura, y cuando esta llena no 
	 * se puede ejecutar una escritura.
     *
     * Procedimiento:
     *
     * Declare una pila FIFO para valores de tipo entero, con una longitud de 20 bloques de memoria (arreglo global int de 20 posiciones).
     * Declare una variable global entera para guardar el dato obtenido a de las lecturas de la FIFO  
     * Declare una variable global entera para pasar el dato a guardar al puntero de escritura de la FIFO
     * Declare 2 punteros, uno para escribir datos en la FIFO y otro para leerlos.
     * En la funcion Init_Fifo, apunte los punteros al primer bloque de memoria perteneciente a la FIFO 
     * En la funcion Escribe_Fifo codifique la logica para que se escriba un dato en un bloque de memoria de la FIFO
     *  -> En la funcion se debe verificar que la FIFO no este llena, esto se hace verificando que al hacer un incremento a la direccion
     *     almacenada en el puntero de escritura esta no sea igual a la direccion almacenada en ese momento en el puntero de
     *     lectura, O bien, que al restar ambos punteros (escritura y lectura) el resultado no sea igual al tamaño de la fifo menos uno.
     *     Si la FIFO esta llena se debe publicar un mensaje diciendo que la FIFO esta llena y abandonar la funcion.
     *  -> De otro modo, cuando la FIFO no esta llena se debe guardar el dato de la variable global de escritura en la direccion almacenada
     *     en ese instante por el puntero de escritura. Debe verificarse que el puntero no desborda el tamaño de la FIFO, es decir, que cuando el puntero
     *     de escritura alcance el ultimo bloque de memoria de la fifo (tamaño FIFO - 1) este debe ser devuelto al primer bloque de
     *     memoria de la fifo de nuevo, sino lo desborda entonces debe incrementar la direccion del puntero para que la proxima escritura sea en el siguiente
     *     bloque de memoria. Cuando se escribe un dato se debe poner un mensaje de escritura exitosa.
     * En la funcion Lee_Fifo codifique la logica para la lectura de un bloque de memoria de la FIFO
     *  -> Verifique primero que la FIFO no este vacia. Esto lo puede hacer comparando las direcciones almacenadas en los punteros
     *     de escritura y lectura, si estas direcciones son iguales entonces la FIFO esta vacia. Si la FIFO esta vacia debe
     *     publicar un mensaje diciendo que la FIFO esta vacia.
     *  -> De otro modo, cuando la FIFO tiene algun dato guardado, debe asignar el valor apuntado por el puntero de escritura a la
     *     variable global que ud declaro para las lecturas. Debe verificarse que el puntero no desborda el tamaño de la FIFO, es decir, que cuando el puntero
     *     de lectura alcance el ultimo bloque de memoria de la fifo (tamaño FIFO - 1) este debe ser devuelto al primer bloque de
     *     memoria de la FIFO de nuevo, de otro modo debe incrementar la direccion almacenada en el puntero. Cuando se lee un dato se debe poner un mensaje de
     *     lectura exitosa.
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
void Init_Fifo(void); //Esta declaracion dejela tal y como esta
void Escribe_Fifo(void); //Esta declaracion dejela tal y como esta
void Lee_Fifo(void); //Esta declaracion dejela tal y como esta

int main()
{
	
	//Agregue su codigo aqui
    

    //Aqui puede agregar mas llamadas a function1.....
    foo_function();
	
	//Aqui puede realizar escrituras y lecturas de su FIFO...
	Init_Fifo();
	//Escribe_Fifo();
	//Lee_Fifo();
	
    return 0;
}

void foo_function(void)
{
	//Su codigo aqui
    std::cout<<<<std::endl;
    //Su codigo aqui tambien si quiere
}

void Init_Fifo(void)
{
    //Aqui va la incializacion de los punteros
}

void Escribe_Fifo(void)
{
    //Aqui agregue la logica para la escritura de la FIFO

}

void Lee_Fifo(void)
{
    //Aqui agregue la logica para la lectura de la FIFO
}
