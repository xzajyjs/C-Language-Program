/*
角谷定理。输入一个自然数，若为偶数，则把它除以2，若为奇数，则把它乘以3加1。
经过如此有限次运算后，总可以得到自然数值1。求经过多少次可得到自然数1。
*/
#include <iostream>
using namespace std;
int flag = 0;
int f(int n){
  //退出函数
  if(n == 1)return flag;
  if(n%2==0){
    flag++;
    //注意：这里return f(n/2)要与res = n + sum(n-1)区分
    //前者没有了“归”的过程，直接跳出该函数，即没有入栈
    //而后者则是将sum(n)入栈然后逐步退化n为n-1…………
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
