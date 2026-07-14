class MinStack 
{
public:

stack<int>mini;
stack<int> st;

MinStack()
    {
        
    }
    
    void push(int val) 
    {
        st.push(val);
        if(mini.empty()) 
        {
            mini.push(val);
            return;
        }
        mini.push(min(val,mini.top()));
    }
    
    void pop() 
    {
        if(st.empty())
        {
            return;
        }
        st.pop();
        mini.pop();

    }

    int top() 
    {
        return st.top();
    }
 
    int getMin() 
    {
        return mini.top();
        
    }
};


