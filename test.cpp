#include <iostream>
#include <string>

void turner(std::string& line, int start, int end){
    char temp;
    for(int i = 0; i < (end-start)/2; ++i){
        temp = line[start+i];
        line[start+i] = line[end-1-i];
        line[end-1-i] = temp;
    }
}
int main(){
    std::string line;
    std::getline(std::cin, line);
    for(int i = 0; i < line.size(); ++i){ // i = 4
        int count = 0; // 4
        if(line[i] != ' '){
            count+=1;
        }        
        else{
            if(count >= 5){
                turner(line, i-count, i);
            }
            count = 0;
        }
    }
    std::cout << line;
    return 0;
}