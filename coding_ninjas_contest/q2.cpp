int countMinimumDeletion(int n, int m, string s, vector<int> time) {
    int c = 0;
    int del = 0;

    for(int i = 0; i < n; i++) {
        if (s[time[i] - 1 - c] == '1') {
            c++;
            del++;
        }
    }
    return c;
}
