#include <stdio.h>
#include <string.h>

int main() {
  char ch[1000001];
  scanf("%s", ch);
  int n = strlen(ch);
  char s[n + 1];
  for (int i = 0; i < n; i++) {
    if (ch[i] == ',') {
      s[i] = ' ';
    } else if (ch[i] >= 'A' && ch[i] <= 'Z') {
      s[i] = ch[i] + 32;
    } else {
      s[i] = ch[i] - 32;
    }
  }
  s[n + 1] = '\0';
  printf("%s\n", s);

  return 0;
}