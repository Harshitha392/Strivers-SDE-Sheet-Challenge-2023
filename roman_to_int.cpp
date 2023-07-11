int romanToInt(string s) {
    unordered_map<char,int>m;
    m['I']=1;
    m['V']=5;
    m['X']=10;
    m['L']=50;
    m['C']=100;
    m['D']=500;
    m['M']=1000;
    int prev_guy=-1;
    int sum=0;
    for(int i=s.size()-1;i>=0;i--){
        if(prev_guy==-1 || prev_guy<=m[s[i]]){
            sum+=m[s[i]];
            prev_guy=m[s[i]];
        }else{
            if(prev_guy>m[s[i]])sum-=m[s[i]];
        }
    }
    return sum;
}
