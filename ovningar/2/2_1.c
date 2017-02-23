#include <stdio.h>
#include <stdlib.h>
int main()
{
   system("chcp 1252");
   int ettan, tvaan, total;
   printf("Skriv i första siffran ");
   scanf("%d", &ettan);
   printf("\nSkriv i andra siffran ");
   scanf("%d", &tvaan);
   total = ettan + tvaan;
   printf("\nTotal: %d\n", total);
   system("pause");
   return 0;
}
   