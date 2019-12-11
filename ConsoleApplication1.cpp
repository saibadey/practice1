
#include <iostream>

// Just a quick implementation of the quick sort to see if git is working as I hope it does.

static int binarySearch(int* searchArray, int first, int last, int target) {
	if (last <= first) {
		return -1;
	}

	int mid = (last - first) / 2 + first;

	if (searchArray[mid] > target) {
		return binarySearch(searchArray, first, mid - 1, target);
	}
	else if (searchArray[mid] < target) {
		return binarySearch(searchArray, mid + 1, last, target);
	}
	else {
		return mid;
	}
}

static int binarySearch(int* searchArray, int size, int target) {
	return binarySearch(searchArray, 0, size - 1, target);
}

int main()
{
    std::cout << "Hello World!\n";

	int* someArray = new int[10]{1, 3, 4, 6, 7, 90, 91, 1000, 1010, 1099};

	int resultIndex = binarySearch(someArray, 10, 3);

	std::cout << "I hope the result index is 1! Result index: " << resultIndex;

}
