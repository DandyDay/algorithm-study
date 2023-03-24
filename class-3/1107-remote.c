#include <stdio.h>
#include <stdlib.h>

int	get_count(int *broken, int count, int target)
{
	
}

int	main(void)
{
	int	target;
	int	count;
	int	*broken;
	int	i;

	i = 0;
	scanf("%d", &target);
	scanf("%d", &count);
	broken = (int *)malloc(sizeof(int) * count)
	while (i < count)
	{
		scanf("%d", broken++);
		i++;
	}
	printf("%d", get_count(broken, count, target));
	return (0);
}
