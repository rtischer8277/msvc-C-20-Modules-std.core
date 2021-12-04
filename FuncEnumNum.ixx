//  FuncEnumNum.ixx
export module FuncEnumNum; // primary interface module

export int num { 35 }; // OK: export and direct init of 'num'
export int MyFunc(); // OK: declaration of 'MyFunc'
export enum class HwColors // OK: declaration of enum
{
  YELLOW,
  BROWN,
  BLUE
};

export HwColors hwColors { HwColors::YELLOW }; // OK: direct init of enum
