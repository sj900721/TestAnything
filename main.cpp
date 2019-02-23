#include <iostream>
#include <limits>
#include <sstream>
#include <vector>
#include <unordered_set>

#include <curlpp/cURLpp.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Easy.hpp>
#include <string>

//int main() {
////    int x = 0;
////    x = 12123412423565466;
////    std::cout << x << std::endl;
////    std::cout << INT32_MAX << std::endl;
////    std::cout << std::numeric_limits<int>::max() << std::endl;
////    std::cout << std::numeric_limits<int>::min() << std::endl;
////    std::cout << INT32_MIN << std::endl;
////    std::cout << x % 10 << std::endl;
////    std::cout << x / 10 << std::endl;
////
////    bool b = false;
////
////    std::ostringstream ss;
////    ss << b;
////    std::string s = ss.str();
////    std::cout << s << std::endl;
////
////    std::vector<int> vec;
////    int i = vec.front();
////    std::cout << i << std::endl;
////    std::cout << vec.front() << std::endl;
//
////    std::unordered_set<int> uset;
////    uset.insert(2);
////    uset.insert(1);
////    uset.insert(3);
////    uset.insert(5);
////    uset.insert(4);
////    uset.insert(6);
////
////    for (int i = 0; i < 10; i++)
////    {
////        for (auto n : uset)
////        {
////            std::cout << n << " ";
////        }
////        std::cout << std::endl;
////    }
//
//// RAII cleanup
//
////    curlpp::Cleanup myCleanup;
////
////// Send request and get a result.
////// Here I use a shortcut to get it in a string stream ...
////
////    std::ostringstream os;
////
////    try {
////        curlpp::Cleanup cleaner;
////        curlpp::Easy request;
////
////        request.setOpt(new curlpp::options::Url(std::string("http://172.16.1.129/HiddenFunction/GetAvailableLocations?size=1")));
//////        request.setOpt(curlpp::options::Url("http://www.genivia.com/calc.wsdl"));
////        request.setOpt(curlpp::options::ConnectTimeout(5));
////        request.setOpt(curlpp::options::Verbose(true));
////
////        std::ostringstream os;
////        curlpp::options::WriteStream ws(&os);
////        request.setOpt(ws);
////
////        request.perform();
////
////        std::cout << os.str();
////    }
//////    catch ( curlpp::LogicError & e ) {
//////        std::cout << e.what() << std::endl;
//////    }
//////    catch ( curlpp::RuntimeError & e ) {
//////        std::cout << e.what() << std::endl;
//////    }
////    catch ( std::exception &e ) {
////        std::cout << e.what() << std::endl;
////    }
//
//    return 0;
//}