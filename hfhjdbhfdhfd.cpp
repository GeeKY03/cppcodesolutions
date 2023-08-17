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

void InsertAtTail (node* &head, int val) {

	node* n = new node(val);

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

void DelteHeadNode(node* &head) {
	node* to_be_deleted = head;
	head = head->next;
	delete to_be_deleted;
}

node* Reverse(node* &head) {
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

void display(node* head) {
	node* temp = head;

	while (temp != NULL) {
		cout << temp->data << "->";
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
	display(head);
	InsertAtHead(head, 5);
	display(head);
	DelteHeadNode(head);
	display(head);
	node* newnode = Reverse(head);
	display(newnode);





	return 0;
}