// Circular Linked List
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

	node (int val) {
		data = val;
		next = NULL;
	}
};

void InsertAtHead(node* &head, int val) {
	// No choice but to traverse the entire linked list in case of Circular linked list
	node* n = new node(val);

	if (head == NULL) {
		n->next = n;
		head = n;
		/* In case of empty circular linked list,
		the element next to n will be n itself */
		return;
	}

	node* temp = head;
	while (temp->next != head) {
		temp = temp->next;
	}
	temp->next = n;
	n->next = head;
	head = n;
}

void InsertAtTail(node* &head, int val) {
	if (head == NULL) {
		InsertAtHead(head, val);
		return;
	}
	node* n = new node(val);

	node* temp = head;
	while (temp->next != head) {
		temp = temp->next;
	}

	temp->next = n;
	n->next = head;
}

void display(node* head) {
	node* temp = head;
	do {
		cout << temp->data << "->";
		temp = temp->next;
	} while (temp != head);
	cout << endl;
}

void DeleteAtHead(node* &head) {
	node* temp = head;
	while (temp->next != head) {
		temp = temp->next;
	}
	node* to_be_deleted = head;
	temp->next = head->next;
	head = head->next;
	delete to_be_deleted;
}

void Deletion(node* &head, int pos) {
	if (pos == 1) {
		DeleteAtHead(head);
		return;
	}
	node* temp = head;
	int count = 1;
	while (count != pos) {
		temp = temp->next;
		count++;
	}
	node* to_be_delted = temp->next;
	temp->next = temp->next->next;
	delete to_be_delted;
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
	display(head);
	InsertAtHead(head, 5);
	display(head);
	Deletion(head, 1);
	display(head);




	return 0;
}