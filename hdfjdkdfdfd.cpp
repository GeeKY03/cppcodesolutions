#include <string>
#include <boost/algorithm/string.hpp>

int main() {
    std::string s("gengjiawen");
    std::string t("geng");
    bool b = boost::algorithm::contains(s, t);
    std::cout << b << std::endl;
    return 0;
}