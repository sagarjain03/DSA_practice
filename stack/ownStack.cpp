#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;

        top = -1;
    }

    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "stack overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "stack underflow" << endl;
        }
        else
        {
            top--;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getTop()
    {
        if (top <= -1)
        {
            cout << "invalid index" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    void print()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{

    Stack st(4);
    

    cout<<"top element is : "<<st.getTop()<<endl;
    return 0;
}