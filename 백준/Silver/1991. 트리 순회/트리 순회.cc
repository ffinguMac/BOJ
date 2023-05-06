#include <iostream>
using namespace std;

int tree[27][2];
void preorder(int N) 
{
  if (N == -1) 
    return;
  cout << (char)(N + 'A');
  preorder(tree[N][0]);
  preorder(tree[N][1]);
}

void inorder(int N) 
{
  if (N == -1) 
    return;
  inorder(tree[N][0]);
  cout << (char)(N + 'A');
  inorder(tree[N][1]);
}

void postorder(int N) 
{
  if (N == -1) 
    return;
  postorder(tree[N][0]);
  postorder(tree[N][1]);
  cout << (char)(N + 'A');
}
int main(void)
{
  int N;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    char a, b, c;
    cin >> a >> b >> c;
    a = a - 'A';
    if (b == '.')
      tree[a][0] = -1;
    else
      tree[a][0] = b - 'A';
    if (c == '.')
      tree[a][1] = -1;
    else
      tree[a][1] = c - 'A';
  }
  preorder(0);
  cout << '\n';
  inorder(0);
  cout << '\n';
  postorder(0);

  return 0;
}