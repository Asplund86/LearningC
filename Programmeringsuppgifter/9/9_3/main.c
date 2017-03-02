#include <stdio.h>
#include <wctype.h>
#include <wchar.h>
#include <locale.h>


//void p(wchar_t *array){
 //   wchar_t kons[] = L"bcdfghjklmnqrstvzx";
    

   // for(int i = 0; i < wcslen(array); i++){
     //   for(int j = 0; j<wcslen(kons); j++){
       //     if(array[i] != kons[j] || array[i] != towupper(kons[j]))
             //   printf("%lcp%lc", array[i], array[i]);
        //}
        //printf("%lc", array[i]);
    //}

//}

int main(){
    wchar_t arr[40];
    wchar_t kons[] = L"bcdfghjklmnqrstvzx";


    printf("Skriv en kort mening: ");
    scanf(" %ls", arr);

    printf("Du skrev %ls det blir på p-språket ", arr);

    for(int i = 0; i < wcslen(arr); i++){
        for(int j = 0; j<wcslen(kons); j++){
            if(arr[i] == kons[j]){
                printf("%lc", arr[i]);
            }
            else if(arr[i] == towupper(kons[j]))
                printf("%lc", arr[i]);

            else{
                printf("%lcp%lc", arr[i], arr[i]);
                j = wcslen(kons);
            }
        }
    }
    printf("%lc", kons[3]);
}
 