#include<bits/stdc++.h>
using namespace std;

bool isShuffledSubstring(string A, string B) {
  int n = A.length();
  int m = B.length();

  if (n > m) {
    return;
  } else {
    sort(A.begin(), A.end());

    for (int i = 0; i < m; i++) {
      if (i + n - 1 > m) return false;
      string str = "";
      for (int j = 0; j < n; j++) {
        str.push_back(B[i + j]);
      }

      sort(str.begin(), str.end());

      if (str == A) return true;
    }
  }
}

int main() {
   // Input str1 and str2
    string str1 = "geekforgeeks";
    string str2 = "ekegorfkeegsgeek";
 
    // Function return true if
    // str1 is shuffled substring
    // of str2
    bool a = isShuffledSubstring(str1, str2);
 
    // If str1 is substring of str2
    // print "YES" else print "NO"
    if (a)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
  return 0;
}