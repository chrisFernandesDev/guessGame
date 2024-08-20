#include <stdio.h>
#include <stdlib.h>

void guessGame()
{
	int numberGame = rand() % 100 + 1;
	int i = 1;
	int numberUser = 0;

	printf("Digite uma tentativa: \n");
	scanf("%d", &numberUser);

	while (numberGame != numberUser)
	{
		if (numberGame > numberUser)
		{
			printf("Muito baixo! Tente novamente.\n");
			i++;
		}
		else if (numberGame < numberUser)
		{
			printf("Muito alto! Tente novamente.\n");
			i++;
		}

		printf("Digite uma tentativa: \n");
		scanf("%d", &numberUser);
	}

	printf("Parabéns! Você adivinhou o número em %d tentativas.\n", i);
}

int main()
{
	guessGame();
	return 0;
}
