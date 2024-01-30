#include <iostream>
int x , beta/*版本号*/ = {};
char q [100] = {'n','o'};

int main()
{
    std::cout << "beta_" << beta << std::endl << "IN:"<< q[0] << q[1] << std::endl;
    //esc
    std::cin.get();
    return 0;
}
