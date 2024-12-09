#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    int priority;
    Node* next;
};

// Function to create a new node with given data and priority
Node* newNode(int data, int priority) {
    Node* temp = new Node();
    temp->data = data;
    temp->priority = priority;
    temp->next = nullptr;
    return temp;
}

// Function to insert a new node according to its priority (lower number means higher priority)
Node* enqueue(Node* head, int data, int priority) {
    Node* temp = newNode(data, priority);

    // If the head node has a higher or equal priority value, insert at the start
    if (head == nullptr || head->priority > priority) {
        temp->next = head;
        head = temp;
    } else {
        // Traverse the list to find the insertion point
        Node* current = head;
        while (current->next != nullptr && current->next->priority <= priority) {
            current = current->next;
        }
        temp->next = current->next;
        current->next = temp;
    }
    return head;
}

// Function to remove the highest priority node from the list
Node* dequeue(Node* head) {
    if (head == nullptr) {
        cout << "Queue is empty.\n";
        return nullptr;
    }
    Node* temp = head;
    head = head->next;
    cout << "Removed element: " << temp->data << " with priority " << temp->priority << endl;
    delete temp;
    return head;
}

// Function to display the priority queue
void displayQueue(Node* head) {
    if (head == nullptr) {
        cout << "Queue is empty.\n";
        return;
    }
    cout << "Priority Queue: ";
    while (head != nullptr) {
        cout << "(" << head->data << ", priority: " << head->priority << ") ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* pq = nullptr;

    // Inserting elements into the priority queue
    pq = enqueue(pq, 10, 3);
    pq = enqueue(pq, 20, 1);
    pq = enqueue(pq, 30, 4);
    pq = enqueue(pq, 40, 2);
     pq = enqueue(pq, 100, 2);

    // Displaying the priority queue
    displayQueue(pq);

    // Removing elements from the priority queue
    pq = dequeue(pq);
    displayQueue(pq);

    pq = dequeue(pq);
    displayQueue(pq);

    return 0;
}
