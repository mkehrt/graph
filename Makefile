all:
	clang++ --std=c++11 --stdlib=libc++ -c CountedQuadTree.h

clean:
	-rm *.o *.a *~
