#include <iostream>
#include <vector>
#include "message.hpp"
using namespace std;

int main() {
    Message test;
    test.get_info();
    test.set_alphabet();
    if(test.get_encode_or_decode() == false) {test.encode();}
    else {test.decode();}
}