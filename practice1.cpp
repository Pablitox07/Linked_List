#include <iostream>

class Node{
    public:
        int value;
        Node *next;
};

void print_nodes(Node* node [10]){
    std:: cout << "[";
    for (int i = 0; i < 10; i++){
        std:: cout << node[i]->value;
        if (i != 9){
            std:: cout << ", ";
        }
    }
    std:: cout << "]" << std:: endl;
}

int find_index(Node* node [10], int num){
    for (int i = 0; i < 10; i++){
        if (node[i]->value == num){
            return i;
        }
    }
    return -1;
}
int main(){

    Node* arr [10];

    for (int num = 0; num < 10; num++){
        arr[num] = new Node;
        arr[num]->value = num + 1;
        if (num == 9){
            arr[num]->next = nullptr;
        }
        else{
            arr[num]->next = arr[num+1];
        }
    }
    

    std:: cout << "Linked list: "; 
    print_nodes(arr);

    std:: cout << "Number found in index: " << find_index(arr, 5) << std:: endl;
    std:: cout << "Number not found: " << find_index(arr, 99) << std:: endl;

    for (int i = 0; i < 10; i++) {
        delete arr[i];
    }

    

    return 0;
}
