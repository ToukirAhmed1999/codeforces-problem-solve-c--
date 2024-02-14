#include <bits/stdc++.h>
using namespace std;

bool check_prime(int);

int main() {

  int n,m,cnt=0;
  cin >> n>>m;
  int i=n+1;
  while(1)
  {
      if (check_prime(i))
      {
          cnt=1;
          break;
      }
      i++;



  }
  if(cnt==1&&i==m)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;


  return 0;
}

bool check_prime(int n) {
  bool is_prime = true;

  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}
