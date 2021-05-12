# Linked List algorithm

## Adding a node

```c++
template<class T>
class Node
{
public:
    Node* prev = nullptr;
    Node* next = nullptr;
    T data;
    
    Node(){};
    ~Node()
    {
        if(next != nullptr)
            return next;
        else
        {
            std::cout << "deleted node at " << this;
            ~Node();
        }
    }
    
    Node* getNextNode()
    {
        if(next != nullptr)
            return next;
        else
            return nullptr;
    }
    
    void addNode()
    {
        Node* node = new Node();
    }
};

class LinkedList
{
    public:
        Node* head = nullptr;
        Node* tail = nullptr;
        Node* root = nullptr;
        
};
```
