using namespace std;
class Node{
        public: 
        Node(int x){
            value =x;
        }
        private:
        int value;
        Node* next;
        Node* prev;
    };
class LList{
private:
    Node head;
    Node tail;

public:
    void Delete();
    void Insert(int value);
    void Print();
    bool Search(int value);
};