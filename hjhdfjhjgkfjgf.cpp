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

struct  Node {
	int data;
	Node* next;

	Node(int val) {
		data = val;
		next = NULL;
	}
};

void InsertAtHead(Node* &head, int val) {
	Node* temp = new Node(val);
	if (head == NULL) {
		head = temp;
		return ;
	}
	temp->next = head;
	head = temp;
}

void InsertAtTail(Node* &head, int val) {
	if (head == NULL) {
		InsertAtHead(head, val);
		return;
	}

	Node* n = new Node(val);
	Node* temp = head;
	while (temp->next != NULL) {
		temp = temp -> next;
	}
	temp -> next = n;
}

int length(Node* head) {
	if (head == NULL) {
		return 0;
	}
	Node* temp = head;
	int ctr = 0;
	while (temp != NULL) {
		ctr++;
		temp = temp -> next;
	}
	return ctr;
}

void Display(Node* node) {
	if ( node == NULL) {
		return;
	}

	Node* temp = node;
	while (temp != NULL) {
		cout << temp->data << "-> ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

void InsertAtKnode(Node* &head, int val, int pos) {
	if (pos == 1) {
		InsertAtHead(head, val);
	}
	int ctr = 1;
	Node* temp = head;
	while (ctr != pos - 1) {
		temp = temp->next;
		ctr++;
	}
	Node* n = new Node(val);
	n -> next = temp ->next;
	temp -> next = n;
}

void InsertAtKnodefromEnd(Node* head, int val, int pos) {
	if (pos == 1) {
		InsertAtTail(head, val);
		return ;
	}
	if (pos == length(head)) {
		InsertAtHead(head, val);
	}

	int ctr = 1;
	Node* temp = head;
	int k = length(head) - pos + 1;
	while (ctr != k) {
		temp = temp -> next;
		ctr++;
	}
	Node* n = new Node(val);
	n -> next = temp -> next;
	temp -> next = n;
}

void DeleteHeadNode(Node* &head) {
	if (head == NULL) {
		return ;
	}
	Node* temp = head;

	head = head -> next;
	delete temp;
}

void DeleteNodeByValue(Node* head, int val) {
	Node* temp = head;
	if (head->data == val) {
		DeleteHeadNode(head);
		return ;
	}

	while (temp->next->data != val) {
		temp = temp->next;
	}
	Node* to_be_del = temp->next;
	temp->next = temp->next->next;
	delete to_be_del;
}


int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	Node* head = new Node(1);
	head->next = new Node(2);
	head->next->next = new Node(3);
	head->next->next->next = new Node(4);
	Display(head);
	cout << length(head) << endl;
	InsertAtHead(head, 5);
	InsertAtTail(head, 6);
	Display(head);
	cout << length(head) << endl;
	InsertAtKnode(head, 7, 3);
	Display(head);
	cout << length(head) << endl;
	InsertAtKnodefromEnd(head, 8, 2);
	Display(head);
	cout << length(head) << endl;
	DeleteNodeByValue(head, 4);
	Display(head);
	cout << length(head) << endl;




	return 0;
}