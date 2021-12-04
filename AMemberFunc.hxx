// AMemberFunc.hxx
export struct A
{
  int MemberFunc(); // declares 'MemberFunc'
};


//// AMemberFunc.hxx
//export struct A
//{
//  int MemberFunc()
//  {
//    if( num == 35 ) // OK: 'num' is defined in primary interface module 'FuncEnumNum.ixx'
//    {
//      std::cout << "num is 35\n"; // OK: 'cout' is included in global fragment 
//    }
//
//    num = MyFunc(); // OK: 'MyFunc' is declared in primary interface module and defined in 'MyFunc.cppm' module unit
//
//    if( hwColors == HwColors::YELLOW ) // OK: 'hwColors' is declared in primary interface module
//    {
//      std::cout << "hwColor is YELLOW\n";
//    }
//
//    return 44;
//  }
//};

