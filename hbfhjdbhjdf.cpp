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

	// if linked list is empty
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

int length(node* head) {
	if (head == NULL) {
		return 0;
	}
	node* temp = head;
	int count = 0;

	while (temp != NULL) {
		temp = temp->next;
		count++;
	}
	return count;
}

node* AppendLastKNodes(node* &head, int k) {
	int count = 1;
	int len = length(head);
	node* temp = head;
	node* NewTail;
	node* NewHead;
	while (temp->next != NULL) {
		if (count == len - k) {
			NewTail = temp;
		}
		else if (count == len - k + 1) {
			NewHead = temp;
		}
		temp = temp->next;
		count++;
	}
	temp->next = head;
	NewTail->next = NULL;
	return NewHead;
}

void Display(node* head) {
	node* temp = head;
	while (temp != NULL) {
		cout << temp->data << "-> ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
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
	InsertAtTail(head, 5);
	InsertAtTail(head, 6);
	Display(head);
	node* newhead = AppendLastKNodes(head, 4);
	Display(newhead);





	return 0;
}