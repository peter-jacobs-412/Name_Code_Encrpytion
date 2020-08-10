#include <vector>
#include <fstream>
using namespace std;
class Message {
    private:
        string alphabet = "abcdefghijklmnopqrstuvwxyz ";
        string coded_alphabet;
        string code;
        ofstream output;
        ifstream input;
        string input_file_name;
        string output_file_name;
        bool encode_or_decode;
    public:
        bool get_encode_or_decode();
        void encode();
        void decode();
        void set_alphabet();
        void get_info();
};