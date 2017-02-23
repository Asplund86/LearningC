#include <stdio.h>
#include <stdlib.h>
int main()
{
   system("chcp 1252");
   int antal_bytes_double = sizeof(double); // Antal bytes i type double.
   int antal_bytes_int = sizeof(int); // Antal bytes i typen int
   int antal_bytes_longint = sizeof(long int); // Antal bytes i typen long int
   int antal_bytes_shortint = sizeof(short int); // Antal bytes i typen short int
   int antal_bytes_float = sizeof(float); // Antal bytes i typen float
   printf("%d\n%d\n%d\n%d\n%d\n", antal_bytes_double, antal_bytes_int, antal_bytes_longint, antal_bytes_shortint, antal_bytes_float);
   system("pause");
   return 0;
}