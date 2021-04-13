#include <iostream>
using namespace std;
int f(int n){
  if(n == 1)return 1;
  int res;
  res = n * f(n-1);
  return res;
}
int main(){
  int choose;
  cin >> choose;
  cout << choose << "! = " << f(choose) << endl;
}
