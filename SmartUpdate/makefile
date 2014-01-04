smart.so: blocksort.o bzip2.o bzip2recover.o bzlib.o compress.o crctable.o decompress.o huffman.o randtable.o spewG.o smart_diff.o smart_patch.o
	gcc -shared -fPIC blocksort.o bzip2.o bzip2recover.o bzlib.o \
	compress.o crctable.o decompress.o huffman.o \
	randtable.o spewG.o smart_diff.o smart_patch.o -o smart.so

#edit : main.o blocksort.o bzip2.o bzip2recover.o bzlib.o \
#	compress.o crctable.o decompress.o huffman.o \
#	randtable.o spewG.o smart_diff.o smart_patch.o
#	cc -o edit main.o blocksort.o bzip2.o bzip2recover.o bzlib.o \
#compress.o crctable.o decompress.o huffman.o \
#randtable.o spewG.o smart_diff.o smart_patch.o

blocksort.o : blocksort.c bzlib_private.h
	cc -c blocksort.c
bzip2.o : bzip2.c bzlib.h
	cc -c bzip2.c
bzip2recover.o : bzip2recover.c bzlib.h
	cc -c bzip2recover.c
bzlib.o: bzlib.c bzlib_private.h
	cc -c bzlib.c
compress.o: compress.c bzlib_private.h
	cc -c compress.c
crctable.o: crctable.c bzlib_private.h
	cc -c crctable.c
decompress.o: decompress.c bzlib_private.h
	cc -c decompress.c
huffman.o: huffman.c bzlib_private.h
	cc -c huffman.c
randtable.o: randtable.c bzlib_private.h
	cc -c randtable.c
spewG.o: spewG.c
	cc -c spewG.c
smart_diff.o: smart_diff.c smart_diff.h
	cc -c smart_diff.c
smart_patch.o: smart_patch.c smart_patch.h
	cc -c smart_patch.c

clean :
	rm -rf *.out  *.so *.o edit
