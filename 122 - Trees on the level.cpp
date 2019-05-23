/******************************************************************
 *                   BISMILLAHIR RAHMANIR RAHIM                   *
 *                     Saddam Hossain shishir                     *
 *       Hajee Mohammad Danesh Science & Technology University    *
 *                                                                *
 ***************************************************************** */
#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<string>
#include<set>
#include<cmath>
#include<cctype>
#include<stack>
#include<cstdlib>
#include<utility>
#include<vector>
#include<deque>
#include<queue>
#include<algorithm>

#define sc scanf
#define si(t) scanf("%d",&t)
#define sl(t) scanf("%I64d",&t)
#define sii(a,b) scanf("%d%d",&a,&b)

#define P(a) printf("%d\n",a)
#define PLN(a) printf("%I64d ",a)
#define pf printf

#define gcd(a,b) __gcd(a,b)
#define ff first
#define ss second
#define pr1(a) cout<<a<<endl
#define pr2(a,b) cout<<a<<" "<<b<<endl

#define pii pair<int,int>
#define pi acos(-1.0)
#define PI 3.1415926535897932385
#define Sin(a) sin((pi*a)/180)
#define siz 1000001
#define mem(ar) memset(ar,0,sizeof ar)

#define one(x) __builtin_popcount(x)
typedef long long ll;
using namespace std;
//int dx[]= {-1,-1,0,0,1,1};
//int dy[]= {-1,0,-1,1,0,1};
//int dx[]= {0,0,1,-1};/*4 side move*/
//int dy[]= {-1,1,0,0};/*4 side move*/
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*night move*/
map<ll,bool>visi;
string str,str2;
struct Node
{
    int val;
    Node* left;
    Node* right;
    Node()
    {
        this-> val = -1;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *root;
int inod,nod,ck;
Node* insert(Node* root,int num,int i)
{
    if(i==str2.size())
    {
        // cout<<root->val<<endl;
        if(root->val!=-1)
            ck=1;
        root->val=num;
    }
    else if(str2[i]=='L')
    {
        if(root->left==NULL)
        {
            nod++;
            Node *node=new Node();
            root->left=node;
            //root->left->val-999999;
            insert(node,num,i+1);
        }
        else
            insert(root->left,num,i+1);
    }
    else if(str2[i]=='R')
    {
        if(root->right==NULL)
        {
            nod++;
            Node *node=new Node();
            root->right=node;
            //  root->right->val=-999999;
            insert(node,num,i+1);
        }
        else
            insert(root->right,num,i+1);
    }
}
/*
void Preorder(Node *root)
{
    //printf("%d ",root->val);
    if(root == NULL) return;
    Preorder(root->left);
    Preorder(root->right);
     printf("%d ",root->val);
}
*/
void bfs()
{
    int id;
    Node* node;
    queue<Node*>q;
    vector<int>v;
    q.push(root);
    while(!q.empty())
    {
        node=q.front();
        q.pop();
        v.push_back(node->val);
        if(node->left!=NULL)
            q.push(node->left);
        if(node->right!=NULL)
            q.push(node->right);
    }
    id=v.size();
    for(int i=0; i<id-1; i++)
        printf("%d ",v[i]);
    printf("%d\n",v[id-1]);
    v.clear();
}
void clar(Node *root)
{
    if(root==NULL)
        return;
    clar(root->left);
    clar(root->right);
    delete root;
}
int main()
{
    //freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
    int  i,j,n,m,a,c,b,ck,t,x,y,ans,rem,num,cnt,lo,ln,hi,sum,cs=1;
    root=new Node();
    inod=ck=0;
    nod=1;
    // root->val=-999999;
    // printf("%d\n",root->val);
    while(cin>>str)
    {
        if(str=="()")
        {
            // cout<<
            if(inod!=nod||ck==1)  printf("not complete\n");
            else
                bfs();
            clar(root);
            root=new Node();
            inod=ck=0;
            nod=1;
            // root->val=-999999;
            //Preorder(root);
            //cout<<root->val;
        }
        else
        {
            inod++;
            num =0;
            ln=str.size();
            str2="";
            for(i=1; i<ln-1; i++)
            {
                if(isdigit(str[i]))
                    num=num*10+str[i]-'0';
                if(isalpha(str[i]))
                    str2+=str[i];
            }
            insert(root,num,0);
        }
    }

}

