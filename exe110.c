#include <stdio.h>

main() {
  int c;
  while((c = getchar()) != EOF) {
    if(c == 9) {
	putchar('\t');
    } else {
	putchar(c);
    }
  }
}
