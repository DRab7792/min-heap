#include <vector>
#include <iostream>
using namespace std;
class minHeap{
	private:
		vector<int> data;
	public:
		minHeap();
		bool checkEmpty();
		void reduceKey(int curNode, int newNode);
		void insert(int newNode);
		int extractMin();
		void showContents();
};
