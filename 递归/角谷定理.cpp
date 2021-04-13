/*
角谷定理。输入一个自然数，若为偶数，则把它除以2，若为奇数，则把它乘以3加1。
经过如此有限次运算后，总可以得到自然数值1。求经过多少次可得到自然数1。
*/
#include <iostream>
using namespace std;
int flag = 0;
int f(int n){
  if(n == 1)return flag;
  if(n%2==0){
    flag++;
    return f(n/2);
  }
  else{
    flag++;
    return f(3*n+1);
  }
}
int main(){
  int n;
  cin >> n;
  cout << "需要" << f(n) << "次" << endl;
  return 0;
}
