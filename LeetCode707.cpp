class MyLinkedList {
 public:
 struct LinkedNode {
  int val;
  LinkedNode* next;
  LinkedNode() : val(0), next(nullptr){};
  LinkedNode(int x) : val(x), next(nullptr){};
  LinkedNode(int x, LinkedNode* next) : val(x), next(next){};
};


  MyLinkedList() { _dummyHead = new LinkedNode(0);
    _size = 0;
  }

  int get(int index) {}

  void addAtHead(int val) { LinkedNode* head = new LinkedNode();
    LinkedNode* cur = _dummyHead;
    while(cur->next)
  }

  void addAtTail(int val) {

  }

  void addAtIndex(int index, int val) {}

  void deleteAtIndex(int index) {}
  private:
   int _size;
   LinkedNode* _dummyHead;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */