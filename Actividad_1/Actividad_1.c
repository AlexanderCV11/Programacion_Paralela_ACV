
#include <stdio.h>

int main()
{
    int resultado = 0; // variable donde se guardará temporalmente el resultado de la multiplicacion
    
    int array_1[10][10] = { //se inicializa la primera una matriz de 10X10 de manera manual
        {9,7,8,1,2,4,5,6,3,1},
        {2,9,8,7,3,6,5,8,4,1},
        {3,6,4,7,8,9,5,1,2,3},
        {0,2,7,5,5,4,2,3,4,3},
        {5,5,3,6,2,6,8,2,5,2},
        {5,6,2,2,5,2,4,1,2,2},
        {6,1,5,2,4,9,2,4,5,5},
        {2,9,4,8,6,8,8,9,8,6},
        {6,8,1,9,2,8,4,5,8,3},
        {2,8,3,6,8,4,1,2,7,6}
    };
    
    int array_2[10][10] = { //se inicializa la segunda una matriz de 10X10 de manera manual
        {2,8,6,5,3,8,3,8,3,4},
        {2,5,1,8,2,8,2,8,5,1},
        {4,5,9,4,8,2,7,9,4,5},
        {5,8,5,7,9,2,4,9,6,3},
        {9,7,1,9,8,7,3,6,5,2},
        {2,3,6,7,8,9,6,3,8,7},
        {9,1,7,4,6,9,7,8,1,2},
        {2,3,6,4,7,8,9,6,4,7},
        {9,3,2,1,8,7,9,4,3,2},
        {6,7,8,9,5,4,1,2,7,8}
    };

    for (int i = 0; i < 10; i++) { // ciclo que recorrera los elementos en horizontal de cada matriz
        for (int j = 0; j < 10; j++) { // ciclo que recorrera los elementos en vertical de cada matriz 
            for (int h = 0; h < 10; h++) { // ciclo necesario para sumar los resultados de las multiplicciones;el tercer ciclo se usa para poder sumar las multiplicasiones que originan un solo elemento 
                resultado += array_1[j][h] * array_2[h][i]; // multiplicacion que origina un elemento
            }
            printf("%d ", resultado); // imprimir el resultado de la multiplicacion
            resultado = 0; // reseteo de la variable resultado
        }
        printf("\n"); // salto de linea para dar formato
    }

    return 0;
}
