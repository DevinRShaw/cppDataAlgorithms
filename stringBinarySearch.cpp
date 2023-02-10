#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Read integers from input and store them in a vector.
// Return the vector.

vector<string> ReadStrings(int numStrings) {
  vector<string> strings;
  while (numStrings > 0) {
    string str;
    cin >> str;
    strings.push_back(str);
    numStrings--;
  }
  return strings;
}

int BinarySearch(string target, vector<string> strings) {
   // Variables to hold the low and high indices of the area being searched. 
   // Starts with entire range.
   
   sort(strings.begin(), strings.end());
   
   int low = 0;
   int high = strings.size() - 1;
   
   // Loop until "low" passes "high"
   while (high >= low) {
      // Calculate the middle index
      int mid = (high + low) / 2;

      // Cut the range to either the left or right half,
      // unless numbers[mid] is the key
      if (strings[mid] < target) {
         low = mid + 1;
      }
      else if (strings[mid] > target) {
         high = mid - 1;
      }
      else {
         return mid;
      }
   }
   
   return -1; // not found
}

int main() {
   int numStrings;
   vector<string> strings;
   string target;
   
   cin >> numStrings;
   strings = ReadStrings(numStrings);
   cin >> target;
   cout << "index: " << BinarySearch(target, strings) << endl;
   

   return 0;
}
