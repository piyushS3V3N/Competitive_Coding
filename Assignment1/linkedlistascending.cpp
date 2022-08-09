#include <iostream>

using namespace std;
struct node {
	int data;
	struct node *next;
};

struct node **head = {NULL};

void createNode(int x, int idx){
		struct node *newnode;
		struct node *temp;
		newnode = (struct node *) malloc(sizeof(newnode));
		newnode -> data = x;
		newnode -> next = NULL;
		if(head[idx] == NULL || head[idx]->data >= newnode->data)
		{	
			newnode->next = head[idx];
			head[idx] = newnode;
			return;
		}
		else{
			temp= head[idx];
			while(temp->next != NULL && temp->next->data < newnode->data)
				temp = temp->next;
			newnode->next = temp->next;
			temp->next = newnode;

		}
			
}

void freeList(int idx){
	struct node *currentNode;
	while(head[idx] != NULL)
	{
		currentNode = head[idx];
		head[idx] = head[idx]->next;
		free(currentNode);
	}
}

void displayNode(int idx){
		struct node *temp = head[idx];
		
		if(temp == NULL)
		{
			cout<<"[]"<<endl;
			return;
		}
		cout<<"[ ";
		while(temp->next != NULL){
				cout << temp->data << ", ";
				temp = temp->next;
		}
		cout<<temp->data<<" ]"<<endl;
}


void merge(int k){
	struct node *temp ;
	for(int i=1; i<k;i++)
	{
		temp = head[i];
		while(temp !=NULL){
			createNode(temp->data , 0);
			temp = temp->next;
			}
		freeList(i);
	}
	displayNode(0);
}
int main(){
		int k = 0;
		cout << "Enter the value for k ";
		cin >> k;
		head = new struct node*[k];
		for(int j =0 ; j<k;j++)
		for(int i =0 ;i<(rand()%10);i++){
			createNode((rand()%(k*5))+1, j);}
		for(int j=0 ; j<k;j++)
			displayNode(j);
		merge(k);
		delete(head);
}
