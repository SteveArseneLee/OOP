#include <iostream>
#include <vector>
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}
void selection_sort(std::vector<int>& a){
    int n = a.size();
    for(int i = 0; i<n-1; i++){
        int small = i;
        for(int j = i+1; j<n; j++)
            if(a[j] < a[small])
                small = j; // Found a smaller value
        if(i != small)
            swap(a[i], a[small])
    }
}
void print(const std::vector<int>& a){
    int n = a.size();
    if(n>0){
        for(int i = 0; i<n;i++)
            std::cout << a[i]<<' ';
    }
    std::cout <<'\n';
}
int main(){
    std::vector<int> list{23,-3,4,215,0,-3,2,23,100,88,-10};
    std::cout << "Before: ";
    print(list);

    selection_sort(list);
    std::cout << "After: ";
    print(list);
}