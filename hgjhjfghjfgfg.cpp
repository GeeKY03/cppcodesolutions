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
	node* prev;
	node* next;

	node (int val) {
		data = val;
		prev = NULL;
		next = NULL;
	}
};

void InsertAtHead(node* &head, int val) {
	node* n = new node(val);
	head = n;
	return;
}

void InsertAtTail(node* &head, int val) {
	node* n = new node(val);

	// If linked list is empty
	if (head == NULL) {
		InsertAtHead(head, val);
	}

	node*temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = n;
	n->prev = temp;
}

void Display(node* head) {
	node* temp = head;
	cout << "NULL <-> ";
	while (temp != NULL) {
		cout << temp->data << " <-> ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

void DeleteHeadNode(node* &head) {
	node* to_be_deleted = head;
	head = head->next;
	head->prev = NULL;
	delete to_be_deleted;
}

void DeleteNode(node* &head, int pos) {
	// Edge case: If linked list is empty
	if (head == NULL) {
		return;
	}

	// Edge Case: If the head needs to be delted, i.e. pos==1
	if (pos == 1) {
		DeleteHeadNode(head);
		return;
	}

	int count = 1; /* to check if we reached position pos */
	node* temp = head;
	// Reach till the node which is supposed to be deleted
	// Also make sure we don't go beyond the end of linked list
	while (count != pos && temp != NULL) {
		temp = temp->next;
		count++;
	}
	node* to_be_deleted = temp;
	temp->prev->next = temp->next;
	// Edge Case: If the node which is to be delted is the last node
	if (temp->next != NULL) {
		temp->next->prev = temp->prev;
	}

	delete to_be_deleted;
}



int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	node* head = NULL;
	InsertAtHead(head, 1);
	InsertAtTail(head, 2);
	InsertAtTail(head, 3);
	InsertAtTail(head, 4);
	Display(head);
	DeleteNode(head, 1);
	Display(head);


	return 0;
}