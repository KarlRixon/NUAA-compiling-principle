[![Build Status](https://travis-ci.org/montao/miniC.svg?branch=master)](https://travis-ci.org/montao/miniC)
# miniC
Mini C language with flex and bison

Compilation Steps 

	$ flex c.l
	$ bison c.y
	$ gcc c.tab.c -ll -ly 
	$ ./a.out [filename]
