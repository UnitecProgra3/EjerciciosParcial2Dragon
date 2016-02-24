#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> mi_stack;
    mi_stack.push("A");
    mi_stack.push("B");
    mi_stack.push("C");

    while(!mi_stack.empty())
    {
        cout<<mi_stack.top()<<endl;
        mi_stack.pop();
    }

    return 0;
}
