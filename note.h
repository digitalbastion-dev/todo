#pragma once
#include <string>
#include <chrono>
enum class Status {
    IN_PROGRESS,
    DONE,
    END
};
struct Note {
    std::string tag; // типо работа офис чет такое 
    std::string description; // что сделать 
    std::chrono::system_clock::time_point created;
    std::chrono::system_clock::time_point end; 
    unsigned int id;

};