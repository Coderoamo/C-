#include <stdio.h>
#include <ctype.h>
#include <string.h>

char string1[3];

char stringPasser();

int main() {

  stringPasser();

  return 0;
}
char stringPasser() {

  scanf("%s", &string1);

  for(int i = 0; strlen(string1); i) {
    if(string1 > 4) {
      printf("err");
    }
    else {
      printf("%s", string1);
    }
  }
}
    
