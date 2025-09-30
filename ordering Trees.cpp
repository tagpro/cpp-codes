#include <iostream>

using namespace std;

struct node{
int key;
node *l;
node *r;
}*root,*a,*b,*c,*ptr;

void insert(int val)
{
    int flag = -1;
    if(root==NULL)
    {
        root = new(node);
        root->key = val;
        root->l = NULL;
        root->r = NULL;
    }
    else
    {
        a = root;
        b = a;
        while(b!=NULL)
        {
         if(b->key > val)   //go to left
            {
                c=b;
                b = b->l;
                flag = 0;
            }
         else               //go to right
            {
                c=b;
                b = b->r;
                flag = 1;
            }
        }
        if(flag==0)
        {
            ptr = new(node);
            ptr->key = val;
            ptr->l = NULL;
            ptr->r = NULL;
            c->l = ptr;
        }
        else
        {
            ptr = new(node);
            ptr->key = val;
            ptr->l = NULL;
            ptr->r = NULL;
            c->r = ptr;
        }
    }
}

void inorder(node *p)
{
    if(p!=NULL)
    {
        inorder(p->l);
        cout<<" "<<p->key<<" ";
        inorder(p->r);
    }
}

void preorder(node *p)
{
    if(p!=NULL)
    {
        cout<<" "<<p->key<<" ";
        preorder(p->l);
        preorder(p->r);
    }
}

void postorder(node *p)
{
    if(p!=NULL)
    {
        postorder(p->l);
        postorder(p->r);
        cout<<" "<<p->key<<" ";
    }
}

int main()
{
    int key;
    char c='y';
    while(c=='y')
    {
        cout<<"Key please :";
        cin>>key;
        insert(key);
        cout<<"Want to add more :";
        cin>>c;
    }
    inorder(root);
    cout<<"\n";
    preorder(root);
    cout<<"\n";
    postorder(root);
    cout<<"\n";
    return 0;
}
