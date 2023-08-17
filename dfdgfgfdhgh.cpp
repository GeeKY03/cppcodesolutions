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
	node* head = new node(1);
	InsertAtTail(head, 2);
	InsertAtTail(head, 3);
	InsertAtTail(head, 4);
	InsertAtTail(head, 5);
	Display(head);
	int left = 1, right = 4;

	int ctr = 1;
	node* first;
	node* ljoin = NULL, *prev = head, *curr = head->next, *next;
	while (ctr < left) {
		ljoin = prev;
		next = curr->next;
		prev = curr;
		curr = next;
		first = ljoin->next;
		ctr++;
	}
	while (ctr < right) {
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		ctr++;
	}
	if (ljoin == NULL) {
		head = prev;
	}
	else {
		first->next = curr;
		ljoin->next = prev;
		head = ljoin;
	}
	Display(head);






	return 0;
}