#include<iostream>
#include<string>
using namespace std;
// structure
struct element
{
    /* data */
    int value;
    element*below;
};

// pointer that assign the top of array
element*top=NULL;
int length=0;

// push function for the stacks 
// LIFO 
void insert(int val)
{
    element*n;
    n=new element;
    n->value=val;
    /* cout<<val<<"Done"<<endl; */ 
    n->below=top;
    top=n;
    return;
}

// pop function
// LIFO
void pop(int val)
{
    if (top==NULL)
    {
        /* code */
        return;
    }
    else
    {
        element*temp;
        temp=top;
        cout<<temp->value;
        top=temp->below;
        delete temp;
        return;
    }
    
    return;
}

// display function "to display output on screen"
void show()
{
    element*node;
    if (top==NULL)
    {
        /* code */
        return;
    }
    else
    {
        node=top;
        while (top!=NULL)
        {
            /* code */
            cout<<node->value<<endl;
            node=node->below;
        }
    }
    return;
}

// main function
int main()
{
    // defining structure in main function
    struct element;
    // val instead of value but use it in its place
    int val;
    // push function
    insert(val);
    pop(val);
    show();
    return 0;
}