#include "message.hpp"
#include <iostream>
using namespace std;
void Message::encode() {
    string current_line;
    string output_line;
    input.open(input_file_name);
    output.open(output_file_name);
    getline(input, current_line);
    //sets output line
    for(int i = 0; i < current_line.size(); i++) {
        for(int j = 0; j < alphabet.size(); j++) {
            if(alphabet[j] == current_line[i]) {
                output_line.push_back(coded_alphabet[j]);
            }
        }
    }
    output << output_line;
    output.close();
    input.close();
}
void Message::decode() {
    string current_line;
    string output_line;
    input.open(input_file_name);
    output.open(output_file_name);
    getline(input, current_line);
    for(int i = 0; i < current_line.size(); i++) {
        for(int j = 0; j < coded_alphabet.size(); j++) {
            if(coded_alphabet[j] == current_line[i]) {
                output_line.push_back(alphabet[j]);
            }
        }
    }
    output << output_line;
    output.close();
    input.close();
}
void Message::set_alphabet() {
    //bool that determines whether or not the current lette of the alphabet is part of the code phrase
    bool pushback;
    for(int i = 0; i < alphabet.size(); i++) {
        pushback = true;
        for(int j = 0; j < code.size(); j++) {
            if(code[j] == alphabet[i]) {
                pushback = false;
            }
        }
        if(pushback == true) {
            coded_alphabet.push_back(alphabet[i]);
        }
    }
    for(int j = 0; j < code.size(); j++) {
        coded_alphabet.push_back(code[j]);
    }
}
void Message::get_info() {
    cout << "Would You like To Encode or Decode a File?\n";
    cout << "(0) - Encode\n";
    cout << "(1) - Decode\n";
    cin >> encode_or_decode;
    cout << "Enter the encryption key\n";
    cin >> code;
    cout << "Enter the name of the input file\n";
    cin >> input_file_name;
    cout << "Enter the name of the output file\n";
    cin >> output_file_name;
}
bool Message::get_encode_or_decode() {
    return encode_or_decode;
}