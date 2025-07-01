#include <stdio.h>

char err[] = "wrong input\n";
char bad[] = "bad luck\n";
char ok[] = "ok!\n";

int main () {
  float h1, m1, h2, m2;
  float s1, s2, y1, y2;

  printf("work time? (xx:xx - xx:xx)\n> ");
  scanf("%f:%f - %f:%f", &h1, &m1, &h2, &m2);

  s1 = h1 + m1 / 60;
  s2 = h2 + m2 / 60;

  if ( s1 > s2 ) {
    printf(err);
    return 1;
  }

  printf("time of appointment? (xx:xx - xx:xx)\n> ");
  scanf("%f:%f - %f:%f", &h1, &m1, &h2, &m2);

  y1 = h1 + m1 / 60;
  y2 = h2 + m2 / 60;

  if ( y1 > y2){
    printf(err);
    return 1;
  }

  if ( y1 <= s1 && y2 >= s1 )
    printf(bad);
  else if ( y1 >= s1 && y1 <= s2)
    printf(bad);
  else
    printf(ok);

  return 0;
}
