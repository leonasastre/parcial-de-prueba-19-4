#include <stdio.h>
#include <stdlib.h>

int dni();
int menu();

int main()
{
    int numdni[500];
    int turno;
    int opcMenu;
    int auxiliar;
    int i=0;
    numdni[i]=dni();
    i=i+1;

    opcMenu=menu();

}


 int dni()
{
 int dni;
 printf("ingrese su dni: ");
 scanf("%d",&dni);

 return dni;
}
int menu()
{
    int opciones;
    printf("\n ingrese urgencia 1");
    printf("\n ingrese regular 2");
    printf("\n ingrese proximo cliente 3");
    printf("\n ingrese listar 4");
    printf("\n ingrese informar 5");
    printf("\n");
    scanf("%d",&opciones);


}


