#include <iostream>
#include "HEAD.h"
using namespace std;

int main() {

    std::vector<int> arr(3);
    arr[0] = 0;
    arr[1] = 42;
    arr[2] = -1;
    cout << "my vector: ";

    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "max element: " << max_el(arr) << endl;
    cout << "initializing stack with max size = 2" << endl;
    stack<int> st(2);
    std::cout << "trying to add 2 elements: ";

    try {

        st.push(1);
        st.push(2);
    }

    catch (...) {

        cout << "stack is full";
    }

    cout << "success!" << std::endl;
    cout << "trying to remove 3 elements: ";

    try {

        st.pop();
        st.pop();
        st.pop();
    }

    catch (...) {

        cout << "stack is empty";
    }

    return 0;
}