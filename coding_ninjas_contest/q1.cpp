int maximumRemovals(int n, vector<int> &v) {
    int i;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    int ind1=0;
    int ind=0;
    for(i = 0; i < n; i++){
        if(maxi<v[i]){
            maxi=v[i];
             ind=i;
        }
        if(mini> v[i]){
            mini=v[i];
            ind1=i;
        }
    }
    int val = max(ind, ind1);
    return n-val-1;
}
