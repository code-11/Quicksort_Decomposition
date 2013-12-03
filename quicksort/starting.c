#include <iostream>
#include <vector>
using namespace std;

void printList(){
	// vector is a template, the <int> means it is a vector of ints
	vector<int> numbers;  

	// push_back() puts a new value at the end (or back) of the vector
	for (int i = 0; i < 10; i++){
	    numbers.push_back(i);
		cout <<"Adding "<<i<<"\n";
	}
	// determine the size of the array
	cout <<"\nSize of array is: "<< numbers.size()<<"\n";
}

int main(){
	printList();
	return 0;
}