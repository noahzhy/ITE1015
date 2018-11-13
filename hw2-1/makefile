all : array_pointer  call_by_reference
array_pointer: array_pointer.o
	g++ -o array_pointer array_pointer.o
array_pointer.o: array_pointer.cc
	g++ -c array_pointer.cc
call_by_reference: call_by_reference.o
	g++ -o call_by_reference call_by_reference.o
call_by_reference.o: call_by_reference.cc
	g++ -c call_by_reference.cc
clean:
	rm  call_by_reference
	rm  array_pointer
	rm  *.o
