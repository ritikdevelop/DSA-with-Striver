 #include<iostream>
 using namespace std;

 int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    long long int n = 1, rounds = 0;
    // calculate factorial of a
    for (int i = 1; i <= a; i++) {
      n *= i;
    }
    // calculate factorial of b
    long long int fact_b = 1;
    for (int i = 1; i <= b; i++) {
      fact_b *= i;
    }
    // calculate number of ways to choose
    n /= fact_b;
    while (n > 1) {
      // find the maximum possible value of X
      int x = n;
      while (x > 1 && n % x != 0) {
        x--;
      }
      n /= x;
      // increment the number of rounds
      rounds++;
    }
    cout << rounds << endl;
  }
  return 0;
 }