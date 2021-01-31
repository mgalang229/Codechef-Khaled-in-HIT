#include <bits/stdc++.h> 

using namespace std;
                             
int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);          
  int tt;
  cin >> tt;
  while (tt--) {           
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    // view the image in this repository for better understanding
    // sort the vector in ascending order   
    sort(v.begin(), v.end());
    // get the index of third third grade (low)
    int a = n / 4;
    // double the value of the base index to find the second grade (mid)
    int b = a + a;
    // triple the value of the base index to find the first grade (high)
    int c = a + a + a;                        
    // check if the grades are equally distributed based on the number of students needed per grade boundary
    if (v[a] == v[a - 1] || v[b] == v[b - 1] || v[c] == v[c - 1]) {
    	cout << -1;
    } else {
    	cout << v[a] << " " << v[b] << " " << v[c];
    }
    cout << '\n';
  }
  return 0;
}      
