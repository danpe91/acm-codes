#include <cstdio>
#include <cstring>

double getscore( const char * correct, const char * answers) {

	double score = 0;

	for (int i = 0; i < strlen(correct); ++i)
	{
		if ( answers[i] != '#') {
			if ( answers[i] == correct[i]) {
				score++;
			} else {
				score -= 0.25;
			}
		}
	}

	return score;

}

int main() {
	
	int questions, cases;
	scanf("%d", &questions);
	char correctanswers[questions + 5];
	scanf("%s", correctanswers);
	scanf("%d", &cases);

	while ( cases-- ) 
	{
		char answers[questions + 5];
		scanf("%s", answers);

		printf("%.2lf\n", getscore(correctanswers, answers));
	}
}
