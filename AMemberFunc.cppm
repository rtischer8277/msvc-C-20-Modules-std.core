// AMemberFunc.cppm
module;

#include <iostream>
#include <vector>

#pragma warning( disable : 4844 )
module MemberFunc;
//import std.memory; // "warning C5050: Possible incompatible environment while importing module 'std.core': _DEBUG is defined in current command line and not in module command line"
import std.core;
import AStruct;

int A::MemberFunc()
{
  // Test usage of int initialized in primary interface module FuncEnumNum.ixx.
  if( num == 35 ) // OK
  {
    std::cout << "num is 35\n"; // OK
  }

  // Test usage of a function declared here but implemented in AMemberFunc.cppm module unit.
  num = MyFunc(); // OK

  // Test usage of scoped enum declared here initialized in primary interface module FuncEnumNum.ixx.
  if( hwColors == HwColors::YELLOW ) // OK
  {
    std::cout << "hwColor is YELLOW\n";
  }

  // Test usage of microsoft global vector header and std memory module. Currently throws compile error.
  //std::vector< std::shared_ptr< wchar_t > > vecWChars;
  //for( int ndx = 0; ndx < 10; ndx++ )
  //{
  //  std::shared_ptr< wchar_t > sp;
  //  sp = std::make_shared< wchar_t >();
  //  vecWChars[ ndx ] = sp;
  //}

  // destructs vecStr on the way out.
  return 44;
}

