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

    opcMenu=menu();
    switch(opcMenu)
    {
    case 1:
        printf("\n Tramite Urgente.");
        numdni[i]=dni();
        i=i+1;
        break;
        case 2:
        printf("\n Tramite Regular.");
        numdni[i]=dni();
        i=i+1;
        break;
         case 3:
        printf("\n Proximo cliente.");
        numdni[i]=dni();
        i=i+1;
        break;
         case 4:
        printf("\n .");
        numdni[i]=dni();
        i=i+1;
        break;
    }

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
    return opciones;


}


