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

struct node {
public:
	int data;
	node* next;

	node (int val) {
		data = val;
		next = NULL;
	}
};

void InsertAtHead(node* &head, int val) {
	node* n = new node(val);
	if (head == NULL) {
		head = n;
		return;
	}

	n->next = head;
	head = n;
}

void InsertAtTail(node* &head, int val) {
	node* n = new node (val);

	if (head == NULL) {
		InsertAtHead(head, val);
		return ;
	}

	node* temp = head;

	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = n;
}

// Insert at Kth node from beginning
void InsertInMiddle(node* &head, int val, int pos) {
	node* n = new node (val);
	if (pos == 1) {
		InsertAtHead(head, val);
		return ;
	}

	int count = 1;
	node* temp = head;
	while (count  != pos - 1) {
		temp = temp->next;
		count++;
	}
	n->next = temp->next;
	temp->next = n;
}

int length(node* head) {
	node* temp = head;
	int count = 0;
	while (temp != NULL) {
		count++;
		temp = temp->next;
	}
	return count;
}

void InsertAtMiddleFromEnd(node* &head, int val, int pos) {
	node* n = new node(val);
	int len = length(head);
	if (pos == 0) {
		InsertAtTail(head, val);
		return ;
	}

	if (pos == len) {
		InsertAtHead(head, val);
		return ;
	}

	int count = 1;
	int kth = len - pos + 1;
	node* temp = head;
	while (count != kth) {
		temp = temp->next;
		count++;
	}
	n->next = temp->next;
	temp->next = n;
}

void DeleteHeadNode(node* &head) {
	node* to_be_del = head;
	head = head->next;
	delete to_be_del;
}

// Deleting by passing the value of the node
void DeleteAnyNodeByVal(node* head, int val) {
	node* temp = head;
	if (head->data == val) {
		DeleteHeadNode(head);
		return ;
	}

	while (temp->next->data != val) {
		temp = temp->next;
	}
	node* to_be_del = temp->next;
	temp->next = temp->next->next;
	delete to_be_del;
}

// Deleting by passing the pos of the node from beginning
void DeleteAnyNodeByPosfromStart(node* head, int pos) {
	node* temp = head;

	// 1-indexed
	if (pos == 1) {
		DeleteHeadNode(head);
		return ;
	}
	int count = 1;
	while (count != pos - 1) {
		count++;
		temp = temp->next;
	}

	node* to_be_del = temp->next;
	temp->next = temp->next->next;
	delete to_be_del;
}

// void Display(node * head) {
// 	node* temp = head;
// 	while (temp != NULL) {
// 		cout << temp->data << " -> ";
// 		temp = temp->next;
// 	}
// 	cout << "NULL" << endl;
// }

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	node* head = NULL;
	InsertAtHead(head, 1);
	InsertAtTail(head, 2);
	InsertAtTail(head, 3);
	Display(head);
	InsertInMiddle(head, 4, 2);
	Display(head);
	InsertAtMiddleFromEnd(head, 5, 2);
	Display(head);
	DeleteHeadNode(head);
	Display(head);
	DeleteAnyNodeByVal(head, 5);
	Display(head);
	DeleteAnyNodeByPosfromStart(head, 2);
	Display(head);




	return 0;
}