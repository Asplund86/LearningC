#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <wctype.h>

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

_Bool anagram(wchar_t *check, wchar_t *from){
  whiteSpaceRemove(check);
  whiteSpaceRemove(from);
  makeLow(check);
  makeLow(from);
  int checklength = 0;

  for(int i = 0; from != '\0'; i++){
    for(int j = 0; check[j] != '\0'; j++){
      if(from[i] == check[j])
        checklength += 1;
    }
  }

  if(checklength == wcslen(from))
    return 1;
  else
    return 0;
}



int main(){
  setlocale(LC_ALL, "sv_SE.UTF-8");

  wchar_t ett[] = L"Hej på dig nisse!";

  wchar_t one[] = L"C är lurigt";
  wchar_t two[] = L"Curt Ärlig";

  whiteSpaceRemove(ett);
  makeLow(ett);

  printf("%ls", ett);

  if(anagram(one, two))
    printf("Anagram!");
  else
    printf("Ej anagram!");

}
