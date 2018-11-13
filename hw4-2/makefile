all :	my_list	print_people
my_list: my_list.o
	g++ -o my_list my_list.o
my_list.o: my_list.cc
	g++ -c my_list.cc
print_people: print_people.o
	g++ -o print_people print_people.o
print_people.o: print_people.cc
	g++ -c print_people.cc
clean:
	rm  my_list
	rm  print_people
	rm  *.o