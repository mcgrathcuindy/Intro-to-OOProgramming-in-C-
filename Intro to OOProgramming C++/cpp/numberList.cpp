
#include "numberList.h"
#include <iostream>

void NumberList::appendNode(double num){                                                                                                                                                                                                             
  ListNode *newNode;//new node                                                                                                                                                                                                                       
  ListNode *nodePtr;//used to traverse the list                                                                                                                                                                                                      

  //allocate memory                                                                                                                                                                                                                                  
  newNode = new ListNode;
  newNode->data = num;
  newNode->next = nullptr;

  //if list is empty                                                                                                                                                                                                                                 
  //head points to new node                                                                                                                                                                                                                          
  if(!head){
    head = newNode;
  }else{
    nodePtr = head;//initialize nodePtr to point to first node                                                                                                                                                                                       
    while(nodePtr->next){                                                                                                                                                                                                                            
      nodePtr = nodePtr->next;
    }

    //append the new node                                                                                                                                                                                                                            
    nodePtr->next = newNode;                                                                                                                                                                                                                         
  }
}

void NumberList::displayList()const{
  ListNode *nodePtr;
  nodePtr = head;
  
  while(nodePtr){
    std::cout << nodePtr->data<< std::endl;
    nodePtr = nodePtr->next;
  }
  
}