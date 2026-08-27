#include <iostream>
#include <string>
#include <filesystem>
#include "utility.h" 

using namespace std;

void fileInfo() {
    cout << "\n===== FILE INFO =====\n" << endl;
    cout << "Enter File Path: " << endl;

    cin.ignore();
    string filePath;
    getline(cin, filePath);

    std::filesystem::path path(filePath);

    if(std::filesystem::exists(path)) {

        auto size = std::filesystem::file_size(path);
        cout << "File name: " << path.filename() << endl;
        cout << "Size of file: " << size << endl;
        cout << "File extension: " << path.extension() << endl;
    }
    else {
        cout << "File does not exist" << endl;
    }
}