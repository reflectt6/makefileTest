//
// Created by Rain Night on 2023/5/17.
//

#ifndef MAKEFILETESTS_SOTESTS_H
#define MAKEFILETESTS_SOTESTS_H


class SoTest {
public:
    void func1();

    virtual void func2(); // 虚函数

    virtual void func3() = 0; // 纯虚函数
};


#endif //MAKEFILETESTS_SOTESTS_H
