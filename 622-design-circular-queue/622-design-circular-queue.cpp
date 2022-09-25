class MyCircularQueue {
public:
    vector<int> v;
    int i,j,n;
    bool empty;
    
    MyCircularQueue(int k) {
        v=vector<int>(k);
        i=0,j=0;
        n=k;
        empty=true;
    }
    
    bool enQueue(int value) {
        if(isFull())
            return false;
        empty=false;
        v[j]=value;
        j=(j+1)%n;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())
            return false;
        v[i]=0;
        i=(i+1)%n;
        if(i==j)
            empty=true;
        return true;
    }
    
    int Front() {
        if(isEmpty())
            return -1;
        return v[i];
    }
    
    int Rear() {
        if(empty)
            return -1;
        return v[(j+n-1)%n];
    }
    
    bool isEmpty() {
        return empty;
    }
    
    bool isFull() {
       if(empty)
           return false;
        return (j==i);
    }
};
