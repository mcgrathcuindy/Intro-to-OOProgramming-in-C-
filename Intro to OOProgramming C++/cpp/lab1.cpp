#ifndef NEWNUMBERLIST_H
#define NEWNUMBERLIST_H

template<typename T>
class ListNode{
    public:
    T data;
    ListNode<T> *next;
    ListNode<T> *previous;
    
    //constructor 
    ListNode(T data_value){
        data = data_value;
        next = nullptr;
        previous = nullptr;
    }
    
};

template <typename T>
class NumberList{
    private:
    ListNode<T> *head;
    public:
    //constructor
    NumberList(){
        head = nullptr;
    }
    //destructor
    ~NumberList(){
       
    ListNode<T> *next = head;
    ListNode<T> *cur = nullptr;
        while (next != nullptr) {
            cur = next;
            next = next->next;
            delete cur;
        }
    }
        


    //other operations
    void appendNode(T);
    void insertNode(T);
    void deleteNode(T);
    void displayList() const;
};

template <typename T>
void NumberList<T>::appendNode(T newValue){
    
    ListNode<T> *newNode;//new node
    ListNode<T> *nodePtr;//traverse list
    
    newNode = new ListNode<T>(newValue);//3 lines become 1!
    
    
    if(!head){
        head = newNode;
        newNode->previous = nullptr;
    }else {
    
        nodePtr = head;
    
        while(nodePtr->next){//find and stop at the last node in the list
            nodePtr = nodePtr->next;
        }
    
        nodePtr->next = newNode;//appends new node to the end of the list 
        
        newNode->previous = nodePtr;
    }
    
}

template <typename T>
void NumberList<T>::deleteNode(T value){
    ListNode<T> *nodePtr;//traverse list
    ListNode<T> *previousNode;
    ListNode<T> *nextNode;
    
    if(!head){//check if you have an empty list, and return. Avoid a double delete
        return;
    }
    
    //determine if head points to the thing you're looking for
    if(head->data == value){
        nodePtr = head->next;//save current second element
        delete head;//delete current first
        head = nodePtr;//make second element become the first
        nodePtr->previous = head;
    }else{
        nodePtr = head;
        
        while(nodePtr != nullptr && nodePtr->data != value){
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
            nextNode = nodePtr->next;
        }
        if(nodePtr){//if nodePtr == nullptr, skip block
            previousNode->next = nodePtr->next;
            nextNode->previous = previousNode;
            delete nodePtr;
        }
    }
}
#include <iostream>
int main(void){
    std::cout << "1\n" ;
    NumberList<int> a;
    a.appendNode(3);
    a.displayList();
}
#endif
    
