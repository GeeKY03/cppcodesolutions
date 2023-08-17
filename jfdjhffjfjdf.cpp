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

node* Merge(node* &head1, node* &head2) {
	node* p1 = head1;
	node* p2 = head2;
	node* dummynode = new node(-1);
	node* p3 = dummynode;

	while (p1 != NULL && p2 != NULL) {
		if (p1->data > p2->data) {
			p3->next = p2;
			p2 = p2->next;
		}
		else {
			p3->next = p1;
			p1 = p1->next;
		}
		p3 = p3->next;
	}
	while (p1 != NULL) {
		p3->next = p1;
		p1 = p1->next;
		p3 = p3->next;
	}

	while (p2 != NULL) {
		p3->next = p2;
		p2 = p2->next;
		p3 = p3->next;
	}
	return dummynode->next;
}

void Display(node* head) {
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
	node* head1 = NULL;
	node* head2 = NULL;
	int arr1[] = {1, 4, 5, 7};
	int arr2[] = {2, 3, 6};

	for (int i = 0; i < 4; i++) {
		InsertAtTail(head1, arr1[i]);
	}

	for (int i = 0; i < 3; i++) {
		InsertAtTail(head2, arr2[i]);
	}

	Display(head1);
	Display(head2);

	node* newhead = Merge(head1, head2);
	Display(newhead);


	return 0;
}