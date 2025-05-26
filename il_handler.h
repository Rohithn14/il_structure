#ifndef IL_FILE_STRUCTURE_IL_HANDLER_H
#define IL_FILE_STRUCTURE_IL_HANDLER_H

#include "includes.h"

class IlHandler
{
  public:
  ~IlHandler();
  static IlHandler* GetInstance();

  private:
  IlHandler();
  // Non-copyable and non-movable
  IlHandler(const IlHandler&) = delete;
  IlHandler& operator=(const IlHandler&) = delete;
  IlHandler(IlHandler&&) = delete;
  IlHandler& operator=(IlHandler&&) = delete;
  
};

#endif // IL_FILE_STRUCTURE_IL_HANDLER_H