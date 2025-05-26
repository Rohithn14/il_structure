#include "il_handler.h"

VersionVsStdMapT IlHandler::std_versions = {
  {"201103", "C++11"},
  {"201703", "C++17"},
  {"201103", "C++20"},
  {"202302", "C++23"},
};

IlHandler* IlHandler::GetInstance() {
  static IlHandler instance; 
  return &instance;
}

IlHandler::IlHandler() {

}
IlHandler::~IlHandler() {
  
}