#include <iostream>
#include <vector>
#include <iomanip>

int locate(const std::vector<int>& a, int seek) {
    int n = a.size();
    for(int i = 0;i <n;i++)
        if(a[i]==seek) return i;
    return -1;
}

void print(const std::vector<int>& v){
    for(int i : v)
        std::cout<<std::setw(4)<<i;
    std::cout << std::endl;
}