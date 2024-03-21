#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  assert(argc == 2);
  ifstream source(argv[1]);
  ofstream compiled(argv[2]);
  /*
  expand complex instructions
  into assembly
  do not push labels
  use vector
  */
  string line;
  int current = 0;
  while (std::getline(source, line)) {
    std::istringstream ss(line);
    // Now you can use the ss object to process the current line
    // ... your code to process the line using ss ...
  }
}