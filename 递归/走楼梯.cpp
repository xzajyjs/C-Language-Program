#include <iostream>
using namespace std;
//先分析递推关系式：f（n）= 走到前一级台阶需要的步数+
//走到前第二级台阶需要的步数(因为要走到第n级台阶就只有
//两种情况，即现在在n-1或者n-2级台阶处
int f(int n){
    if(n == 1)return 1;
    if(n == 2)return 2;
    int res;
    res = f(n-1)+f(n-2);
    return res;
}
int main(){
    int choose;
    cin >> choose;
    cout << f(choose) << endl;
    return 0;
}
