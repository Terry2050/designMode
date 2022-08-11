#ifndef OBSERVER_H
#define OBSERVER_H


class Observer
{
public:
    Observer();
    ~Observer();
    virtual void update(int) = 0;
};

#endif // OBSERVER_H
