#include "subject.h"

Subject::Subject()
{

}

void Subject::attach(Observer* observer)
{
    observerList.push_back(observer);
}

int Subject::getState()
{
    return state;
}

void Subject::setState(int state)
{
    this->state = state;
    for (Observer* os: observerList) {
        os->update(state);
    }
}
