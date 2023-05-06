#include <iostream>
using namespace std;

void preorder(int N, int tree[][2]) {
  if (N == -1) return;
  cout << (char)(N + 'A');
  preorder(tree[N][0], tree);
  preorder(tree[N][1], tree);
}

void inorder(int N, int tree[][2]) {
  if (N == -1) return;
  inorder(tree[N][0], tree);
  cout << (char)(N + 'A');
  inorder(tree[N][1], tree);
}

void postorder(int N, int tree[][2]) {
  if (N == -1) return;
  postorder(tree[N][0], tree);
  postorder(tree[N][1], tree);
  cout << (char)(N + 'A');
}
int main(void)
{
  int N;
  int tree[27][2];
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
  preorder(0, tree);
  cout << '\n';
  inorder(0, tree);
  cout << '\n';
  postorder(0, tree);

  return 0;
}