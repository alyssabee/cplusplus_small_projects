// ssort.cpp : Simple selection sort using pre-gen array. 
#include <iostream>
using std::cout; using std::endl;

int main()
{
    int numbers[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 29, 31, 2,
                      2, 2, 13, 31, 30, 29, 24, 3, 5, 7, 29, 0 };

    for(int *p = std::begin(numbers); p != std::end(numbers); ++p) { 
        for(int *curr = p + 1; curr != std::end(numbers); ++curr) {
            if(*curr < *p) {
                int temp = *p;
                *p = *curr;
                *curr = temp;
            }
        }  
    }

    cout << endl;
    for(auto i : numbers) cout << " " << i;
    cout << endl;

    return 0;
}
