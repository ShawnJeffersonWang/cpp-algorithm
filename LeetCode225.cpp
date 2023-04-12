#include<bits/stdc++.h>
using namespace std;
//使用一个队列实现栈
class MyStack{
    public:
    queue<int> que;
    MyStack(){

    }
    void push(int x){
        que.push(x);
    }
    int pop(){
        int size=que.size();
        size--;
        while(size--){
            que.push(que.front());
            que.pop();
        }
        int result=que.front();
        que.pop();
        return result;
    }
    int top(){
        return que.back();
    }
    bool empty(){
        return que.empty();
    }
};
