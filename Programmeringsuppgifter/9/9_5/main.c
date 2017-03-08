#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <wctype.h>

void firstWord(wchar_t *a, wchar_t *firstWordArray){
  int firstWordInit = 0;
  int firstWordStart = 0;
  int firstWordCounter = 0;

  for(int j = 0; firstWordInit == 0; j++){
    if(!iswspace(a[j])){
      firstWordInit += 1;
      for(int i = j; !iswspace(a[i]); i++){
          firstWordArray[firstWordCounter] = a[i];
          firstWordCounter += 1;
      }
      firstWordArray[firstWordCounter] = L'\0';
    }
  }
}

void lastWord(wchar_t *a, wchar_t *lastWordArray){
  int lastWordInit = 0;
  int lastWordStart = 0;
  int lastWordCounter = 0;

  for(int j = wcslen(a) - 1; lastWordInit == 0; j--){
    if(!iswspace(a[j])){
      lastWordInit += 1;
      for(int i = j; !iswspace(a[i]); i--){
        lastWordStart = i;
      }
    }
  }
  for(int i = lastWordStart; !iswspace(a[i]); i++){
    lastWordArray[lastWordCounter] = a[i];
    lastWordCounter += 1;
  }
  lastWordArray[lastWordCounter] = L'\0';
}

int main(){
  wchar_t array[30];
  wchar_t first[wcslen(array)];
  wchar_t last[wcslen(array)];
  int length = 0;

  printf("Vänligen skriv en mening: ");
  fgetws(array, 100, stdin);

  length = wcslen(array) - 2;
  firstWord(array, first);
  lastWord(array, last);
  //
  printf("Du skrev en \"%d\" tecken lång mening\n", length);
  printf("Det första ordet var \"%ls\"\n", first);
  printf("Det sista ordet var \"%ls\"\n", last);
}
