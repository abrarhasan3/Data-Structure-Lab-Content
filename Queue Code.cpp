#include<bits/stdc++.h>

using namespace std;


int q[5],max_size=5;

int f=-1,rear=-1;

void push(int value)
{
    if((rear+1)%max_size==f)
    {
        cout<<"Overflow"<<endl;
        return;
    }
    if(f==-1 && rear == -1)
    {
        f=0;
        rear=0;
        q[rear]=value;
    }
    else
    {
        rear++;
        rear=rear%max_size;
        q[rear]= value;
    }

}

void pop()
{
    if(f==-1 && rear == -1)
    {
        cout<<"Underflow"<<endl;
        return;
    }

    if(f==rear)
    {
        f=-1;
        rear=-1;
    }
    else
    {
        f++;
        f=f%max_size;
    }

}

int ret_front()
{
    return q[f];
}

bool empty1()
{
    if(f==-1 && rear == -1)
    {
        return true;
    }
    else
        return false;

}

int main()
{
//    queue<int> q;
//    q.push(10);
//    q.push(20);
//    q.push(30);
//
//    q.push(112);
//
//    while(!q.empty())
//    {
//        cout<<q.front()<<endl;
//        q.pop();
//    }

push(10);
push(20);
push(30);
push(40);
push(50);

pop();
pop();

push(60);
push(70);
while(!empty1())
{
    cout<<ret_front()<<endl;
    pop();
}




}

