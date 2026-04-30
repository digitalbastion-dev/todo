#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include "note.h"
#include <variant>



void createNote(std::vector<std::string>* main_v){
    std::string description, tag;
    std::getline(std::cin, description);
    std::getline(std::cin, tag);
    auto create_time = std::chrono::system_clock::now();
    auto end_time = create_time + std::chrono::hours(24);
    Status IN_PROGRESS;
    std::getline(std::cin, description);
    std::getline(std::cin, tag);
    int id;
    std::cin >> id;
    std::vector<std::string> Note;
    
    


}
void deleteNote(std::vector<std::string> &vectr){
    vectr.clear();
}
void ShowAllNote(std::vector<std::string()){
    
}

int main(){
    std::vector<std::vector<std::string>> main_v;
    createNote(&main_v);
    
    return 0;
}

