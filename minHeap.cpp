#include "minHeap.h"
minHeap::minHeap(){
}

bool minHeap::checkEmpty(){
	if (data.size()==0){
		return true;
	}else{
		return false;
	}
}

void minHeap::insert(int newNode){
	data.push_back(newNode);
	if (data.size()!=0){
		int loc = data.size()-1;
		int parent = (loc-1)/2;
		while (parent >=0 && data.at(loc) < data.at(parent)){
			int temp = data.at(parent);
			data.at(parent) = data.at(loc);
			data.at(loc) = temp;
			loc = parent;
			parent = (loc-1)/2;
		}
	}	
}

void minHeap::showContents(){
	for (int i=0;i<data.size();i++){
		cout << data.at(i)<<" ";
	}
	cout<<endl;
}
