/*
  The trick to perform the min element query query in constant is to add an min_value attribute for each Node.
  This attribute represents the minimum element in the stack if this is the top Node of the stack.
  Everytime we push a new Node, we compare the current minimum element (min_value attribute of the top Node) with the 
  new value to be pushed. We set the lesser value to be the new minimum element for this new Node's min_value attribute.
  To query for the minimum element, we simply return the min_value attribute of the current top Node, resulting in constant time complexity.
*/
typedef struct Node_Struct {
  int data;
  int min_value;
  struct Node_Struct *next = NULL;
}Node;
class MinStack {

private:
    Node *head = NULL;
    
    
public:
    /** initialize your data structure here. */

    MinStack() {
        head = NULL;
    }
    
    void push(int x) {
        //printf("pushed %d\n",x);
        Node *new_node = (Node *)calloc(1,sizeof(Node));
        new_node->data = x;
        if(head == NULL)
            new_node->min_value = x;
        else
            new_node->min_value = (x < head->min_value)?x:head->min_value;
        new_node->next = head;
        head = new_node;
        //print_stack();
    }
    
    void pop() {
        //printf("popped\n");
        Node *tmp = head;
        head = head->next;
        free(tmp);
        //print_stack();
    }
    
    int top() {
        //printf("top queried and returned:%d\n",head->data);
        return head->data;
    }
    
    int getMin() {
        //printf("min queried and returned:%d\n",head->min_value);
        return head->min_value;
    }
    void print_stack(){
        Node *p = head;
        printf("stack:\n");
        while(p != NULL)
        {
            printf("%d\n",p->data);
            p = p->next;
        }
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
