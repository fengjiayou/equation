#include <iostream>
#include <string>
using namespace std;
//初始化
int x;
string beta/*版本号*/ = "0.4.1";
char q [100] = {'n','o'};
//定义函数
int main()
{
    cout //<< "beta_"
         <<"official release_"
         << beta << endl << "IN:"<< q[0] << q[1] << endl;
    //esc
    cin.get();
    return 0;
}
