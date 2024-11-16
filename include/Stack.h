#include <iostream>
#include <vector>
#include <exception>

class Stack {
private:
    std::vector<int> elements;

public:
    // 检查栈是否为空
    bool isEmpty() const;

    // 向栈中添加元素
    void push(const int& element);

    // 从栈中移除元素
    int pop();

    // 查看栈顶元素
    int top() const;

    // 获取栈的大小
    size_t size() const;
};