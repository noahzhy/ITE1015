all : struct_person  array_struct_person  array_struct_point
struct_person: struct_person.o
	g++ -o struct_person struct_person.o
struct_person.o: struct_person.cc
	g++ -c struct_person.cc
array_struct_person: array_struct_person.o
	g++ -o array_struct_person array_struct_person.o
array_struct_person.o: array_struct_person.cc
	g++ -c array_struct_person.cc
array_struct_point: array_struct_point.o
	g++ -o array_struct_point array_struct_point.o
array_struct_point.o: array_struct_point.cc
	g++ -c array_struct_point.cc
clean:
	rm  array_struct_person
	rm  array_struct_point
	rm  struct_person
	rm  *.o
