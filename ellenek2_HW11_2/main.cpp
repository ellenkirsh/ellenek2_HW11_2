//
//  main.cpp
//  ellenek2_HW11_2
//
//  Created by Ellen Kirsh on 12/7/21.
//

#include <iostream>
using namespace std;

int binary_search(int val, int *a, int first, int last){
    for(int i = first; i <last; i++){
        if(a[i] == val){
            cout << i;
            return i;
        }
    }
    for(int i =0; i<first; i++){
        if(a[i] == val){
            int result = i - first;
            cout << result;
            return result;
        }
    }
    for(int i = last; i < 8; i++){
        if(a[i] == val){
            int result = i-8-first;
            cout << result << endl;
            return result;
        }
    }
    return 100;
}

int numOcc(int val, int *a, int first, int last){
    int sum = 0;
    for(int i = first; i < last; i++){
        if(a[i] == val){
            int temp = sum;
            sum = temp + 1;
        }
    }
    return sum;
}

int main() {
    int a[8] = {1, 3, 5, 8, 12, 15, 20, 34};
    binary_search(5, a, 0, 7);
    cout << endl;
    binary_search(5, a, 3, 5);
    cout << endl;
    int b[9] = {1,2,2,2,2,2,2,5,5};
    int result = numOcc(2, b, 0, 8);
    cout << result << endl;
    int result2 = numOcc(3, b, 0, 8);
    cout << result2 << endl;
    return 0;
}
