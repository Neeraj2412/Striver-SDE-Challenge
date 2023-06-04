/*
The very first approch would be maintaing a counter and visiting all the elements of the
list, we can simply return the ctr/2; 
O(N) time would be taken with zero extra space
*/

/*
Better Solution
*/
Node *findMiddle(Node *head) {
    // Write your code here
    Node* currMiddle = head;
    int i = 2;
    while(head->next != NULL){
        if(i % 2 == 0){
            currMiddle = currMiddle->next;
        }
        i++;
        head = head->next;
    }
    // cout<<currMiddle->val;
    return currMiddle;
}
