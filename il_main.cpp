#include "includes.h"
#include "il_handler.h"

#include <fstream>
using std::ifstream;

void PrintUsage() 
{
  cout << "Usage: il_fs <filename>\n";
}



int main(int argc, char *argv[])
{
  if(argc < 2)
  {
    PrintUsage();
    return 1;
  }

  string il_file = argv[1];
  ifstream file_reader(il_file);

  while(!file_reader.eof())
  {
    string line;
    getline(file_reader, line);
    std::cout << line;
    break;
  }


}