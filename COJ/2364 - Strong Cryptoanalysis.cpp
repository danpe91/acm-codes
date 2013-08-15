#include <cstdio>
#include <queue>

#define N 26
int main() {

  short t = 0, number = 0, reps = 0;
  char letter = 'z';
  scanf("%hd", &t);

  while(t--) {
    letter = 'z';
    std::priority_queue<short> repetitions;

    for (int i = 0; i < N; ++i) {
      
      scanf("%hd", &number);
      if (number) {
        repetitions.push(number);
      }
    }

    while(!repetitions.empty()) {

      reps = repetitions.top();
      repetitions.pop();

      for (int i = 0; i < reps; ++i) {
        printf("%c", letter);
      }
      letter--;
    }
    printf("\n");
  }
}
