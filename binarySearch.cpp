#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Read integers from input and store them in a vector.
// Return the vector.
vector<int> ReadIntegers() {
   int size;
   cin >> size;
   vector<int> integers(size);
   for (int i = 0; i < size; ++i) {               // Read the numbers
      cin >> integers.at(i);
   }

   return integers;
}

int ReverseBinarySearch(int key, vector<int> numbers) {
   // Variables to hold the low and high indices of the area being searched. 
   // Starts with entire range.
   int low =  numbers.size() - 1 ;
   int high = 0;
   
 
   // Loop until "low" passes "high"
   while (low >= high) {
      // Calculate the middle index based off "cut out" section 
      int mid = (high + low) / 2;

      // Cut the range to either the left or right half,
      // unless numbers[mid] is the key
      if (numbers[mid] < key) {
         low = mid - 1;
      }
      else if (numbers[mid] > key) {
         high = mid + 1;
      }
      else {
         return mid;
      }
   }
   
   return -1; // not found
}

int main() {
   int target;
   int index;

   vector<int> integers = ReadIntegers();

   cin >> target;

   index = ReverseBinarySearch(target, integers);
   cout << "index: " << index << endl;;

   return 0;
}
