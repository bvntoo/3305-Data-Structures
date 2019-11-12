#include <iostream>
#include <cstdlib>
#include <string>


void  writeNumber(int target, int level=1)
{
    if(level>target)
    {
        return;
    }
    std::string tabs="";

    for(int i=0; i<level-1; i++) {
        tabs += " ";
    }

    std::string s1=tabs + "This was written by call number ";
    std::cout<<s1<<level<<std::endl;
    writeNumber(target, ++level);

    std::string s2 =tabs+ "This ALSO written by call number ";
    std::cout<<s2<<--level<<std::endl;
}

double sumOver(int a)
{
    if(a==0)
        return 0;
    double b=a;

    return (1.0/b) +sumOver(--a);
}
int main()
{
    writeNumber(10);
    std::cout<<"********************************"<<std::endl;
    std::cout << sumOver(3) << std::endl;

}

