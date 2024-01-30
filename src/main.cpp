#include <iostream>
#include <string>
using namespace std;
//初始化
int x,n/*q多少象*/;
string beta/*版本号*/ = "0.4.2.1";
char q/*输入字符串*/ [100] = {'n','o'};
//定义函数
int main()
{
    cout << "beta_"
         //<<"official release_"
         << beta << endl << "IN:"<< q[0] << q[1] << endl << R"(cin << )";
         cin.get(q,100).get();
         //检查q中有多少字符
         for(n=0;q[n]!='\0';n++);
         cout << R"(Equation length:)" << n << endl;
         //_________________________________________________________________________________________________________________________________________________________
         
    //esc
    cin.get();
    return 0;
}
