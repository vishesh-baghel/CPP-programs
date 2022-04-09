#include<bits/stdc++.h>
#define MAX 256;
using namespace std;

bool compare(char arr1[], char arr2[]) {
  for (int i = 0; i < MAX; i++) 
    if (arr1[i] != arr2[i]) return false;
    return true;
}

bool search(char* pat, char* txt) {
  int M = strlen(pat), N = strlen(txt);

  int countP[MAX] = {0}, countTW[MAX] = {0};

  for (int i )
}

int main() {

  return 0;
}