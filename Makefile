all: djset

CXX = g++
OFLAGS = -03

djset: DisjointSet.cpp Sample.cpp
	$(CXX) $(OFLAGS) DisjointSet.cpp Sample.cpp -o djset

clean:
	/bin/rm djset