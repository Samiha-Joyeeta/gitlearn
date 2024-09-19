#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;

};

struct node* G_root;


void traverse(struct node *root)
{
     if(root->left != '\0')
         traverse(root->left);

     printf("%d ",root->data);

    if(root->right != '\0')
         traverse(root->right);

}


void insert_node(struct node* root, int val)
{

    printf("root = %x  val = %d \n", root, val);
    if(val <= root->data)
    {
        printf("ok left\n");
        if(root->left == '\0')
        {
            struct node* new_node;
            int temp;

            new_node= (struct node*) malloc(sizeof(struct node));
            new_node->left=new_node->right= '\0';
            new_node->data= val;

            root->left= new_node;
            printf("Inserted in left of %d\n",root->data);

        }
        else
        {
insert_node(root->left, val);
        }

    }
    else
    {
        if(root->right == '\0')
        {
            struct node* new_node;
            int temp;

            new_node= (struct node*) malloc(sizeof(struct node));
            new_node->left=new_node->right= '\0';
            new_node->data= val;

            root->right= new_node;
            printf("Inserted in right of %d\n",root->data);

        }
        else
        {
insert_node(root->right, val);
        }

    }

}

int main()
{

    int n;
    scanf("%d",&n);

    struct node *new_node, *curr_node, *root;
    int temp;


    for(int i=1; i<=n ; i++)
    {
        if(i==1)
        {
            new_node= (struct node*) malloc(sizeof(struct node));
            new_node->left=new_node->right= '\0';
            scanf("%d",&temp);
            new_node->data= temp;

            G_root=new_node;
            printf("%x %x %x %d \n", G_root, G_root->left, G_root->right, G_root->data);
        }
        else
        {
            curr_node=G_root;

            scanf("%d",&temp);
            insert_node(curr_node, temp);
}
    }

    printf("\n Traversing the tree");
    traverse(G_root);
return 0;
}

