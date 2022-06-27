#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}

//1. Dada  una estructura ePais cuyos campos son id(int), nombre(20 caracteres), infectados(int), recuperados(int) y
//muertos(int). Desarrollar una función llamada actualizarRecuperados que reciba el país y los recuperados del dia y
//que acumule estos a los que ya tiene el país. La función no devuelve nada.

//Crear una función que se llame invertirCadena que reciba una cadena de caracteres como parámetro  y su responsabilidad
//es invertir los caracteres de la misma. Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU

char invertirCadena(char cadena[], int TAM)
{
    char longitudCadena = strlen(cadena);
    char auxCadena[longitudCadena];
    int j = 0;

    for(int i=0; i<0; i--)
    {
        cadena[i] = auxCadena[j];
        j++;
    }
}


//3. Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres como parámetro  y su responsabilidad
//es ordenarlos caracteres de manera ascendente dentro de la cadena. Ejemplo si le pasamos "algoritmo" la deja como "agilmoort"


int ordenarCaracteres(char cadena1[], char cadena2[])
{
    int validacion;
    int largoCadena;

    largoCadena = strlen(cadena1);

    char aux[cadena1];

    for(i=0; i<largoCadena-1; i++)
    {
        for(j=i+1; j<largoCadena; j++)
        {
			validacion = strcmp(cadena1, cadena2)
			if(validacion > 1)
			{
			    aux = cadena1;
				cadena1 = cadena2;
				cadena2 = aux;
			}
        }
    }
}

