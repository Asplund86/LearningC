#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
#include <stdlib.h>

_Bool checkArrayforKons(wchar_t *arr){
	wchar_t kons[] = L"aouåeiyäöAOUÅEIYÄÖ";
	for(int i = 0; arr[i] != '\0'; i++){
		int j = 0;
		for(; j < wcslen(kons)-1; j++){
			if(arr[i] == kons[j])
				return 1;
		}
	}

	return 0;
}

_Bool checkElementsForKons(wchar_t x){
	wchar_t kons[] = L"aouåeiyäöAOUÅEIYÄÖ";

	for(int i = 0; i<wcslen(kons)-1; i++){
		if(x == kons[i])
			return 1;
	}
	return 0;
}



void plang(wchar_t *to, wchar_t *from){

	int tocounter = 0;
	for(int i = 0; from[i] != '\0'; i++){
		if(checkElementsForKons(from[i])){
			to[tocounter++] = from[i];
			//tocounter++;
			to[tocounter++] = 'p';
			//ocounter++;
			to[tocounter++] = from[i];
			//tocounter++;
		}
		else{
			to[tocounter++] = from[i];
		}
	}

	to[tocounter] = '\0';
}


int main(){
	system("chcp 1252");
	setlocale(LC_ALL, "sv_SE.UTF-8");

	wchar_t one[100];
	wchar_t two[100];

	printf("Skriv en mening: \n");
	fgetws(one, 100, stdin);

	if(checkArrayforKons(one)){
		plang(two, one);

		printf("%ls", two);
	}
	else
		printf("Innehåller ingen konsonant\n");



}