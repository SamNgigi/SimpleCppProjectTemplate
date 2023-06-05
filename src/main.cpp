// #define CATCH_CONFIG_RUNNER
// #include <catch2/catch_all.hpp>

// int main(int argc, char* argv[]){
//     int result = Catch::Session().run(argc, argv);
//     return result;
// }

#include "myfunc.hpp"
#include "example1/my_factorial.hpp"
#include <iostream>

using namespace std;

int main(){
    cout << "Result of add(3,4): " << add(3, 4) << endl;
    cout << "Result of my_factorial(4): " << my_factorial(4) << endl;


    return 0;
}