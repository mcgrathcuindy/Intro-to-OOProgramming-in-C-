                                                                                                                                                                                                            
/*                                                                                                                                                                                                                                                   
chris mcgrath                                                                                                                                                                                                                                        
april 15th 2019                                                                                                                                                                                                                                      
linked list .h file                                                                                                                                                                                                                                  
*/

#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class NumberList{
private:
  struct ListNode{                                                                                                                                                                                                                                   
    double data;
    ListNode* next;//point to the next node                                                                                                                                                                                                          
    ListNode
  };
  ListNode* head;
public:
  //constructor                                                                                                                                                                                                                                      
  NumberList(){
    head = nullptr;                                                                                                                                                                                                                                  
  }
  //destructor                                                                                                                                                                                                                                       
  ~NumberList(){
 
  
  }

  //linked list operations                                                                                                                                                                                                                           
  void appendNode(double num);
  void insertNode(double);
  void deleteNode(double);
  void displayList() const;


};
#endif