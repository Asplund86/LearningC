#include <stdio.h>
#include <stdlib.h>
int main()
{
   printf("Running on ");
   puts(getenv("COMPUTERNAME"));
   system("pause");
   return 0;
}