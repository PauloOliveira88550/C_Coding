#include <stdio.h>

int main()
{
  // TODO
printf ("Intruduza o texto\n");

int a=0, b=0, c=0;

char ch;
while(ch != EOF) {
ch = getchar();

if(ch != ' ' && ch != '\n') {++a;};

if ((ch == ' ' && ch-1 != ' ') || (ch == '\n' && (ch != ' ' || ch-1 != '\n'))) {++b;};

if (ch == '\n') {++c;};

}

if (ch == EOF) { 
printf ("linhas = %d; palavras = %d; letras = %d\n", c, b, a);
};

 

  return 0;
}
