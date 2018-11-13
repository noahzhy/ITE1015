all : min_max_sum  rotate_integer
min_max_sum: min_max_sum.o
	g++ -o min_max_sum min_max_sum.o
min_max_sum.o: min_max_sum.cc
	g++ -c min_max_sum.cc
rotate_integer: rotate_integer.o
	g++ -o rotate_integer rotate_integer.o
rotate_integer.o: rotate_integer.cc
	g++ -c rotate_integer.cc
clean:
	rm  rotate_integer
	rm  min_max_sum
	rm  *.o
