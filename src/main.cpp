#include "../include/Stack.h"
#include <iostream>

int main() {

    std::cout << "Zhangsan's output: Running main" << std::endl;

    Stack intStack;

    // 检查栈是否为空
    std::cout << "Is the stack empty? " << intStack.isEmpty() << std::endl;

    // 向栈中添加元素
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);

    // 查看栈顶元素
    std::cout << "Top element is: " << intStack.top() << std::endl;

    // 从栈中移除元素
    std::cout << "Popped element: " << intStack.pop() << std::endl;

    // 再次查看栈顶元素
    std::cout << "Top element after pop is: " << intStack.top() << std::endl;

    // 获取栈的大小
    std::cout << "Size of the stack: " << intStack.size() << std::endl;

    // 再次从栈中移除元素
    intStack.pop();
    intStack.pop();

    // 检查栈是否为空
    std::cout << "Is the stack empty after popping all elements? " << intStack.isEmpty() << std::endl;

    return 0;
}