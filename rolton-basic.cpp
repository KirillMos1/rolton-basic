#include <iostream>
#include <vector>
#include "parser.hpp"
#include "lexer.hpp"

using namespace std;

int main() {
    string code;
    cout<<"Enter code: ";
    getline(cin, code);
    vector<lexer::token> tokens = lexer::lexering(code);
    auto const exitcode = parser::parse(tokens);
    if (exitcode == 0) {
        cout<<endl<<"Programm finished with code 0"<<endl;
        return 0;
    }
    else if (exitcode == 1) {
        cout<<endl<<"Programm finished with code 1\nIncorrect inctruction"<<endl;
        return 1;
    }
}
