quick_sort : quick_sort.o test_quick_sort.o
	g++ -o quick_sort  quick_sort.o test_quick_sort.o
#quick_sort.o : quick_sort.cpp
#	g++ -g quick_sort.cpp -c -o quick_sort.o
#test_quick_sort.o : test_quick_sort.cpp
#	g++ -g quick_sort.cpp -c -o test_quick_sort.o

.PHONY : clean
clean:
	-rm *.o quick_sort
