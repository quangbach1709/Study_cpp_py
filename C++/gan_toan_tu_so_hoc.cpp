#include <iostream>

int main(){
    int day,hours,minutes,seconds;
    std::cin>>day>>hours>>minutes>>seconds;
    std::cout<<seconds+minutes*60+hours*60*60+day*60*60*24;
    return 0;
}