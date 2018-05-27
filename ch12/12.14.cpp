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

void end_connection(connection *p)
{
    cout << "end_connection" << endl;
    disconnect(*p);
}

void f1(destination &d)
{
    cout << "f1" << endl;
    connection c = connect(&d);

    shared_ptr<connection> p(&c, end_connection);
}

void f2(destination &d)
{
    cout << "f2" << endl;
    connection c = connect(&d);
    shared_ptr<connection> p(&c, end_connection);

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