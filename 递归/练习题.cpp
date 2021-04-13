/*
一个人赶着鸭子去每个村庄卖，每经过一个村子卖去所赶鸭子的一半又一只。
这样他经过了七个村子后还剩两只鸭子，问他出发时共赶多少只鸭子？
 */
#include <iostream>
using namespace std;
int f(int n){
  if(n == 8)return 2;
  //第一个村子的个数=2*（第二个村子个数+1）
  int res = 2*(f(n+1)+1);
  return res;
}
int main(){
  cout << f(1) << endl;
}
