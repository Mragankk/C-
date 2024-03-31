#include <iostream>
#include <unordered_set>

void removeDuplicates(int arr[], int& size) {
    std::unordered_set<int> seen;
    int newIndex = 0;
    
    for (int i = 0; i < size; ++i) {
        if (seen.find(arr[i]) == seen.end()) { // If element not found in set......
            seen.insert(arr[i]); // Add it to set,,
            arr[newIndex++] = arr[i]; // Update array at newIndex and increment newIndex..
        }
    }
    
    size = newIndex; // Update size to the new size after removing duplicates
}

int main() {
    int arr[] = {5, 4, 5, 4, 7, 5, 9,3 ,3, 2 , 6, 2}; // Example array with duplicates
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size
    removeDuplicates(arr, size); // Remove duplicates
    
    std::cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
