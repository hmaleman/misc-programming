#include<iostream>
#include<string>

int main()
{
    std::string userName; 
    std::cout<<"Tell me your nickname?: ";

    //more info on getline
    //http://www.cplusplus.com/reference/string/string/getline/
    std::getline(std::cin, userName);
    std::cout<<"Hello "<<userName<<"\n";
    return 0;
}
