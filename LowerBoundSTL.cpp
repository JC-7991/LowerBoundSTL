#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

/*
Input:
 8
 1 1 2 2 6 9 9 15
 4
 1
 4
 9
 15
Output:
 Yes 1
 No 5
 Yes 6
 Yes 8
*/

int main() {
    
    int m, num;
    std::vector<int> v;
    
    std::cin >> m;
    
    for(int i = 0; i < m; i++){
        std::cin >> num;
        v.push_back(num);
    }
    
    int n, val;
    std::cin >> n;
    
    for(int i = 0; i < n; i++){
        std::cin >> val;
        std::vector<int>::iterator low = lower_bound(v.begin(), v.end(), val);
        
        if(v[low - v.begin()] == val){
            std::cout << "Yes " << (low - v.begin() + 1) << "\n";
        }
        else{
            std::cout << "No " << (low - v.begin() + 1) << "\n";
        }
        
    }
     
    return 0;
}