output: main.o MergeSort.o  
    g++ -c main.o MergeSort.o 

main.o: main.cpp
    g++ -c main.cpp

MergeSort.o: MergeSort.cpp MergeSort.h
    g++ -c MergeSort.cpp
     
clean:
    rm *.o output