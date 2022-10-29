
#include <stdio.h>
#define LIM 50
#define LIM_FGETS 51	// Pemite que el verdadero limite de la palabra ingresada sea LIM, ya que LIM_FGETS reserva una posicion para el NULL o '\0'

void Cuenta_Caracteres (char palabra[LIM]);

int main()
{
	char palabra[LIM] = {'\0'};
	printf("\nBienvenido a nuestro programa...\n");
	printf("Ingrese una palabra: ");
	fgets(palabra, LIM_FGETS, stdin);
	for (int i = 0; i < LIM; i++)
	{
		if (palabra[i] == 10)		// En la tabla ASCII el 10 corresponde al ENTER
		{
			palabra[i] = '\0';		// Reemplazo el ENTER por un NULL para que la lectura de caracteres termine hasta esa posicion,
		}							// ademas de la estetica, para que no imprima un ENTER en el ultimo printf()
	}
	Cuenta_Caracteres (palabra);
	return 0;
}

void Cuenta_Caracteres (char palabra [LIM])
{
	int i;
	for (i = 0; i < LIM; i++)
	{
		if (palabra[i] == '\0')
		{
			break;
		}
	}
	printf("El string ingresado (%s) tiene %d caracteres\n\n", palabra, i);
	
}
