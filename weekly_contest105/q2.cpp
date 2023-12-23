#include <vector>
#include <climits>

int powerOfArray(int n, int k, std::vector<int>& a) {
int val = 0;
int maxi = INT_MIN;
for (int i = 0; i < n; i++) {
if (maxi < a[i]) {
maxi = a[i];
val = i;
}
}
int sum = 0;
for (int i = 0; i < val; i++) {
sum += a[i];
}
int p = maxi * k;
int d = 0;
for (int i = val + 1; i < n; i++) {
d += a[i];
}
return sum + p + d;
}
