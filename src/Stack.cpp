#include "../include/Stack.h"

// 检查栈是否为空
bool Stack::isEmpty() const {
    return elements.empty();
}

// 向栈中添加元素
void Stack::push(const int& element) {
    elements.push_back(element);
}

// 从栈中移除元素
int Stack::pop() {
    if (isEmpty()) {
        throw std::out_of_range("Stack<>::pop(): empty stack");
    }
    int elem = elements.back();
    elements.pop_back();
    return elem;
}

// 查看栈顶元素
int Stack::top() const {
    if (isEmpty()) {
        throw std::out_of_range("Stack<>::top(): empty stack");
    }
    return elements.back();
}

// 获取栈的大小
size_t Stack::size() const {
    return elements.size();
}