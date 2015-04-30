#include <iostream>

using namespace std;

class node{
    public:
        node(int x){
            data=x;
            next=null;
        }
        void setnext(node* c){
            next=c;
        }
    public:
        int data;
        node* next;

};

class linkedlist{
    public:
       linkedlist(){
            head->next=null;
       }

       void addnode(int x){
           node* b;
           while(b->next!=null){
                b=b->next;
           }

           b->setnext(new node(x));

       }

    private:
       node* head;

};

int main() {

    cout << "Hello World" << endl;
    return 0;

}
