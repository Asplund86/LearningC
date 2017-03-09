#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <wctype.h>

void right(wchar_t *arr1, const wchar_t *arr2, int n){
  int lengthArr2 = wcslen(arr2);

  if(lengthArr2 >= n){
    wcscpy(arr1, arr2 + (lengthArr2 - n));
  }
  else{
    int i = 0;
    for(;i < n-lengthArr2; i++){
      arr1[i] = L' ';
    }
    wcscpy(arr1+i, arr2);
  }
}

int main(){

  wchar_t a1[5];
  wchar_t a2[] = L"Therese";

  right(a1, a2, 5);

  printf("%ls\n", a1);
}
