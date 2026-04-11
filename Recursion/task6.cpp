#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 3, 2, 3, 3};
    
    int result = recursive_count(vec, 3, 0);
    
    cout << "Value 3 appears " << result << " times." << endl;
    
    return 0;
}