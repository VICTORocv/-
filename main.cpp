//
//  main.cpp
//  模版
//
//  Created by 郭悟清 on 2017/2/21.
//  Copyright © 2017年 郭悟清. All rights reserved.
//

#include <iostream>
//类模版的定义
template <class T1,class T2>
class Pair{
public:
    T1 key;
    T2 value;
    Pair(T1 k,T2 v):key(k),value(v){};
    bool operator <(const Pair<T1,T2>&p)const;
};
template<class T1,class T2>
bool Pair<T1,T2>::operator<(const Pair<T1, T2>&p)const
{
    return key<p.key;
}

//函数模版作为类模版成员
template <class T2>
class A{
public:
    template<class T3>
    void Func(T3 t)
    {
        std::cout<<t;//成员函数模版
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    A<int> a;
    a.Func("K");//成员函数模版Func被实例化
    return 0;
}
