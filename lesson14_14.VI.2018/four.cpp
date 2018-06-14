#include <iostream>
#include <functional>

using namespace std;

typedef function<int(int)> CallbackFunction;

class Caller {
private:
    CallbackFunction cbf;
    public:
    void connectCallback(CallbackFunction cbf)
    {
        this->cbf = cbf;
    }
    void test(int i)
    {
        int result = cbf(i);
        cout << "Caller result " << result << endl;
    }
};

class Callee {
private:
    int i;
public:
    Callee(int i)
    {
        this->i = i;
    }
    int callbackFunction(int i)
    {
        cout << "Callee input " << endl;
        return this->i * i;
    }
    void seti(int i)
    {
        this->i = i;
    }
};

int main(int argc, char *argv[])
{
    Caller caller;
    Callee callee(3);
    
    caller.connectCallback(&Callee::callbackFunction);
    caller.test(&callee, 2);
    
    callee.seti(4);
    caller.test(&callee, 2);
    
    return 0;
}
