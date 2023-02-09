#ifndef BONUSWORKTRIAL_ARRAYIMPLEMENTATIONOFQUEUE_H
#define BONUSWORKTRIAL_ARRAYIMPLEMENTATIONOFQUEUE_H

class ArrayImplementationOfQueue {
public:
    int queue[50]{};
    int n = 50;
    int front = - 1;
    int rear = - 1;
    void Queue_insertion();
    void Delete();
    void Display_Queue ();
};

#endif //BONUSWORKTRIAL_ARRAYIMPLEMENTATIONOFQUEUE_H
