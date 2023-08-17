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

void Dislpay(node* head) {
	node* temp = head;
	while (temp != NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

void MakeCycle(node* head, int pos) {
	node* temp = head;
	int count = 1;
	node* startNode;

	while (temp->next != NULL) {
		if (count == pos) {
			startNode = temp;
		}
		count++;
		temp = temp->next;
	}
	temp->next = startNode;
}

bool detectCycle(node* head) {
	node* fast = head;
	node* slow = head;

	while (fast->next != NULL  &&  fast->next->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;

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
	InsertAtTail(head, 5);
	InsertAtTail(head, 6);
	InsertAtTail(head, 7);
	InsertAtTail(head, 8);
	InsertAtTail(head, 9);
	InsertAtTail(head, 10);
	MakeCycle(head, 5);
	cout << detectCycle(head);



	return 0;
}