#include <stdio.h>
#include <stdlib.h>
int main()
{
   system("chcp 1252");
   int ettan = 5, tvaan = 5, total;
   printf("Den första siffran är %d\n", ettan);
  
   printf("Den andra siffran är %d\n", tvaan);
  
   total = ettan + tvaan;
   printf("\nTotal: %d\n", total);
   system("pause");
   return 0;
}
   