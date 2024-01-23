#include <iostream>
#include <string>

using namespace std;
char letters[]= "abcdefghijklmnopqrstuvwxyz";
string encryptDecrypt(string toEncrypt) {
    char key[] = "tajne";
    string output = toEncrypt;
    
    for (int i = 0; i < toEncrypt.size(); i++) {
        output[i] = toEncrypt[i] ^ key[i % (sizeof(key) / sizeof(char))];
        // Find the index of output[i] in letters
        char* letterPos = strchr(letters, output[i]);
        if (letterPos) {
            int index = letterPos - letters;
            cout << index << " ";
        }
    }
    
    return output;
}

int main(int argc, const char * argv[])
{
    string text = "Hello World";
    string encrypted = encryptDecrypt(text);
    cout << "Encrypted:" << encrypted << "\n";
    
    string decrypted = encryptDecrypt(encrypted);
    cout << "Decrypted:" << decrypted << "\n";
    
    return 0;
}