#include <iostream>
#include <memory>

using namespace std;

struct destination
{

};

struct connection
{

};

connection connect(destination *)
{
    cout << "connect" << endl;
}

void disconnect(connection)
{
    cout << "disconnect" << endl;
}

void f1(destination &d)
{
    cout << "f1" << endl;
    connection c = connect(&d);

    shared_ptr<connection> p(&c, [](connection *p){ cout << "lambda disconnect" << endl; disconnect(*p); });
}

void f2(destination &d)
{
    cout << "f2" << endl;
    connection c = connect(&d);
    shared_ptr<connection> p(&c, [](connection *p){ cout << "lambda disconnect" << endl; disconnect(*p); });

    throw runtime_error("connect fail");
}

int main()
{
    destination d;
    try
    {
        f1(d);
        f2(d);
    }
    catch(exception &e)
    {
        cout << e.what() << endl;
    }


    return 0;
}