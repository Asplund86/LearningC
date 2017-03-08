#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <wctype.h>
#include <string.h>

void whiteSpaceRemove(wchar_t *arr){
  int lengthTemp = wcslen(arr);
  wchar_t temp[lengthTemp];
  int j = 0;
  for(int i = 0; i< wcslen(arr); i++){
    if(!iswspace(arr[i])){
      temp[j] = arr[i];
      j++;
    }
  }
  temp[j] = '\0';
  int m = 1;
  for(int i = 0; i < wcslen(arr); i++){
    arr[i] = temp[i];
    m++;
  }
  arr[m] = '\0';
}

void makeLow(wchar_t *arr){
  int lengthT =wcslen(arr);
  wchar_t temp[lengthT];

  int j = 0;
  for(int i = 0; i < wcslen(arr); i++){
    temp[j] = towlower(arr[i]);
    j++;
  }
  temp[j] = '\0';

  int m = 0;
  for(int i = 0; i < wcslen(arr); i++){
    arr[i] = temp[i];
    m++;
  }
  arr[m] = '\0';

}

int charCount(wchar_t *arr, wchar_t tecken){
  int count = 0;
  for(int i = 0; i < wcslen(arr); i++){
      if(arr[i] == tecken)
        count = count + 1;
  }
  return count;
}

_Bool anagram(wchar_t *check, wchar_t *from){
  whiteSpaceRemove(check);
  whiteSpaceRemove(from);
  makeLow(check);
  makeLow(from);

  // Kontrollera att arrays är lika långa.
  if(wcslen(check) != wcslen(from))
    return 0;


// Kör nästlad for loops där man först går igenom
// om tecknet i check finns i from. Finns det i from så sätts temp till 1, annars
// returneras 0. Finns tecknet i båda så kollar den med charCount om tecknet Finns
// lika många gånger. Gör det inte det returneras 0.
  for(int i = 0; i < wcslen(check); i++){
    int temp = 0;
    for(int j = 0; j < wcslen(check); j++){
      if(check[i] == from[j]){
        temp = 1;
        if(charCount(check, check[i]) != charCount(from, from[j]))
          return 0;
      }
    }
   if(!temp)
      return 0;
  }

  return 1;

}



int main(){
  setlocale(LC_ALL, "sv_SE.UTF-8");

  wchar_t ett[] = L"Curt Ärlig";

  wchar_t one[] = L"C är lurigt";
  wchar_t two[] = L"Curt Ärlig";

  whiteSpaceRemove(ett);
  makeLow(ett);

  //Testar whiteSpaceRemove och makeLow.
  printf("%ls\n", ett);

 // Testar charCount
  printf("%d\n", charCount(one, L'r'));

  //Testar anagram
  printf("%d\n", anagram(one, two));



}
