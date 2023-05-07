#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *detectCycle(ListNode *head) {
    ListNode* temp=head;
    vector<int>* hashtable=new vector<int>[10];
    /*
    for(int i=0;i<10;i++){
        for(int j=0;j<hashtable[i].size();j++){
            cout<<hashtable[i][j];
        }
        cout<<"zort"<<endl;
    }
    */
    while(temp){
        for(int j=0;j<hashtable[temp->val%10].size();j++){
            if(temp->val==hashtable[temp->val%10][j]) return temp;
        }
        hashtable[temp->val%10].push_back(temp->val);
        cout<<temp->val<<' ';
        temp=temp->next;
    }
    /*
    for(int i=0;i<10;i++){
        for(int j=0;j<hashtable[i].size();j++){
            cout<<hashtable[i][j];
        }
        cout<<"zort"<<endl;
    }
    */
    return NULL;
}

int main()
{
    ListNode* head=new ListNode(3);
    head->next=new ListNode(2);
    head->next->next=new ListNode(0);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=head->next;
    //while(temp){
    //    cout<<temp->val<<endl;
    //    temp=temp->next;
    //}
    ListNode* temp=detectCycle(head);
    cout<<temp->val<<endl;
    return 0;
}
