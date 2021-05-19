bool less_than(int a, int b){
    return a < b;
}
bool greater_than(int a, int b){
    return a > b;
}
void selection_sort(std::vector<int>& a, bool (*compare) (int, int)){
    int n = a.size();
    for(int i = 0; i<n-1; i++){
        int small = i;
        for(int j = i+1; j<n; j++)
            if(compare(a[j], a[small]))
                small = j;
        if(i!=small)
            std::swap(a[i], a[small]);
    }
}

// selection_sort(list, less_than);