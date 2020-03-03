//GHeap.h
/*
This object is a tree of integers, starting with a single parent node. Each node branches off to two (2) other nodes, and could go on indefinetly (or at least while it hasn't run out of allocated memory).
By the way, when I say node, I'm not referring to a struct or anything like that. I'm referring to a single element in the tree, which as you can see, is an int array.
The algorithm for this int array, shown to me by Mr. Galbraith, is such that a parent's two children each reside at (parent's address * 2) and (parent's address * 2 + 1). For example, 4's children are at 8 and 9, and 9's children are at 18 and 19, etc. This works out so that nobody overrides anybody else, and it only uses a single array as storage.

int* getRaw() - Returns the raw heap. Meant for debugging.
int getParent(int) - Returns the value at an address.
void setParent(int, int) - Sets the value at the address of the first int to be the value of the second int. This should only be needed for the first value, which isn't a child of anything.
void setChildren(int, int, int) - Sets the children of the address at the first int to be the values of the second and third ints.

@author Greggory Hickman, February 2020
@version dev
 */
 
#include <iostream>

using namespace std;

class GHeap {
	public:
		//Constructor & Destructor
		GHeap(int);
		~GHeap();
		
		//Functions
		int* getRaw();
		int getParent(int);
		void setParent(int, int);
		void setChildren(int, int, int);
		
	private:
		int LENGTH;
		int* heap;
};