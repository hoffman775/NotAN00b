#include<stdio.h>

   void cabecera(void);
   float suma(void);
   float resta(void);
   float multiplicacion(void);
   float divicion(void);
int  main(void)   /* funcion principal */
 {
  float var;
  int opc,opc2=1;
  while (opc2 ==1) {
    
     system("clear");
     cabecera();
      printf("\n\t\t\t\tMENU\n\n");
      printf("\t\tSuma\t\t1\n\t\tResta\t\t2\n\t\tDivision\t3\n\t\tMultiplicacion\t4\n");
      scanf("%d",&opc);
    switch (opc)
    {
        case 1:
            system("clear"); 
            cabecera();
            suma();
            printf("\n¿Alguna otra operacion?\n");
            printf("\ncontinuar 1\n");
            printf("\nSalir 0\n");
        
        break;     
       
       case 2:
            system("clear");
            cabecera();
            resta();
            printf("\n¿Alguna otra operacion?\n");
            printf("\ncontinuar 1\n");
            printf("\nsalir 0\n");
    
       break;

       case 3:
            system("clear");
            cabecera();
            divicion();
            printf("\n¿Alguna otra operacion?\n");
            printf("\ncontinuar 1\n");
            printf("\nsalir 0\n");
        
       break;     

       case 4:
            system("clear");
            cabecera();
            multiplicacion();
            printf("\n¿Alguna otra operacion?\n");
            printf("\ncontinuar 1\n");
            printf("\nsalir 0\n");
        
       break;     
    
       default:
       system("clear");
       printf("\n\topcion no valida :\n");
       printf("\n\tpara  volver a intentarlo presiona el numero ----> 1\n");
       printf("\n\tpara salir presiona el numero  ----->  0\n");
    }
      
     

  scanf("%d",&opc2);

  }
}

void cabecera(void)

 {
    printf("\n\t\t*************************************************\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*  Programa que calcula operaciones basicas     *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*************************************************\n");
 }

float suma(void)
 {
   float sum=0, num2; 
     do
     {
      
         system("clear");
         cabecera();
         printf("\nPresiona el numero ...   0  para terminar\n");
         printf("\ndame el numero a sumar\n");
          scanf("%f",&num2);
         sum =  sum+num2;
     }
     while (num2!=0);
       {
         printf("\nLa suma de los numeros dados es:  %f\n\n\n\n",sum);
      }

}

float resta(void)
 {
 float res,num1, num2;
  printf("\n ingresa los numeros a restar\n");
  scanf("%f",&num1);
  scanf("%f",&num2);

  res = num1 - num2;
  printf("\nLa resta de %f-%f es : %f\n\n\n",num1,num2,res);    

 }

float multiplicacion(void)
{
  float mul,num1,num2;
  printf("\nIngresa los numeros a multiplicar\n");
  scanf("%f",&num1);
  scanf("%f",&num2);
  mul= num1 * num2;
  printf("\nLa multiplicacion de %f*%f es : %f\n",num1,num2,mul);
}  

float divicion(void)
{
 float div,num1,num2;
  printf("\ningrese los numeros a dividir\n");
   scanf("%f",&num1);
   scanf("%f",&num2);
   div = num1/num2;
   printf("\nLa divicion de %f / %f es : %f\n",num1,num2,div);
}    
