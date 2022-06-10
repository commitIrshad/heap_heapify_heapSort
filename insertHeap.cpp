// code for inserting element into heap 

#include <iostream>
#include<algorithm>
using namespace std;

class heap {
    public:
    int arr[100];
    int size = 0;
    
    //constructor
    heap() {
        arr[0] = -1;
        size = 0;
    }
    
    //insert function
    void insert(int val) {
        size = size+1;
        int index = size;
        arr[index] = val;
        
        while(index > 1) {
            int parent = index/2;
            
            if(arr[parent] < arr[index]) {
                swap(arr[index] , arr[parent]);
                index = parent;
            }
            else
               return;
        }
    }
    
    //printing the result
    void print() {
        for(int i=1; i<=size; i++) {
            cout<<arr[i]<<" ";
        }
    }
};

int main() {
    
   heap h;
   h.insert(50);
   h.insert(55);
   h.insert(53);
   h.insert(52);
   h.insert(54);
   h.print();
   
   return 0;
}
