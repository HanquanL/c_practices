#include <iostream>

using namespace std;

class RawArray{
    private:
        int data[100];
        int size;
    public:
        RawArray(){
            size = 0;
        }

        int getSize(){
            return size;
        }

        bool isEmpty(){
            return size == 0;
        }

        void printArray(){
            for(int i = 0; i < size; i++){
                cout << data[i] << " ";
            }
            cout << endl;
        }

        void append(int value){
            if(size > 100){
                cout << "Array is full" << endl;
                return;
            }
            data[size] = value;
            size++;
        }

        int get(int index){
            if(index < 0 || index >= size){
                cout << "Invalid Index" << endl;
                return -1;
            }
            return data[index];
        }

        void set(int index, int value){
            if(index < 0 || index >= size){
                cout << "Invalid Index" << endl;
                return ;
            }
            data[index] = value;
        }

        int linearSearch(int target){
            for(int i = 0; i < size; i++){
                if(data[i] == target){
                    return i;
                }
            }
            return -1;
        }

        void insert(int index, int value){
            if (size >= 100) {
                cout << "Array is full." << endl;
                return;
            }

            if (index < 0 || index > size) {
                cout << "Invalid index." << endl;
                return;
            }

            
        }
}