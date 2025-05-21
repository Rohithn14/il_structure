#include "includes.h"

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

}