// basic file operations
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;


int log(char * msg){
  ofstream myfile;
  time_t now = time(0);
  char* dt = ctime(&now);
  myfile.open ("example.txt",ios::app);
  myfile << "\n" << dt << "\t\t\t\t\t\t" << msg;
  myfile.close();
  return 0;
}

int main () {
    log("Test complete");
}

