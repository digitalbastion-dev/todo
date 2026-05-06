#pragma once
#include <string>
#include <chrono>

struct Note {
    enum class Status {
        IN_PROGRESS,
        DONE,
        END
    };
    
    std::string tag; // типо работа офис чет такое 
    std::string description; // что сделать 
    std::chrono::system_clock::time_point create_time;
    std::chrono::system_clock::time_point end_time; 
    Status status;


};