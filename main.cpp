#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <chrono>
#include "note.h"
#include <variant>
#include <iomanip>
#include <ctime>



void createNote(std::vector<Note> &storage){
    Note note;
    std::getline(std::cin, note.description);
    std::getline(std::cin, note.tag);
    note.create_time = std::chrono::system_clock::now();
    note.end_time = note.create_time + std::chrono::hours(24);
    note.status = Note::Status::IN_PROGRESS;       
    storage.push_back(note);
}
void deleteNote(std::vector<Note> &storage, int idex){
    int size = storage.size();
    for(int i = idex; i < size-1; ++i){
        std::swap(storage[i], storage[i+1]);       
    }
    storage.pop_back();
}

void ShowAllNote(const std::vector<Note> &storage){
    int size = storage.size();
    for(int i = 0; i < size; ++i){
        std::cout << storage[i];
    }
    
}

void showNote(const Note &note){
    std::cout << note.tag << std::endl;
    std::cout << note.description << std::endl;
    std::time_t time = std::chrono::system_clock::to_time_t(note.create_time);
    std::time_t time_end = std::chrono::system_clock::to_time_t(note.end_time);
    auto now_time = std::chrono::system_clock::now();
    auto left_time = std::chrono::duration_cast<std::chrono::hours>(note.end_time-now_time).count();
    std::cout << "create time:" << std::ctime(&time) << std::endl;
    std::cout << "time left:" <<

}

int main(){
    std::vector<Note> storage;
    createNote();
    
    return 0;
}

