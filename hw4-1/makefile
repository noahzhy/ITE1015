all :	dynamic_array	dynamic_min_max	function_overloading	string
dynamic_array: dynamic_array.o
	g++ -o dynamic_array dynamic_array.o
dynamic_array.o: dynamic_array.cc
	g++ -c dynamic_array.cc
dynamic_min_max: dynamic_min_max.o
	g++ -o dynamic_min_max dynamic_min_max.o
dynamic_min_max.o: dynamic_min_max.cc
	g++ -c dynamic_min_max.cc
function_overloading: function_overloading.o
	g++ -o function_overloading function_overloading.o
function_overloading.o: function_overloading.cc
	g++ -c function_overloading.cc
string: string.o
	g++ -o string string.o
string.o: string.cc
	g++ -c string.cc
clean:
	rm  dynamic_array
	rm  dynamic_min_max
	rm  function_overloading
	rm  string
	rm  *.o