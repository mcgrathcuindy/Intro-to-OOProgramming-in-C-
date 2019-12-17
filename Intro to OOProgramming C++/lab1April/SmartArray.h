//Your SmartArray Template goes here!
//Remember Templated classes use only one file.
#include <iostream>
template <typename T>
class SmartArray{
   


public:   
//needed for unit tests to work!
   int size() const;  // Return the number of elements in the SmartArray
   SmartArray<T>& operator=(const SmartArray &other);
   T &operator[](const int ref);
   SmartArray(void){
      array_size = 0;
      data = 0;
   }
   SmartArray<T> operator+(const SmartArray &other);
   
   SmartArray(int val){
      array_size = val;
      data = new  T[val];
   }
   ~SmartArray(void){
      //delete [] data;
   }
   SmartArray(const SmartArray& var){
      array_size = var.array_size;
      data = new T [array_size];
      for(int i = 0; i < array_size; i++){
         *(data + i) = *(var.data + i);
      }
   }
   T* data;
   unsigned array_size;
   T default_value;
};

template <class T>
 T &SmartArray<T>::operator[](const int ref){
    if(ref >= array_size){
        SmartArray copy(ref);
        for(int i = 0; i < array_size; i++){
            *(copy.data + i) = *(data + i);
        }
        array_size = ref + 1;
        data = copy.data;
        return data[ref];
    } else {
        return data[ref];
    }
 }


template <class T>
int SmartArray<T>::size() const{
  return array_size;
}

template <class T>
SmartArray<T>& SmartArray<T>::operator=(const SmartArray &other){
  delete [] data;
  data = NULL;
  array_size = other.array_size;
  //my class has a default value that I used to specify empty elements, you can ignore this if you want
  default_value = other.default_value;
  if(other.data == NULL){
    data = NULL;
    return *this;
  } else {
    data = new T[array_size];
    for(unsigned i = 0; i < array_size; i++){
    data[i] = other.data[i];
    }
  }
  return *this;
}

    template<class T>
   SmartArray<T> SmartArray<T>::operator+(const SmartArray &other){
       SmartArray a(array_size + other.array_size);
        for(int i = 0; i < array_size; i++){
            *(a.data + i) = *(data + i);
        }
    for(int i = array_size; i < (array_size + other.array_size); i++){
        *(a.data + i) = *(other.data + i);
    }
   }