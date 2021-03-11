# C_Training
C language training

about the second exercice : //Conditional compilation:
The conditional compilation allows to orientate the compilation according to certain criteria 
(compilation under different platforms for example), here we will see how to remedy the cyclic 
dependencies between modules thanks to conditional compilation.
Create five files tata.h, tata.c, toto.h, toto.c, and main.c.
In toto.h will be denitrated the sum function which computes the sum of two integers, this function 
will be realized in toto.c.
In tata.h will be denit the product function which calculates the product of two integers, this
function will be realized in tata.c.
The chier tata.h must depend on the chier toto.h and vice versa.
The main.c file will call these two functions.
Write the Makefile that allows to compile all these files. What happens ?
Fix this error by using conditional compilation.

correction is copied from the link :
http://cedric.cnam.fr/~lamberta/enseignements/C/corrections/09/correction_tp9.pdf




