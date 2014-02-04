#include <vector>
#include <cassert>

class DisjointSet {
 public:
    DisjointSet();
    DisjointSet(const DisjointSet &d);
    DisjointSet(int num);
    DisjointSet &operator=(const DisjointSet &d);
    ~DisjointSet();

    void AddElements(int num);  // REQ: num >= 0
    void Union(int set1, int set2);
    int Find(int element);
    int NumElements() const;
    int NumSets() const;

 private:
    void copyAll(const DisjointSet &d);

    struct Dnode {
	int index;      // index of the elment the node represents
	int rank;
	Dnode* parent;

	Dnode() {
	    parent = NULL;
	    index = -1;
	    rank = 0;
	}
    };

    int numElts;
    int numSets;
    std::vector<Dnode*> nodes;
};
