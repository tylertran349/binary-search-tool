#include <iostream>
using namespace std;

int main() {
	int num, numElements, searchValue, low, mid, high;
	
	// Prompt user for array size and declare array
	cout << "How many elements are in the list (numbers only)? ";
	cin >> numElements;
	int nums[numElements] = {};
	cout << endl;
	
	// Initialize array
	for(int i = 0; i < numElements; i++) {
		cout << "Enter element " << i + 1 << ": ";
		cin >> num;
		nums[i] = num;
	}
	cout << endl;
	
	// Prompt user for search value
	cout << "Enter number (NOT index) to search for: ";
	cin >> searchValue;
	cout << endl;
	
	low = 0;
	high = numElements - 1;
	while(low <= high) {
		// Calculate midpoint
		mid = (high + low) / 2;
		if(nums[mid] < searchValue) {
			// Change low point to 1 index greater than midpoint if value at midpoint is less than search value
			low = mid + 1;
		} else if(nums[mid] > searchValue) {
			// Change high point to 1 index less than midpoint if value at midpoint is more than search value
			high = mid - 1;
		} else {
			cout << searchValue << " was found at index " << mid << "." << endl;
			// End program if search value is found in array
			return 0;
		}
	}
	// Only output message below if search value is not found in array
	cout << searchValue << " was not found in the array." << endl;
}
