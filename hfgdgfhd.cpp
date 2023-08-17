#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

class node {
public:
	int data;
	node* next;

	node(int val) {
		data = val;
		next = NULL;
	}
};

void InsertAtTail(node* &head, int val) {
	node* n = new node(val);

	// If linked List is empty
	if (head == NULL) {
		head = n;
		return;
	}

	node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = n;
}

void InsertAtHead(node* &head, int val) {
	node* n = new node(val);
	n->next = head;
	head = n;
}


// Dislpaying Linked List assuming there is no cylcle in it
void Display(node* head) {
	node* temp = head;
	while (temp != NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

// Deletion of the head node
void DelteHeadNode(node* &head) {
	node* to_be_deleted = head;
	// node next to head is our new head
	head = head->next;

	delete to_be_deleted;
}

// deletion in linked list at node other than head node
void Deletion(node* &head, int val) {
	// If linkded list is empty
	if (head == NULL) {
		return;
	}

	node* temp = head;
	while (temp->next->data != val) {
		temp = temp->next;
	}

	node* to_be_deleted = temp->next;

	// Change the links
	temp->next = temp->next->next;

	// delete the node
	delete to_be_deleted;
}

node* Reverse(node* &head) {
	// Need 3 pointers
	node* prev_p = NULL;
	node* curr_p = head;
	node* next_p;
	while (curr_p != NULL) {
		next_p = curr_p->next;
		curr_p->next = prev_p;


		prev_p = curr_p;
		curr_p = next_p;
	}
	return prev_p;
}

node* ReverseKNodes(node* &head, int k) {
	// Ex: k=2 and 1->2->3->4
	// Ans= 2->1->4->3
	// Reversed every group ok K nodes with every element being in exactly one group

	node* prev_p = NULL;
	node* curr_p = head;
	node* next_p;

	// Keep a track of first k nodes, we keep a ctr var
	int count = 0;
	while (curr_p != NULL && count < k) {
		next_p = curr_p->next;
		curr_p->next = prev_p;

		prev_p = curr_p;
		curr_p = next_p;
		count++;
	}

	// check if we reached the end of linked list
	if (next_p != NULL) {
		head->next = ReverseKNodes(next_p, k);
	}

	return prev_p;
}


// To detect cycle in a linked list
bool DetectCycle(node* head) {
	node* slow = head;
	node* fast = head;

	while (fast != NULL) {
		fast = fast->next->next;
		slow = slow->next;

		// If at some point, slow ptr and fast ptr end up at same node, then we have a cycle
		if (fast == slow) {
			return true;
		}
	}
	return false;
}


int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	node* head = NULL;

	InsertAtTail(head, 1);
	InsertAtTail(head, 2);
	InsertAtTail(head, 3);
	InsertAtTail(head, 4);
	InsertAtHead(head, 5);
	Display(head);
	Deletion(head, 2);
	cout << "After deletion: " << endl;
	Display(head);
	DelteHeadNode(head);
	cout << "After deletion of head: " << endl;
	Display(head);
	cout << "After Reversal;" << endl;

	node* newhead = Reverse(head);
	Display(newhead);


	return 0;
}