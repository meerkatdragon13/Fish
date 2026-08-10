#include <iostream>
using namespace std;

int main() {
  cerr << "Started software.\n";
  system("open 'https://www.kali.org/tools/'");
  int i = 0;
  int file_name = 0;
  string command;
  while (true) {
    command = "mkdir " + to_string(file_name);
    system(command.c_str());
    i++;
    file_name++;
  }
  cerr << "Shutting down software.\n";
  return 0;
}
