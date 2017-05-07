//Skapa en fil med uppgifter om personer. Första rad
//innehåller personens namn och persnr. Andra raden ålder
//vikt och längd. Skapa en fil med uträkning av BMI per personer.
//Endast dem personer med BMI över 30 skall inskrivas i den nya
//filen. Uträkning av BMI m/h^2.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
#define N 100


int main(){
  setlocale(LC_ALL, "sv_SE.UTF-8");

  //Open the source file.
  char sourceName[N];
  printf("Open file: ");
  scanf("%s", &sourceName);
  if(sourceName[strlen(sourceName)-1] == '\n')
    sourceName[strlen(sourceName)-1] = '\0';

  //Open the stream from file.
  FILE *source = fopen(sourceName, "r");
  if(source == NULL){
    printf("Cannot find file");
    exit(1);
  }

  //Ask for target file.
  char targetName[N];
  printf("Save BMI to: ");
  scanf("%s", &targetName);
  if(targetName[strlen(targetName)-1] == '\n')
    targetName[strlen(targetName)-1] = '\0';

  //Make/append target file.
  FILE *target = fopen(targetName, "w");
  if(target == NULL){
    printf("File error!");
    exit(1);
  }

  //Main while. Grab P-number, weigth and height. And //calculate if they
  //will exist in target file.
  char line[N], pN[N], weight[N], height[N];
  int lineCount = 0, charCount = 0;
  double bmi;
  while(fgets(line, N, source)){

  //Grab P-number to pN variable.
    if(lineCount % 2 == 0){
      charCount = 0;
      int pNcount = 0;
      while(line[charCount] != '\0'){
        if(isdigit(line[charCount])){
          pN[pNcount] = line[charCount];
          pNcount++;
        }
        charCount++;
      }
      pN[pNcount] = '\0';
      // fprintf(target, "%s\n", pN);
    }
  // --------------------------------------------

  //Grab weight to weight variable.
  charCount = 0;
  int wCount = 0;
  int spaceCount = 0;
  if(lineCount % 2 != 0){
    _Bool bb = 0;
    while(!bb){
      if(spaceCount >= 1){
        while(!isspace(line[charCount])){
          weight[wCount] = line[charCount];
          wCount++;
          charCount++;
          bb = 1;
        }
      }
      if(isspace(line[charCount]))
        spaceCount++;
      charCount++;
    }
    weight[wCount] = '\0';
    // fprintf(target, "%s\n", weight);
  }
  //--------------------------------------------


  //Grab height to weight variable.
    charCount = 0;
    int hCount = 0;
    spaceCount = 0;
    if(lineCount % 2 != 0){
      _Bool bb = 0;
      while(!bb){
        if(spaceCount >= 2){
          while(!isspace(line[charCount])){
            height[hCount] = line[charCount];
            hCount++;
            charCount++;
            bb = 1;
          }
        }
        if(isspace(line[charCount]))
          spaceCount++;
        charCount++;
      }
      height[hCount] = '\0';
      printf("%s\n", height);
    }
  //----------------------------------------------



  //Calculate BMI.
    if(lineCount % 2 != 0){
      double iweight = atoi(weight);
      double iheight = atoi(height);
      iheight = iheight / 100;
      bmi = iweight / (iheight * iheight);
    }
  //----------------------------------------------

  //Print the p-number and BMI to target if BMI is over 30.
    if(lineCount % 2 != 0){
      if(bmi > 30.0){
        fprintf(target, "P-number: %s has BMI: ", pN);
        fprintf(target, "%.1lf\n", bmi);
      }
    }
  //---------------------------------------------
    lineCount = lineCount + 1;
  }

  fclose(source);
  fclose(target);
  return 0;

}
