#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
#include <string.h>
#include "elib.h"


int main() {
  setlocale(LC_ALL, "sv_SE.UTF-8");


  //Öppnar upp loggfilen. Feltext om inte filen kan hittas!
  FILE *logg = fopen("loggfil.txt", "r");
  if(logg == NULL){
    printf("Loggfilen kan inte hittas.\n");
    exit(1);
  }

//Sätter globala variablar.
  wchar_t line[100];
  wchar_t username[40];
  int maxtid = 0;

  while(fget_line(line, 100, logg)){
    wchar_t currentname[40];
    int tid, sum = 0, k, i;
    swscanf(line, L"%ls%n", currentname, &k);
    while(swscanf(line+k, L"%d%n", &tid, &i) == 1){
      sum = sum + tid;
      k = k + i;
    }

    if(sum>=maxtid){
      maxtid = sum;
      wcscpy(username, currentname);
    }
  }

  // fskip_line(logg);
  wprintf(L"Användaren med längst tid är %ls med %d minuter\n", username, maxtid);
}


  // int main() {
  //  FILE *infil = fopen("loggfil.txt", "r");
  //  char s[100];
  //  char namn[30];
  //  int maxtid = 0;
  //  while (fget_line_char(s, 100, infil)) {
  //    char str[30];
  //    int tid, sum = 0, i, k;
  //    sscanf(s, "%s%n", str, &i);
  //    while(sscanf(s+i, "%d%n", &tid, &k) == 1) {
  //      sum = sum + tid;
  // 	 i = i + k;
  //    }
  //    if (sum >= maxtid) {
  //      maxtid = sum;
  // 	 strcpy(namn, str);
  //    }
  //  }
  //  printf("%s har varit inloggad %d minuter\n", namn, maxtid);
  // }
