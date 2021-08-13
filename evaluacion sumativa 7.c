#include <stdio.h>

//*titulo: actividad sumativa 7*//
//**autora:Alaiyah Palma*//

int main(int argc, char const *argv[])
{
	int main();
	int arreglo [10],i,n,contador;
	contador=0;
	int numeros[10];

	for (int i = 0; i < 10; ++i)
	{
		printf("Por favor, Introduzca el numero %d:\n", i + 1); 
		scanf("%d", &numeros[i]);
	}

	
	int NumeroMayor = numeros[0];

	
	for (int indice = 1; indice < 10; ++indice)
	{
		int numeroActual = numeros[indice];
		if (numeroActual > NumeroMayor){		
		
			NumeroMayor = numeroActual;
		}
	}
	
	printf("Introduzca el numero que quiere saber cuantas veces se repite: ");
	scanf("%d",&n);
	for (i=0; i<10; i++){
		if (n == arreglo[i]){
			contador++;
		}
	}
	printf("El numero %d, se repite %d",n,contador);
	


	printf("De los 10 numeros Introducidos, el mayor es %d\n", NumeroMayor);
	return 0;
}
