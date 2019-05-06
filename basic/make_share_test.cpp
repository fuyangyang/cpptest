//
// Created by fuyangyang on 2018/7/10.
//


#include <memory>
using namespace std;

int main() {
    std::shared_ptr<int> sp1 = std::make_shared<int>(10);
    std::shared_ptr<std::string> sp2 = std::make_shared<std::string>("Hello c++");
    auto sp3 = std::make_shared<int>(11);
    printf("sp3=%d\n", *sp3);
    auto sp4 = std::make_shared<std::string>("C++11");
}

