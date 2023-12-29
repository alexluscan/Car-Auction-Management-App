#ifndef OBSERVER_H
#define OBSERVER_H
#include <string>
#include <vector>

class Observer {
public:
    Observer(const std::string& name) : name {name}
    {}
    virtual void Update() = 0;
    virtual ~Observer() {}
    virtual const std::string& GetName() const
    {
        return name;
    }
    virtual void SetName(const std::string& name)
    {
        this->name = name;
    }
private:
    std::string name;
};

class Subject {
public:
    Subject(const std::string& name) : name {name}
    {}
    virtual ~Subject() {}

    virtual void Register(Observer* observer)
    {
        observers.push_back(observer);
    }

    virtual const std::string& GetName() const
    {
        return name;
    }
    virtual void Notify()
    {
        for (auto observer : observers)
            observer->Update();
    }
private:
    std::vector<Observer*> observers;
    std::string name;
};


#endif // OBSERVER_H
