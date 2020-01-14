#include <stdio.h>
#include <ctype.h>

int main() {
  char c;
  int wl, cnt, i;
  int wordlengths[28];

  wl = cnt = i = 0;

  for (cnt = 1; cnt < 28; cnt++) {
    wordlengths[cnt] = 0;
  }
  while ((c = getchar()) != EOF) {
    if (isalnum(c)) {
      wl += 1;
    }
    else if (isalnum(c) == 0) {
      wordlengths[wl] += 1;
      wl = 0;
    }
  }
  for (cnt = 1; cnt < 28; cnt++) {
    printf("%2d %6d ", cnt, wordlengths[cnt]);
    for (i = 0; i < ((wordlengths[cnt] + 3999) / 4000); i++) {
      printf("*");
    }
    printf("\n");
  }
}
