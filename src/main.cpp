#include <iostream>
#include <string>
using namespace std;
//初始化
int x [1],n/*q多少象*/,s/*数位*/ = 1,xn/*x的象*/ = 0;
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
         n ++;
         cout << R"(Equation length +1:)" << n << endl;
         //_________________________________________________________________________________________________________________________________________________________
         for(int i=0;i <= 101;i++){
            if(n <= 0){
                i = 102;
            }
            else{
                n = n - 1;
            }
            for(int j=0;j <= 101;j++){
                if(q[n] != 1 && q[n] != 2 && q[n] != 3 && q[n] != 4 && q[n] != 5 && q[n] != 6 && q[n] != 7 && q[n] != 8 && q[n] != 9 && q[n] != 0 && q[n] != '+' && q[n] != '-' && q[n] != '*' && q[n] != '/' && q[n] != '^' && q[n] != '(' && q[n] != ')' && q[n] != '=' && q){
                    cout << "ERROR" << endl;
                }
                else if(q[n] != '+' && q[n] != '-' && q[n] != '*' && q[n] != '/' && q[n] != '^' && q[n] != '(' && q[n] != ')' && q[n] != '=' && q){
                    cout << "OK" << n << endl;//仅限于bate
                    x[xn] = x[xn] + q[n] * s;
                    s = s * 10;
                    cout << x[xn] << endl;//仅限于bate
                    j = 102;
                }
            }
         }
    //esc
    cin.get();
    return 0;
}
