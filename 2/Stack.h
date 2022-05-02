class Stack{
    private:
        int size,pos;
        int *data;
        bool moreMemory(int n);

    public:
      float xa,xb,xc,ya,yb,yc;
      Stack();
      Stack(int n);
      Stack(Stack &other);
      ~Stack();
      bool isEmpty();
      bool pop(int &element);
      bool push(int element);
};
