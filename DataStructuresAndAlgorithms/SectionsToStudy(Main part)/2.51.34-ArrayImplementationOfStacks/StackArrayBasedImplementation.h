#ifndef BONUSWORKTRIAL_STACKARRAYBASEDIMPLEMENTATION_H
#define BONUSWORKTRIAL_STACKARRAYBASEDIMPLEMENTATION_H

#define MAX_SIZE 101
class StackArrayBasedImplementation {
public:
    int A[MAX_SIZE]{};
    int top = -1;

    void Push(int x);
    void Pop();
    int Top();
    void Print();
};

#endif //BONUSWORKTRIAL_STACKARRAYBASEDIMPLEMENTATION_H
