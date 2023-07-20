string kthPermutation(int n, int k) {
    vector<int>numbers;
    int fact = 1;
    for(int i=1;i<n;i++){
        fact = fact * i;
        numbers.push_back(i);
    }
    numbers.push_back(n);
    string ans = "";
    k = k-1;
    while(true){
        int x = k/fact;
        ans = ans + to_string(numbers[x]);
        numbers.erase(numbers.begin()+x);
        n=n-1;
        if(n==0) break;
        k=k%fact;
        fact =fact/n;
    }
    return ans;
}
