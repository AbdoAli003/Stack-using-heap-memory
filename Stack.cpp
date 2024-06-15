#include <iostream>
using namespace std;
struct node
{
    int data;
    node* lower;
};

class Stack 
{
    private:
    node* top;
    int size;
    public:
    Stack () : top(NULL) , size(0)
    {
        
    }
    void push(int n)
    {
        node* x = new node;
        x->data = n;
        if (top!=NULL)
        {
            x->lower = top;
            top = x;
        }
        else top = x;
        size++;
    }
    void pop()
    {
        if (top== NULL)
        {
            cout << "Empty Stack!" << endl;
        }
        else
        {
            node* tmp = top;
            top = top->lower;
            delete tmp;
        }
    }
    int get_top()
    {return top->data;}
};
int main()
{
    Stack st;

    return 0;
}
