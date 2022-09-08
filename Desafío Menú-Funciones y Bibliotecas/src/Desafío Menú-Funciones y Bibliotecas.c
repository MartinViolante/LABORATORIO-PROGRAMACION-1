/*
 ============================================================================
 Name        : Desafio Menú, funciones y biblio.c
 Author      : Martin Violante
 Version     :
 Copyright   : Your copyright notice
 Description : Realizar un Menú que muestre las opciones:
        a-Iniciar
        b-Procesar
        c-Finalizar
        d-Salir
Nota:
-Antes de salir preguntar si "esta seguro que desea salir?s/n"
-Si Procesa sin haber Iniciado, debe avisar "Debe Iniciar antes de Procesar" y no deja continuar
-Si se Finaliza antes de Iniciar debe avisar "Debe Iniciar antes de Finalizar" y no deja continuar
-Si se Finaliza antes de Procesar debe avisar "Debe Procesar antes de Finalizar" y no deja continuar
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int main(void) {

	setbuf(stdout,NULL);

	char opcionMenu;
	char salir;
	int flag=0;
	int flagTwo=0;


	do
	{
		opcionMenu = opcionesMenu();

		switch (opcionMenu)
		{
			case 'a':
				printf("********* Inicializó el menú**********\n");
				flag=1;
				break;
			case 'b':
					if(flag==0)
					{
						printf("\nNo se puede procesar sin antes haber iniciado.");
					}
					else
					{

						printf("********* Procesado realizado correctamente**********\n");
						flagTwo=1;
					}
				break;
			case 'c':
							if(flag==0)
							{
								printf("\nNo se puede finalizar sin antes haber iniciado.");
							}
							else
							{
								if(flagTwo==0)
								{
									printf("\nNo se puede procesar sin antes haber iniciado.");
								}
								else
								{
									printf("*********Finalizando operaciones**********\n");
								}
							}

				break;
			default:

					salir = salirMenu();
					printf("*********Esta saliendo del menú**********\n");
				break;
		}
	}while(salir!='s');


	return EXIT_SUCCESS;
}
