// The Selection sort algorithm sorts an array by repeatedly finding the minimum element from unsorted part and putting it in beginning.
// The algorithm maintains two subarrays of give array(sorted and unsorted).
// In every iteration, minimum element from unsorted part is picked and moved to the sorted subarray.

#include <iostream>
#include <vector>
#include <algorithm> // for std::swap

using namespace std;

void SelectionSort(vector<int>& input) {
    int n = input.size();
    for (int i = 0; i < n - 1; i++) {
        int minindex = i;
        for (int j = i + 1; j < n; j++) {
            if (input[j] < input[minindex]) {
                minindex = j;
            }
        }
        if (minindex != i) {
            swap(input[i], input[minindex]);
        }
    }
}

int main() {
    vector<int> input = {3, 1, 2, 9, 0, 4};
    SelectionSort(input);

    for (int i : input) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
