vector<int> nums;
vector<int> l, r;
int n;

n = nums.size();
l.assign(n, 0);
r.assign(n, 0);
for (int i = 0; i < n; ++i) l[i] = r[i] = i;

for (int i = n - 1; i >= 0; i--) {
    int j = i + 1;
    while (j < n && nums[i] <= nums[j]) {
        r[i] = j;
        if (j == r[j]) j++;
        else j = r[j];
    }
}
for (int i = 0; i < n; ++i) {
    int j = i - 1;
    while (j >= 0 && nums[i] <= nums[j]) {
        l[i] = j;
        if (j == l[j]) j--;
        else j = l[j];
    }
}