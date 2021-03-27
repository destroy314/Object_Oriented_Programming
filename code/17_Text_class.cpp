#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

class Text {
    string text = "";

   public:
    Text();
    Text(string name);
    string contents();
};

Text::Text(string name) {
    ifstream in(name);
    if (in.is_open()) {
        stringstream buffer;
        buffer << in.rdbuf();
        text = buffer.str();
    }
    in.close();
}
string Text::contents() { return text; }

int main() {
    Text file("17.txt");
    cout << file.contents();
    return 0;
}