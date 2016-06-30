using ArrT = string[10];
ArrT& func1(ArrT& arr); // best one

auto func2(ArrT& arr) -> string(&)[10];

string arrS[10];
decltype(arrS)& func3(ArrT& arr);