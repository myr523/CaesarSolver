#include <stdio.h>
#include <string.h>
#define DEPLACE 9
#define FILENAME file.txt

int main(){
  char c;
  FILE *fp;

  fp = fopen(FILENAME, "r");
  if (fp == NULL) {
    printf("read err.\n");
    return 1;
  }

  while ((c = fgetc(fp)) != EOF) {
    if (c >= 'a' && c <= 'z'){
      c = (c + DEPLACE - 'a') % 26 + 'a';
    }
    else if (c >= 'A' && c <= 'Z') {
      c = (c + DEPLACE - 'A') % 26 + 'A';
    }
    else
      ;
    printf("%c", c);
  }
  fclose(fp);
  return 0;
}
