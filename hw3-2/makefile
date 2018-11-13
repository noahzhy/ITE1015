all : score_graph	print_point
score_graph: score_graph.o
	g++ -o score_graph score_graph.o
score_graph.o: score_graph.cc
	g++ -c score_graph.cc
print_point: print_point.o
	g++ -o print_point print_point.o
print_point.o: print_point.cc
	g++ -c print_point.cc
clean:
	rm  print_point
	rm  score_graph
	rm  *.o
