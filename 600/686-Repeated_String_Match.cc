#include<bits/stdc++.h>

using namespace std;

// Given two strings A and B, find the minimum number of times A has to be 
// repeated such that B is a substring of it. If no such solution, return -1.

// For example, with A = "abcd" and B = "cdabcdab".

// Return 3, because by repeating A three times (“abcdabcdabcd”), B is a 
// substring of it; and B is not a substring of A repeated two times 
// ("abcdabcd").

// Note: The length of A and B will be between 1 and 10000.

int repeatedStringMatch(string A, string B) {
  string a = A;
  int max_repeats = (B.size()/a.size()) + 2;

  for (int i = 1; i <= max_repeats; ++i)
  {
    if(a.size() >= B.size() && a.find(B) != string::npos)
      return i;
    else
      a += A;
  } 

  return -1;
}

int main(){
  vector<string> t1 = {"abcd", "cdabcdab"};
  vector<string> t2 = {"abc","cabcabca"};

  int result = repeatedStringMatch(t1[0], t1[1]);
  cout << result << endl; //3

  result = repeatedStringMatch(t2[0], t2[1]);
  cout << result << endl; //4
  return 0;
}
