#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    int a[] = {1,3,6,8,10}, b[] = {2,6,7,12,14,15};
    int n = sizeof(a) / sizeof(int), m = sizeof(b) / sizeof(int);

    int i = 0, j = 0;
    vector<int> c;
    while (i < n || j < m) {
        if (j == m || (i < n && a[i] <= b[j]))
            c.push_back(a[i++]);
        else
            c.push_back(b[j++]);
    }
    for (auto it : c)
        cout << it << " ";
}
