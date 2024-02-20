// creating vector Data-structure


template<typename T>
class Vector{

    // Data members
    T *arr;  // to store the first memory address of vector
    int cs; // to store the current size of vector
    int ms; // to store the maximum size of vector or simply its capacity

    public: 
        Vector(int max_size = 1){
            cs = 0;
            ms = max_size;
            arr = new T[ms];
        }

        void push_back(const T d){
            /* Two cases will be there
            1. when the cs is equal to ms meaning we cannot add new data because array is full
                so we need to do create a new array of double the capacity and copy the elements 
                from old array to this new array
            2. if cs is not equal to ms then simply add data/element to array
            */

           if(cs == ms){
               T *oldArray = arr;
               ms *= 2;
               arr = new T[ms];   // created new array of double the capacity
               
               // now copy elements from oldArray to new array
               for (int i = 0; i < cs; i++){
                   arr[i] = oldArray[i];
               }

               // now delete the old array
               delete[] oldArray;
           }

           arr[cs] = d;
           cs++;
        }

        void pop_back(){
            /* we are going to keep it simple and we will not shrink our vector;
                what we will do is simply bring our cs 1 step back so that new element will be added at old data's place also while printing it will be excluded
             */
            if(cs != 0)
                cs--;

        }

        // tells user if vector is empty or not
        bool isEmpty() const{
            return cs == 0;
        }

        // const function are those which do not modify the data members of our class
        // simply they would not change the value of variables

        // front - gives element at front
        T front() const{
            return arr[0];
        }

        // back - gives element at back
        T back() const{
            return arr[cs - 1];
        }

        // at(i) - gives element present at ith-position
        T at(const int i) const{
            return arr[i];
        }

        // size - gives the size of vector
        int size() const{
            return cs;
        }

        // capacity - gives the total capacity of vector
        int capacity() const{
            return ms;
        }

        // operator overloading
        T operator[](const int i) const{
            return arr[i];
        }

};